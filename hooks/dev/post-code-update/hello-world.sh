#!/bin/sh
#
# This run an automatic drush make every push, which deploy the new modules.
# test test

site="$1"
target_env="$2"
drush @$site.$target_env make /var/www/html/drupalatondev --yes

