//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WeChatApiUtil : NSObject
{
}

+ (id)getSDKVersion;
+ (id)_internal_getSDKVersion;
+ (_Bool)isWXAppSupportApi;
+ (id)getAppUrlWithPlatformId:(id)arg1 withParameter:(id)arg2;
+ (id)getAppUrlWithPlatformId:(id)arg1;
+ (_Bool)isAppInstalledWithoutCatchException:(id)arg1;
+ (_Bool)isAppInstalledWithCatchException:(id)arg1;
+ (id)getAppUrl:(id)arg1;
+ (id)dataFromPropertyList:(id)arg1;
+ (id)propertyListFromData:(id)arg1;

@end

