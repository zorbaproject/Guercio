netsh advfirewall set allprofiles state off
cd %~dp0
cd UltraVNC
find /c "path" ultravnc.ini  > nul || ( for /r %%i in (*.dll) do regsvr32 %%i)
find /c "path" ultravnc.ini  > nul || ( echo "path=%~dp0\UltraVNC" >> ultravnc.ini)
cd ..
UltraVNC\winvnc.exe -run
REM Password: alligatore3
REM https://www.uvnc.com/docs/uvnc-server/51-UltraVNC-server-commandline-parameters.html