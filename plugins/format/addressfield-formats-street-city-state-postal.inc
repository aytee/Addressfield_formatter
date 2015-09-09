<?php
/**
 * @file
 * Generates a US Standard format. Street, City, State Postal format.
 */

$plugin = array(
  'title' => t('Street, City, State Postal'),
  'format callback' => 'addressfield_formats_street_city_state_postal',
  'type' => 'name',
  'weight' => 0,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_street_city_state_postal (&$format, $address, $context = array()) {

  if ($context['mode'] === 'render') {

    // move zip to end
    if (isset($format['locality_block']['postal_code'])) {
      $format['locality_block']['postal_code']['#weight'] = 10;
    }

    // coma and space before city
    if (isset($format['locality_block']['locality'])) {
      $format['locality_block']['locality']['#prefix'] = ', ';
    }

    // coma and space before state
    if (isset($format['locality_block']['administrative_area'])) {
      $format['locality_block']['administrative_area']['#prefix'] = ', ';
    }

    // hide country
    if (isset($format['country'])) {
      $format['country']['#access'] =  FALSE;
    }

  }
}
