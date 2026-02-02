//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface QBBeaconBaseInterface : NSObject
{
}

+ (void)setAdditionalInfo:(id)arg1;
+ (void)setSDKVersion:(id)arg1;
+ (void)setUserId:(id)arg1;
+ (void)setGUID:(id)arg1;
+ (void)setAppKey:(id)arg1;
+ (_Bool)onUserAction:(id)arg1 isSucceed:(_Bool)arg2 elapse:(long long)arg3 size:(long long)arg4 params:(id)arg5;
+ (_Bool)enableAnalytics:(id)arg1 gatewayIP:(id)arg2;

@end

