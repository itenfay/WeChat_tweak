//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveTaskId, NSString, WCTableViewManager;
@protocol MMFinderLiveAdGuideFollowSheetDelegate;

@interface MMFinderLiveAdGuideFollowSheet
{
    MMFinderLiveTaskId *_taskId;
    id <MMFinderLiveAdGuideFollowSheetDelegate> _delegate;
    WCTableViewManager *_tableViewManager;
}

+ (id)showWithTaskId:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(nonatomic) __weak id <MMFinderLiveAdGuideFollowSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)audienceLogReporter;
- (double)tableWidth;
- (double)tableCellHeight;
- (id)liveTask;
- (void)onClickMMFinderLiveAdGuideFollowCellContent:(id)arg1;
- (void)onClickMMFinderLiveAdGuideFollowCellFollow:(id)arg1 isAnchor:(_Bool)arg2;
- (void)onFollowInLiveSuccess:(id)arg1;
- (void)onFollowInLiveFail:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)refresh;
- (void)fetchData;
- (void)pageSheetDidAppear;
- (id)makeHeaderViewWith:(id)arg1 topPading:(double)arg2;
- (void)addAdSection;
- (void)addAnchorSection;
- (void)configureOptionTableView;
- (void)layoutUI;
- (double)fixedHeight;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)setupPageSheetConfig;
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

