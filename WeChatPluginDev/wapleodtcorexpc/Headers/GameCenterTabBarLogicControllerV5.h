//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSString;

@interface GameCenterTabBarLogicControllerV5 : NSObject
{
    CDUnknownBlockType _tabItemCompleteBlock;
}

- (void)onFetchGameCenterHomeTabNavV5:(id)arg1 error:(long long)arg2;
- (void)requestHomeTabItems:(CDUnknownBlockType)arg1;
- (id)getHomeTabItemsFromCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
