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
  // Hide state
  if (isset($format['locality_block']['administrative_area'])) {
    $format['locality_block']['administrative_area']['#access'] = TRUE;
  }
}
