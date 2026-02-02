//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveTaskId, NSMutableArray, NSString;

@interface MMFinderLiveAppMsgInfoCacheLogic : NSObject
{
    MMLiveTaskId *_liveTaskId;
    NSMutableArray *_appMsgInfoCacheArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *appMsgInfoCacheArray; // @synthesize appMsgInfoCacheArray=_appMsgInfoCacheArray;
@property(retain, nonatomic) MMLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (void)onMinimizeWindowDidHide:(id)arg1;
- (void)processAllAppMsgInfoCache;
- (void)addAppMsgInfoCache:(id)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

