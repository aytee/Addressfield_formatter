<?php

/**
 * @file
 * Hide the postal code field.
 */

$plugin = array(
  'title' => t('Addressfield Formats: State Only'),
  'format callback' => 'addressfield_formats_format_addressfield_formats_state',
  'type' => 'address',
  'weight' => 200,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_format_addressfield_formats_state(&$format, $address, $context = array()) {
  // Hide Street
  if (isset($format['street_block'])) {
    $format['street_block']['#access'] = FALSE;
  }
  // Hide City
  if (isset($format['locality_block']['locality'])) {
    $format['locality_block']['locality']['#access'] = FALSE;
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
