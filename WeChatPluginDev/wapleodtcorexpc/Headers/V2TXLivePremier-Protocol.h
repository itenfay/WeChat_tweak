//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, V2TXLiveLogConfig;
@protocol V2TXLivePremierObserver;

@protocol V2TXLivePremier <NSObject>
+ (long long)callExperimentalAPI:(NSString *)arg1;
+ (long long)setSocks5Proxy:(NSString *)arg1 port:(long long)arg2 username:(NSString *)arg3 password:(NSString *)arg4;
+ (void)setLicence:(NSString *)arg1 key:(NSString *)arg2;
+ (long long)setEnvironment:(const char *)arg1;
+ (long long)setLogConfig:(V2TXLiveLogConfig *)arg1;
+ (void)setObserver:(id <V2TXLivePremierObserver>)arg1;
+ (NSString *)getSDKVersionStr;
@end

