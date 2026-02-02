//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WASystemAuthHelper : NSObject
{
}

+ (unsigned long long)convertFrequencyTypeFromCapability:(unsigned int)arg1;
+ (unsigned long long)convertSceneFromAppid:(id)arg1;
+ (_Bool)isAuthRequestFrequencyLimitedFor:(unsigned int)arg1 appid:(id)arg2;
+ (void)requestWeChatAndSystemAuthFor:(unsigned int)arg1 appid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)requestAuthFor:(unsigned int)arg1 appid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 appid:(id)arg2;

@end

