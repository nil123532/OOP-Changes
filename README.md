# OOP Gradescope Workshops


## Contents

### `workshop5`
- Provides guidance on using Gradescope for OOP assignments.

### `workshop8`
- Contains the autograder script for Workshop 8.
- Includes a sample submission (`good_submission/`) that showcases a typical successful submission.
- Includes a `zip_folder/` containing the `.zip` file that is uploaded to Gradescope.
- A `README.md` within this folder details all the changes made to the autograder and the reasoning behind them.

### `workshop11`
- Contains the autograder script for Workshop 11.
- Includes a sample submission (`good_submission/`) that showcases a typical successful submission.
- Includes a `zip_folder/` containing the `.zip` file that is uploaded to Gradescope.
- A `README.md` within this folder details all the changes made to the autograder and the reasoning behind them.

## Testing the Autograders Locally

You can test each autograder locally by navigating to the respective workshop directory and running:
```bash
python run_autograder 

Important Notes
submission_metadata.json is provided as a template. In a real Gradescope environment, this file is generated automatically.
The setup.sh script is used by Gradescope to configure the Ubuntu image. It is generally not needed for local testing.
These folders will not work directly on Gradescope as-is; they are intended for local testing and debugging only.
