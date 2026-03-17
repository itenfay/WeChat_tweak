//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TPProxyUtils : NSObject
{
}

+ (_Bool)isOnlineUrl:(id)arg1;
+ (unsigned long long)convertToProxyPlayCallBackMsg:(int)arg1;
+ (void)setNumberToExtraInfo:(id)arg1 withParamData:(id)arg2;
+ (void)setObjectToExtraInfo:(id)arg1 withParamData:(id)arg2;
+ (id)convertProxyDownloadParamWithUrl:(id)arg1 defaultDownlType:(long long)arg2 paramData:(id)arg3 httpHeader:(id)arg4 proxyConfig:(id)arg5;

@end

