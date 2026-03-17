//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;
@protocol ITPPluginBase;

@protocol ITPPluginManager <NSObject>
- (void)releasePlugins;
- (void)removePlugin:(id <ITPPluginBase>)arg1;
- (void)addPlugin:(id <ITPPluginBase>)arg1;
- (void)pushEvent:(unsigned long long)arg1 withUserInfo:(NSDictionary *)arg2;
@end

