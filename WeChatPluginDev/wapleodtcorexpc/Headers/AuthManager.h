//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface AuthManager : NSObject
{
}

+ (id)getLicenceStr;
+ (void)clearLicenceStr;
+ (int)getVersion;
+ (int)currentAuthStatus;
+ (void)clearAuthInfo;
+ (long long)getEndTime;
+ (void)setIsShowFailedReason:(_Bool)arg1;
+ (id)getErrorReason:(int)arg1;
+ (int)setLicenceStr:(id)arg1;
+ (int)setLicencePath:(id)arg1;
+ (int)initAuthForQQ;
+ (void)showFailedReason:(int)arg1;

@end

