//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderJoinLiveContext, MMFinderLiveTaskId, NSArray, NSString, UITableView;

@interface MMFinderLiveAudienceSuperfanSwitchRoleSheetView
{
    CDUnknownBlockType _switchRoleCallback;
    MMFinderLiveTaskId *_liveTaskId;
    UITableView *_tableView;
    NSArray *_roleInfos;
    MMFinderJoinLiveContext *_liveContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderJoinLiveContext *liveContext; // @synthesize liveContext=_liveContext;
@property(retain, nonatomic) NSArray *roleInfos; // @synthesize roleInfos=_roleInfos;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType switchRoleCallback; // @synthesize switchRoleCallback=_switchRoleCallback;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getSuperfanBadgeForAliasType:(long long)arg1;
- (void)safeAreaInsetsDidChange;
- (void)initViewsAndData;
- (void)setupPageSheetConfig;
- (id)initWithLiveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

