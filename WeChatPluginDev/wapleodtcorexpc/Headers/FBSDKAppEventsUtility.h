//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKAppEventsUtility : NSObject
{
}

+ (_Bool)isEmailAddress:(id)arg1;
+ (_Bool)isCreditCardNumber:(id)arg1;
+ (_Bool)isSensitiveUserData:(id)arg1;
+ (_Bool)isDebugBuild;
+ (id)getNumberValue:(id)arg1;
+ (id)getVariable:(id)arg1 fromInstance:(id)arg2;
+ (long long)unixTimeNow;
+ (id)tokenStringToUseFor:(id)arg1;
+ (id)retrievePersistedAnonymousID;
+ (id)persistenceFilePath:(id)arg1;
+ (void)persistAnonymousID:(id)arg1;
+ (_Bool)validateIdentifier:(id)arg1;
+ (_Bool)regexValidateIdentifier:(id)arg1;
+ (_Bool)matchString:(id)arg1 firstCharacterSet:(id)arg2 restOfStringCharacterSet:(id)arg3;
+ (void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(_Bool)arg2;
+ (void)logAndNotify:(id)arg1;
+ (id)flushReasonToString:(unsigned long long)arg1;
+ (void)ensureOnMainThread:(id)arg1 className:(id)arg2;
+ (void)clearLibraryFiles;
+ (id)attributionID;
+ (id)anonymousID;
+ (unsigned long long)advertisingTrackingStatus;
+ (id)advertiserID;
+ (id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(_Bool)arg2 shouldAccessAdvertisingID:(_Bool)arg3;

@end

