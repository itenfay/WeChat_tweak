#! /bin/sh

#-------------------------------------------------------
#
# Sign all the files in the Payload
#
# 1.The first parameter is the path of Payload directory
# 2.The second parameter is the name of certificate
# 3.The third parameter is the path of mobileprovision
#
# Author: dyf
# Email : 1659640627@qq.com
# Date  : 2016/03/31
#
#-------------------------------------------------------

if [ $# -lt 3 ];then
    echo 'Error! Should enter the path of Payload, certificate name and the path of mobileprovision.'
    exit 1
fi

payloadPath=$1
homePath=$(dirname ${payloadPath})

certificateName=$2
mobileprovisionFilepath=$3

appPath=$(find ${payloadPath} -name '*.app')

securitCmd='/usr/bin/security'
codesignCmd='/usr/bin/codesign'
plistbuddyCmd='/usr/libexec/PlistBuddy'

infoplistPath="${appPath}/Info.plist"

payloadDir=$(echo ${payloadPath} | rev | awk -F '/' '{print $1}' | rev)

entitlementsPlistName="entitlements.plist"
entitlementsPlistPath=${homePath}/${entitlementsPlistName}

${plistbuddyCmd} -x -c "print :Entitlements" /dev/stdin <<< $(${securitCmd} cms -D -i ${mobileprovisionFilepath}) > ${entitlementsPlistPath}

codeSignatureDirpath="${appPath}/_CodeSignature"

rm -rf ${codeSignatureDirpath}

embeddedMobileprovisionFilepath="${appPath}/embedded.mobileprovision"

cp -f ${mobileprovisionFilepath} ${embeddedMobileprovisionFilepath}

if [ -e ${entitlementsPlistPath} ];then
    ${codesignCmd} -f -s "${certificateName}" --no-strict --entitlements=${entitlementsPlistPath} ${appPath}

    if [ $? -eq 0 ];then
        ${codesignCmd} -v ${appPath}
    fi
fi

# remove
rm -rf ${entitlementsPlistPath}
