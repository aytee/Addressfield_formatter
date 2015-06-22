<?php

/**
 * @file
 * Hide the postal code field.
 */

$plugin = array(
  'title' => t('Hide all but city'),
  'format callback' => 'addressfield_formats_format_addressfield_formats_street',
  'type' => 'address',
  'weight' => 200,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_format_addressfield_formats_street(&$format, $address, $context = array()) {
  // Hide Street
  if (isset($format['street_block'])) {
    $format['street_block']['#access'] = FALSE;
  }

  // Hide state
  if (isset($format['locality_block']['administrative_area'])) {
    $format['locality_block']['administrative_area']['#access'] = FALSE;
  }
  // Hide Country
  if (isset($format['country'])) {
    $format['country']['#access'] = FALSE;
  }
  // Hide Postal Code
  if (isset($format['locality_block']['postal_code'])) {
    $format['locality_block']['postal_code']['#access'] = FALSE;
  }
  // Remove the trailing comma
  if (isset($format['locality_block']['locality']['#suffix'])) {
    $format['locality_block']['locality']['#suffix'] = '';
  }
}
