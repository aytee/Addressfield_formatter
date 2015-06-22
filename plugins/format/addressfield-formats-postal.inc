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
  // Hide Postal Code
  if (isset($format['locality_block']['postal_code'])) {
    $format['locality_block']['postal_code']['#access'] = TRUE;
  }
}
