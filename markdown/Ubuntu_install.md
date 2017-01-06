# ubuntu installation guide

* Insert the bootable USB stick, reboot the system and instruct the **BIOS** to boot from the USB by pressing a special function key (usually **F9**, **F10** or **F12** depending on your device) after the boot up a new grub screen should appear on the screen. From the menu select **Install Ubuntu** and press **Enter**.

* After this a completely functional Ubuntu system running in live-mode will start up. On the launcher on left side hit on the second icon from top, **Install Ubuntu 16.04 LTS**, and the installer utility will start. Choose language and hit **Continue**.
* In **Preparing to install ubuntu** click **Continue**.
* In **Installation type** check the **Something else** option and hit on **Continue** button to proceed furthur.
* Now we create two partitions one for **_root_** and other for **_home_**. To create the first partition, the **_root_** partition select the free space (the shrink space from windows created earlier) and hit on the **_+_** icon below. On partition settings use the following configurations and hit **OK** to continue:
	* Size = at least 20000 MB
	* Type for the new partition = Primary
	* Location for the new partition = Beginning
	* Use as = EXT4 journaling file system
	* Mount point = /

Create the **_home_** partition using the same steps as above. Use all the available free space left for home partition size. The partition settings should look like this:

	* Size = all remaining free space
	* Type for the new partition = Primary
	* Location for the new partition = Beginning
	* Use as = EXT4 journaling file system
	* Mount point = /home
* Hit the **Install Now** button to apply changes and start the installation process. An alert regarding swap space will appear click on **Continue**. Again a pop-up window will appear, hit **Continue** to write changes to disc and the installation process will now begin.

* Next select a nearby city and hit **Continue**
* Next select **keyboard layout** and hit **Continue**.
* Fill up the **Who are you?** window and hit **Continue**. From here installation process will run automatically till it reaches the end.
* After installation restart the system and choose **Ubuntu 10.04** from the **Grub** menu and now you can enjoy the vivid features of **Ubuntu**.
