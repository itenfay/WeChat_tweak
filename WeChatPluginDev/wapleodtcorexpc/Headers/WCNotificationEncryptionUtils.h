//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCNotificationEncryptionUtils : NSObject
{
}

+ (id)decryptPayload:(id)arg1 isFromAPNS:(_Bool)arg2;
+ (_Bool)hasEncryptionWithPayload:(id)arg1;
+ (id)activeInfo;
+ (void)clearCacheInfoQueue;
+ (id)infoForIdentifier:(unsigned int)arg1;
+ (_Bool)saveInfoQueue:(id)arg1 envInfo:(id)arg2;
+ (double)createTime;
+ (id)cacheInfoQueue;
+ (_Bool)isUsingCustomCache;
+ (void)reportCacheDecryptErrorInfoWhenAppLaunching;
+ (void)reportGenInfoError:(id)arg1 envInfo:(id)arg2;
+ (void)reportDecryptError:(id)arg1 withPayload:(id)arg2 isFromAPNS:(_Bool)arg3;
+ (void)reportDecryptErrorInfo:(id)arg1;

@end

