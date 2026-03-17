//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MinimizeTaskOpenContext, NSString;

@protocol MinimizeEventRouteDelegate <NSObject>
- (void)routeExposedTaskEventWithTaskKey:(NSString *)arg1;
- (void)routeRemoveTaskEventWithTaskKey:(NSString *)arg1;
- (_Bool)routeEnterTaskEventWithTaskKey:(NSString *)arg1 openContext:(MinimizeTaskOpenContext *)arg2 enterTaskScene:(unsigned int)arg3;
@end

