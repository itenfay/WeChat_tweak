//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol IWAFlutterEngineService;

@protocol IWAFlutterEngineService <NSObject>
+ (id <IWAFlutterEngineService>)sharedService;
- (void)decreaseGroupUserCount;
- (void)increaseGroupUserCount;
- (void)destroyEngine:(NSObject *)arg1;
- (NSObject *)makeEngine:(NSString *)arg1 routeJson:(NSString *)arg2;
- (NSObject *)ensureEngineGroup;
@end

