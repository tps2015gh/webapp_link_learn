
#Git using

## Reset merge but still not push  
https://stackoverflow.com/questions/2389361/undo-a-git-merge-that-hasnt-been-pushed-yet
(simply use: ==>  >git reset --hard origin/master )
Then >git pull

Pull data from "remote" to "origin"  ,  current branch is "dev" 
>git pull

Pull data from "remote" with others branch "dev2" to "origin"  , current branch is "dev"
>git pull origin dev2  

Push to dev
>git push 

Change Branch dev
> git checkout dev 

Create Branch dev3 
> git branch  dev3


Add existing project to GitHub using command line 
https://help.github.com/articles/adding-an-existing-project-to-github-using-the-command-line/

Pushing to a remote // origin and master 
https://help.github.com/articles/pushing-to-a-remote/

>> set parameter to git repo
git remote add origin remote repository URL
### Sets the new remote
git remote -v
### Verifies the new remote URL

### Pushes the changes in your local repository up to the remote repository you specified as the origin
git push origin master

===========================================
config 
===========================================
git config -l   # list all local and global  
git config -e   # edit only local ??? 


###git email setting  
https://help.github.com/articles/setting-your-commit-email-address-in-git/
git config --global user.email "email@example.com"
git config user.email "email@example.com" # overide global config

###git view email config
git config --global user.email
git config user.email		# overide global config


## ========= set user ============
https://help.github.com/articles/setting-your-username-in-git/
git config --global user.name "Mona Lisa" # set global 
$ git config user.name "Mona Lisa"	 # set single repo 

git config --global user.name  # view global
git config user.name  # view single repo


## git check remote 

https://help.github.com/articles/changing-a-remote-s-url/
$git remote -v

## Git push  
https://git-scm.com/docs/git-push