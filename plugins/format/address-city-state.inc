<?php

/**
 * @file
 * Hide the postal code field.
 */

$plugin = array(
  'title' => t('Hide all but City, State'),
  'format callback' => 'addressfield_formats_format_address_city_state',
  'type' => 'address',
  'weight' => 150,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_format_address_city_state(&$format, $address, $context = array()) {
  // Hide Street
  if (isset($format['street_block'])) {
    $format['street_block']['#access'] = FALSE;
  }
  // Hide Country
  if (isset($format['country'])) {
    $format['country']['#access'] = FALSE;
  }
  // Hide Postal Code
  if (isset($format['locality_block']['postal_code'])) {
    $format['locality_block']['postal_code']['#access'] = FALSE;
  }
}
