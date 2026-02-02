//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKInternalUtility : NSObject
{
}

+ (_Bool)isUnity;
+ (_Bool)areAllPermissionsPublishPermissions:(id)arg1;
+ (_Bool)areAllPermissionsReadPermissions:(id)arg1;
+ (_Bool)isPublishPermission:(id)arg1;
+ (_Bool)isRegisteredCanOpenURLScheme:(id)arg1;
+ (void)checkRegisteredCanOpenURLScheme:(id)arg1;
+ (_Bool)isRegisteredURLScheme:(id)arg1;
+ (id)hexadecimalStringFromData:(id)arg1;
+ (id)topMostViewController;
+ (id)findWindow;
+ (void)validateFacebookReservedURLSchemes;
+ (void)validateURLSchemes;
+ (id)validateRequiredClientAccessToken;
+ (void)validateAppID;
+ (_Bool)_canOpenURLScheme:(id)arg1;
+ (long long)_compareOperatingSystemVersion:(CDStruct_2ec95fd7)arg1 toVersion:(CDStruct_2ec95fd7)arg2;
+ (_Bool)isMSQRDPlayerAppInstalled;
+ (_Bool)isMessengerAppInstalled;
+ (_Bool)isFacebookAppInstalled;
+ (id)viewControllerForView:(id)arg1;
+ (void)unregisterTransientObject:(id)arg1;
+ (void)registerTransientObject:(id)arg1;
+ (void)deleteFacebookCookies;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 queryParameters:(id)arg4 error:(id *)arg5;
+ (_Bool)shouldManuallyAdjustOrientation;
+ (id)URLEncode:(id)arg1;
+ (id)URLDecode:(id)arg1;
+ (id)queryStringWithDictionary:(id)arg1 error:(id *)arg2 invalidObjectHandler:(CDUnknownBlockType)arg3;
+ (CDStruct_2ec95fd7)operatingSystemVersion;
+ (id)objectForJSONString:(id)arg1 error:(id *)arg2;
+ (_Bool)object:(id)arg1 isEqualToObject:(id)arg2;
+ (int)getMajorVersionFromFullLibraryVersion:(int)arg1;
+ (_Bool)isUIKitRunTimeVersionAtLeast:(int)arg1;
+ (_Bool)isUIKitLinkTimeVersionAtLeast:(int)arg1;
+ (_Bool)isSafariBundleIdentifier:(id)arg1;
+ (_Bool)isOSRunTimeVersionAtLeast:(CDStruct_2ec95fd7)arg1;
+ (_Bool)isFacebookBundleIdentifier:(id)arg1;
+ (_Bool)isBrowserURL:(id)arg1;
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 defaultVersion:(id)arg4 error:(id *)arg5;
+ (id)facebookURLWithHostPrefix:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
+ (void)extractPermissionsFromResponse:(id)arg1 grantedPermissions:(id)arg2 declinedPermissions:(id)arg3 expiredPermissions:(id)arg4;
+ (unsigned long long)currentTimeInMilliseconds;
+ (id)convertRequestValue:(id)arg1;
+ (id)bundleForStrings;
+ (id)dictionaryWithQueryString:(id)arg1;
+ (id)dictionaryFromFBURL:(id)arg1;
+ (id)gzip:(id)arg1;
+ (id)appURLWithHost:(id)arg1 path:(id)arg2 queryParameters:(id)arg3 error:(id *)arg4;
+ (id)appURLScheme;

@end

