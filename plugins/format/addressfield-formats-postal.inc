<?php

/**
 * @file
 * Hide the postal code field.
 */

$plugin = array(
  'title' => t('Addressfield Format: Postal Only'),
  'format callback' => 'addressfield_formats_format_addressfield_formats_postal',
  'type' => 'address',
  'weight' => 200,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_format_addressfield_formats_postal(&$format, $address, $context = array()) {
  // Hide Street
  if (isset($format['street_block'])) {
    $format['street_block']['#access'] = FALSE;
  }
  // Hide City
  if (isset($format['locality_block']['locality'])) {
    $format['locality_block']['locality']['#access'] = FALSE;
  }
  // Hide state
  if (isset($format['locality_block']['administrative_area'])) {
    $format['locality_block']['administrative_area']['#access'] = FALSE;
  }
  // Hide Country
  if (isset($format['country'])) {
    $format['country']['#access'] = FALSE;
  }
}
