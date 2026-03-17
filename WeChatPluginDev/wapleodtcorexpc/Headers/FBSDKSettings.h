//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKSettings : NSObject
{
}

+ (id)graphAPIDebugParamValue;
+ (void)updateGraphAPIDebugBehavior;
+ (void)_logIfSDKSettingsChanged;
+ (void)logWarnings;
+ (id)appEventSettingsForUserDefaultsKey:(id)arg1 defaultValue:(id)arg2;
+ (id)appEventSettingsForPlistKey:(id)arg1 defaultValue:(id)arg2;
+ (id)graphAPIVersion;
+ (id)defaultGraphAPIVersion;
+ (void)setGraphAPIVersion:(id)arg1;
+ (void)setUserAgentSuffix:(id)arg1;
+ (id)userAgentSuffix;
+ (void)setAccessTokenCache:(id)arg1;
+ (id)accessTokenCache;
+ (id)sdkVersion;
+ (void)disableLoggingBehavior:(id)arg1;
+ (void)enableLoggingBehavior:(id)arg1;
+ (void)setLoggingBehaviors:(id)arg1;
+ (id)loggingBehaviors;
+ (void)setLimitEventAndDataUsage:(_Bool)arg1;
+ (_Bool)shouldLimitEventAndDataUsage;
+ (void)setAdvertiserIDCollectionEnabled:(_Bool)arg1;
+ (_Bool)isAdvertiserIDCollectionEnabled;
+ (void)setAutoLogAppEventsEnabled:(_Bool)arg1;
+ (_Bool)isAutoLogAppEventsEnabled;
+ (void)setCodelessDebugLogEnabled:(_Bool)arg1;
+ (_Bool)isCodelessDebugLogEnabled;
+ (void)setAutoInitEnabled:(_Bool)arg1;
+ (_Bool)isAutoInitEnabled;
+ (void)setJPEGCompressionQuality:(double)arg1;
+ (double)JPEGCompressionQuality;
+ (void)setGraphErrorRecoveryEnabled:(_Bool)arg1;
+ (_Bool)isGraphErrorRecoveryEnabled;
+ (void)_setCodelessDebugLogEnabled:(id)arg1;
+ (id)_codelessDebugLogEnabled;
+ (void)_setAdvertiserIDCollectionEnabled:(id)arg1;
+ (id)_advertiserIDCollectionEnabled;
+ (void)_setAutoLogAppEventsEnabled:(id)arg1;
+ (id)_autoLogAppEventsEnabled;
+ (void)_setAutoInitEnabled:(id)arg1;
+ (id)_autoInitEnabled;
+ (void)_setJPEGCompressionQualityNumber:(id)arg1;
+ (id)_JPEGCompressionQualityNumber;
+ (void)setFacebookDomainPart:(id)arg1;
+ (id)facebookDomainPart;
+ (void)setDisplayName:(id)arg1;
+ (id)displayName;
+ (void)setClientToken:(id)arg1;
+ (id)clientToken;
+ (void)setAppURLSchemeSuffix:(id)arg1;
+ (id)appURLSchemeSuffix;
+ (void)setAppID:(id)arg1;
+ (id)appID;
+ (void)initialize;

@end

