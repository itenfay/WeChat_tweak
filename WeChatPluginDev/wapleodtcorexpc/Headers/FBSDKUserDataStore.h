//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface FBSDKUserDataStore : NSObject
{
}

+ (_Bool)maybeSHA256Hashed:(id)arg1;
+ (id)normalizeData:(id)arg1 type:(id)arg2;
+ (id)encryptData:(id)arg1 type:(id)arg2;
+ (id)stringByHashedData:(id)arg1;
+ (id)getHashedData;
+ (void)clearDataForType:(id)arg1;
+ (void)setHashData:(id)arg1 forType:(id)arg2;
+ (void)setAndHashData:(id)arg1 forType:(id)arg2;
+ (void)setAndHashUserEmail:(id)arg1 firstName:(id)arg2 lastName:(id)arg3 phone:(id)arg4 dateOfBirth:(id)arg5 gender:(id)arg6 city:(id)arg7 state:(id)arg8 zip:(id)arg9 country:(id)arg10;
+ (void)initialize;

@end

