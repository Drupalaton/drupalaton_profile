<?php
/**
 * @file
 * drupalaton_user_profile.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function drupalaton_user_profile_user_default_roles() {
  $roles = array();

  // Exported role: attendees.
  $roles['attendees'] = array(
    'name' => 'attendees',
    'weight' => 6,
  );

  // Exported role: individual sponsor.
  $roles['individual sponsor'] = array(
    'name' => 'individual sponsor',
    'weight' => 8,
  );

  // Exported role: speaker.
  $roles['speaker'] = array(
    'name' => 'speaker',
    'weight' => 7,
  );

  return $roles;
}
