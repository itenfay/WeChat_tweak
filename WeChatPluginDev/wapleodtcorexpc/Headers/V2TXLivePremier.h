//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface V2TXLivePremier : NSObject
{
}

+ (long long)isSupportHDR:(id)arg1;
+ (long long)callExperimentalAPI:(id)arg1;
+ (long long)setSocks5Proxy:(id)arg1 port:(long long)arg2 username:(id)arg3 password:(id)arg4;
+ (void)setLicence:(id)arg1 key:(id)arg2;
+ (long long)setEnvironment:(const char *)arg1;
+ (long long)setLogConfig:(id)arg1;
+ (void)setObserver:(id)arg1;
+ (id)getSDKVersionStr;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

