
## Installation

1. Setup a Firebase instance on firebase.com
1. Import architecture, see example import in docs.
1. Add custom badges, see docs.
1. Add [Deft library](https://github.com/tableau-mkt/deft) to module
1. Enable module, via drush or Drupal UI.
1. Set URL and admin options at `admin/config/services/firebadges`

## Local development

To while making code changes to the Deft library, it's best use a symlink to
the local location of the repo rather than a Git submodule. Adjust where Drupal
looks for the file with this setting...

`$conf['firebadges_library'] = 'deft/dev.js';`

Add a symlink in the module root, and a line in your site root .gitignore file.
