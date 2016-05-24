
## Installation

1. Installation includes preparing a Firebase data backend.
  1. Setup a Firebase instance on firebase.com
  1. Import architecture, see example import in docs.
  1. Add custom badges, see docs.
1. Add the [Deft library](https://github.com/tableau-mkt/deft) to your Drupal codebase in `/sites/all/libraries/deft/`
1. Enable module, via drush or Drupal UI.
1. Set URL and admin options at `admin/config/services/firebadges`


## Local development

For active local development you'll want to symlink to a location of the Deft library outside Drupal so you can contribute to that repo, assuming you don't want Git submodules.

Add these two lines to your local settings.php include, which will adjust the JS added to the page by this module...

```
$conf['firebadges_library'] = 'sites/all/libraries/deft_dev';
```

Then add a symlink in the library folder pointing to wherever you cloned the Deft javascript repo, which should be `/sites/all/libraries/deft/` in most cases.

```
ln -s /Users/jlind/Documents/clones/deft deft_dev
```

Note that the module includes a .gitignore file to skip this symlink file.
