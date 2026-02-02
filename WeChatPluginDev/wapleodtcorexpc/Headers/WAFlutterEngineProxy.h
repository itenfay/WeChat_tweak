//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WAFlutterEngineProxy : NSObject
{
}

+ (id)sharedService;
- (id)group;
- (void)decreaseGroupUserCount;
- (void)increaseGroupUserCount;
- (void)destroyEngine:(id)arg1;
- (id)makeEngine:(id)arg1 routeJson:(id)arg2;
- (id)ensureEngineGroup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

