#!/bin/bash

git stash; git stash drop; git pull && make qemu
