<?php
/**
 * @file
 * ascm_civi.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ascm_civi_user_default_permissions() {
  $permissions = array();

  // Exported permission: access AJAX API.
  $permissions['access AJAX API'] = array(
    'name' => 'access AJAX API',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviCRM.
  $permissions['access CiviCRM'] = array(
    'name' => 'access CiviCRM',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviContribute.
  $permissions['access CiviContribute'] = array(
    'name' => 'access CiviContribute',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviEvent.
  $permissions['access CiviEvent'] = array(
    'name' => 'access CiviEvent',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviMail.
  $permissions['access CiviMail'] = array(
    'name' => 'access CiviMail',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviMail subscribe/unsubscribe pages.
  $permissions['access CiviMail subscribe/unsubscribe pages'] = array(
    'name' => 'access CiviMail subscribe/unsubscribe pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviMember.
  $permissions['access CiviMember'] = array(
    'name' => 'access CiviMember',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviPledge.
  $permissions['access CiviPledge'] = array(
    'name' => 'access CiviPledge',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access CiviReport.
  $permissions['access CiviReport'] = array(
    'name' => 'access CiviReport',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access Contact Dashboard.
  $permissions['access Contact Dashboard'] = array(
    'name' => 'access Contact Dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access Report Criteria.
  $permissions['access Report Criteria'] = array(
    'name' => 'access Report Criteria',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access all custom data.
  $permissions['access all custom data'] = array(
    'name' => 'access all custom data',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access contact reference fields.
  $permissions['access contact reference fields'] = array(
    'name' => 'access contact reference fields',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access deleted contacts.
  $permissions['access deleted contacts'] = array(
    'name' => 'access deleted contacts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: access uploaded files.
  $permissions['access uploaded files'] = array(
    'name' => 'access uploaded files',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: add contacts.
  $permissions['add contacts'] = array(
    'name' => 'add contacts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: administer CiviCRM.
  $permissions['administer CiviCRM'] = array(
    'name' => 'administer CiviCRM',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: administer Reports.
  $permissions['administer Reports'] = array(
    'name' => 'administer Reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: administer Tagsets.
  $permissions['administer Tagsets'] = array(
    'name' => 'administer Tagsets',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: administer dedupe rules.
  $permissions['administer dedupe rules'] = array(
    'name' => 'administer dedupe rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: administer reserved groups.
  $permissions['administer reserved groups'] = array(
    'name' => 'administer reserved groups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: administer reserved reports.
  $permissions['administer reserved reports'] = array(
    'name' => 'administer reserved reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: administer reserved tags.
  $permissions['administer reserved tags'] = array(
    'name' => 'administer reserved tags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: delete activities.
  $permissions['delete activities'] = array(
    'name' => 'delete activities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: delete contacts.
  $permissions['delete contacts'] = array(
    'name' => 'delete contacts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: delete in CiviContribute.
  $permissions['delete in CiviContribute'] = array(
    'name' => 'delete in CiviContribute',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: delete in CiviEvent.
  $permissions['delete in CiviEvent'] = array(
    'name' => 'delete in CiviEvent',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: delete in CiviMail.
  $permissions['delete in CiviMail'] = array(
    'name' => 'delete in CiviMail',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: delete in CiviMember.
  $permissions['delete in CiviMember'] = array(
    'name' => 'delete in CiviMember',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: delete in CiviPledge.
  $permissions['delete in CiviPledge'] = array(
    'name' => 'delete in CiviPledge',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: edit all contacts.
  $permissions['edit all contacts'] = array(
    'name' => 'edit all contacts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: edit all events.
  $permissions['edit all events'] = array(
    'name' => 'edit all events',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: edit contributions.
  $permissions['edit contributions'] = array(
    'name' => 'edit contributions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: edit event participants.
  $permissions['edit event participants'] = array(
    'name' => 'edit event participants',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: edit groups.
  $permissions['edit groups'] = array(
    'name' => 'edit groups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: edit memberships.
  $permissions['edit memberships'] = array(
    'name' => 'edit memberships',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: edit pledges.
  $permissions['edit pledges'] = array(
    'name' => 'edit pledges',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: import contacts.
  $permissions['import contacts'] = array(
    'name' => 'import contacts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: make online contributions.
  $permissions['make online contributions'] = array(
    'name' => 'make online contributions',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: merge duplicate contacts.
  $permissions['merge duplicate contacts'] = array(
    'name' => 'merge duplicate contacts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: profile create.
  $permissions['profile create'] = array(
    'name' => 'profile create',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: profile edit.
  $permissions['profile edit'] = array(
    'name' => 'profile edit',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: profile listings.
  $permissions['profile listings'] = array(
    'name' => 'profile listings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: profile listings and forms.
  $permissions['profile listings and forms'] = array(
    'name' => 'profile listings and forms',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: profile view.
  $permissions['profile view'] = array(
    'name' => 'profile view',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: register for events.
  $permissions['register for events'] = array(
    'name' => 'register for events',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: translate CiviCRM.
  $permissions['translate CiviCRM'] = array(
    'name' => 'translate CiviCRM',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: view all activities.
  $permissions['view all activities'] = array(
    'name' => 'view all activities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: view all contacts.
  $permissions['view all contacts'] = array(
    'name' => 'view all contacts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: view all notes.
  $permissions['view all notes'] = array(
    'name' => 'view all notes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: view event info.
  $permissions['view event info'] = array(
    'name' => 'view event info',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: view event participants.
  $permissions['view event participants'] = array(
    'name' => 'view event participants',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'civicrm',
  );

  // Exported permission: view public CiviMail content.
  $permissions['view public CiviMail content'] = array(
    'name' => 'view public CiviMail content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'civicrm',
  );

  return $permissions;
}
