//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAJSEventHandler_operateRecentUsageList
{
}

- (void)onWeAppItemDeleted:(id)arg1;
- (void)onWeAppItemUnStared:(id)arg1 errCode:(int)arg2;
- (void)onWeAppItemStared:(id)arg1 errCode:(int)arg2;
- (unsigned long long)unstarWeAppItem:(id)arg1;
- (unsigned long long)starWeAppItem:(id)arg1;
- (unsigned long long)deleteWeAppItem:(id)arg1;
- (unsigned long long)operateRecentUsageListWithActionType:(unsigned long long)arg1 userName:(id)arg2 debugModeType:(unsigned int)arg3;
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

