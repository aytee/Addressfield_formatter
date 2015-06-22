<?php

/**
 * @file
 * Hide the postal code field.
 */

$plugin = array(
  'title' => t('Addressfield Formats: City Only'),
  'format callback' => 'addressfield_formats_format_addressfield_formats_city',
  'type' => 'address',
  'weight' => 200,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_format_addressfield_formats_city(&$format, $address, $context = array()) {
  // Show Locality
  if (isset($format['locality_block']['locality']['#access'])) {
    $format['locality_block']['locality']['#access'] = TRUE;
  }
  // Remove the trailing comma
  if (isset($format['locality_block']['locality']['#suffix'])) {
    $format['locality_block']['locality']['#suffix'] = '';
  }
}
