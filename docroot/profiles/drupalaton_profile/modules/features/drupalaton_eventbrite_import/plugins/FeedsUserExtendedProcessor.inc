<?php
/**
 * @file
 * FeedsUserExtendedProcessor class.
 */
/**
 * Feeds processor plugin. Create users from feed items.
 */
class FeedsUserExtendedProcessor extends FeedsUserProcessor {
  /**
   * Save a user account.
   */
  protected function entitySave($account) {
    $mail = !$account->uid;
    if ('' == $account->pass) {
      $account->pass = user_password();
    }
    parent::entitySave($account);
    if ($mail) {
      _user_mail_notify('register_admin_created', $account);
    }
  }
}
