#!/bin/sh
#
# This run an automatic drush make every push, which deploy the new modules.
# 
site="$1"
target_env="$2"
root_directory=$(drush @drupalaton.local status --fields=root --field-labels=0 | tr -d ' ')

drush @$site.$target_env make "$root_directory/profiles/drupalaton_profile/drupalaton_profile.make" --yes

