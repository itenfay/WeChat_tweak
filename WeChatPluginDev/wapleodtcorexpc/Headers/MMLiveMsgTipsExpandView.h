//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, MMTableView, NSMutableArray, NSString;
@protocol MMLiveMsgTipsExpandViewDelegate;

@interface MMLiveMsgTipsExpandView
{
    id <MMLiveMsgTipsExpandViewDelegate> _delegate;
    CContact *_groupContact;
    NSMutableArray *_viewModelList;
    MMTableView *_bannerItemTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMTableView *bannerItemTableView; // @synthesize bannerItemTableView=_bannerItemTableView;
@property(retain, nonatomic) NSMutableArray *viewModelList; // @synthesize viewModelList=_viewModelList;
@property(retain, nonatomic) CContact *groupContact; // @synthesize groupContact=_groupContact;
@property(nonatomic) __weak id <MMLiveMsgTipsExpandViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onLiveCountChanged:(id)arg1;
- (void)onMMLiveMsgTipsExpandViewCellCloseLive:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)maxDisplayCellCount;
- (void)fetchLiveInfoIfNeed;
- (void)updateWithContact:(id)arg1;
- (void)reloadData;
- (void)setupData;
- (void)layoutUI;
- (void)initViews;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

