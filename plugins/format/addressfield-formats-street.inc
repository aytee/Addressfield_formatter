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
  // Show Street
  if (isset($format['street_block'])) {
    $format['street_block']['#access'] = TRUE;
  }
}
