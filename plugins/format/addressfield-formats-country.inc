<?php

/**
 * @file
 * Hide the postal code field.
 */

$plugin = array(
  'title' => t('Addressfield Formats: Country Only'),
  'format callback' => 'addressfield_formats_format_addressfield_formats_country',
  'type' => 'address',
  'weight' => 200,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_formats_format_addressfield_formats_country(&$format, $address, $context = array()) {
  // Show Country
  if (isset($format['locality_block']['country'])) {
    $format['locality_block']['country']['#access'] = TRUE;
  }
}
