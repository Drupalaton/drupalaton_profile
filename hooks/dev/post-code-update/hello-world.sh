#!/bin/sh
#
# This run an automatic drush make every push, which deploy the new modules.
# test test

site="$1"
target_env="$2"
#site_url="http://drupalatondev.prod.acquia-sites.com"
echo "PWD: $("pwd")
drush @$site.$target_env make "$site_url/profiles/drupalaton_profile/drupalaton_profile.make" --yes

