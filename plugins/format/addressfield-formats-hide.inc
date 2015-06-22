<?php

/**
 * @file
 * Hide the postal code field.
 */

$plugin = array(
  'title' => t('Addressfield Formats: Hide all'),
  'format callback' => 'addressfield_formats_format_addressfield_formats_hide',
  'type' => 'address',
  'weight' => 100,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_format_addressfield_formats_hide(&$format, $address, $context = array()) {
  // Hide Street
  if (isset($format['street_block'])) {
    $format['street_block']['#access'] = FALSE;
  }
  // Hide Locality
  if (isset($format['locality_block']['locality']['#access'])) {
    $format['locality_block']['locality']['#access'] = FALSE;
  }
  // Hide state
  if (isset($format['locality_block']['administrative_area'])) {
    $format['locality_block']['administrative_area']['#access'] = FALSE;
  }
  // Hide Postal Code
  if (isset($format['locality_block']['postal_code'])) {
    $format['locality_block']['postal_code']['#access'] = FALSE;
  }
  // Hide Country
  if (isset($format['country'])) {
    $format['country']['#access'] = FALSE;
  }
}
