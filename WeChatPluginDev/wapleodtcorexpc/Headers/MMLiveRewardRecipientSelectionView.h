//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMCPLabel, MMFinderLiveTaskId, MMLiveHalfScreenTitleBarView, MMTableView, MMUIView, NSString;
@protocol MMLiveRewardRecipientSelectionLogicDelegate;

@interface MMLiveRewardRecipientSelectionView
{
    MMFinderLiveTaskId *_taskId;
    MMTableView *_contactTableView;
    id <MMLiveRewardRecipientSelectionLogicDelegate> _logicDelegate;
    MMLiveHalfScreenTitleBarView *_mainTitleBar;
    MMUIView *_titleBarView;
    MMCPLabel *_titleLabel;
    MMUIView *_titleSeperatorLiveView;
    MMUIView *_contentView;
    MMUIView *_seperatorLiveView;
    MMUIView *_footerCancelView;
    MMCPLabel *_footerCancelLabel;
    MMFinderLiveTaskId *_liveTaskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(retain, nonatomic) MMCPLabel *footerCancelLabel; // @synthesize footerCancelLabel=_footerCancelLabel;
@property(retain, nonatomic) MMUIView *footerCancelView; // @synthesize footerCancelView=_footerCancelView;
@property(retain, nonatomic) MMUIView *seperatorLiveView; // @synthesize seperatorLiveView=_seperatorLiveView;
@property(retain, nonatomic) MMUIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MMUIView *titleSeperatorLiveView; // @synthesize titleSeperatorLiveView=_titleSeperatorLiveView;
@property(retain, nonatomic) MMCPLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(retain, nonatomic) MMLiveHalfScreenTitleBarView *mainTitleBar; // @synthesize mainTitleBar=_mainTitleBar;
@property(nonatomic) __weak id <MMLiveRewardRecipientSelectionLogicDelegate> logicDelegate; // @synthesize logicDelegate=_logicDelegate;
@property(retain, nonatomic) MMTableView *contactTableView; // @synthesize contactTableView=_contactTableView;
@property(readonly, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onCancel:(id)arg1;
- (id)liveTask;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)pageSheetDidDisappear;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)reloadData;
- (void)initView;
- (void)dealloc;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

