//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAMainFrameTaskItemMgr
{
}

- (void)notifyMainFrameTaskItemUpdated;
- (_Bool)deleteMainFrameTaskItemBeforeUpdateTime:(unsigned int)arg1;
- (_Bool)deleteMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2 needNotify:(_Bool)arg3;
- (_Bool)updateMainFrameTaskItemWithUserName:(id)arg1 debugMode:(unsigned int)arg2;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1 ignoreUsername:(id)arg2 debugMode:(unsigned int)arg3;
- (id)getMainFrameTaskItemListWithLimit:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

