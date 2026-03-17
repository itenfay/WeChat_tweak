//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IWCSystemAuthMgr <NSObject>
+ (_Bool)isAuthRequestFrequencyLimitedFor:(unsigned int)arg1 sceneKey:(NSString *)arg2;
+ (void)requestWeChatAndSystemAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned int))arg3;
+ (void)requestAuthFor:(unsigned int)arg1 scene:(unsigned long long)arg2 completionHandler:(void (^)(_Bool, unsigned int))arg3;
+ (unsigned int)authorizationStatusFor:(unsigned int)arg1 scene:(unsigned long long)arg2;
@end

