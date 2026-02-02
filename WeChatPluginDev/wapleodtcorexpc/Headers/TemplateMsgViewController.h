//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, TemplateMsgSearchHelper;

@interface TemplateMsgViewController
{
    _Bool _isViewDidAppear;
    unsigned int _lastAutoPlayLocalID;
    TemplateMsgSearchHelper *_searchHelper;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int lastAutoPlayLocalID; // @synthesize lastAutoPlayLocalID=_lastAutoPlayLocalID;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(retain, nonatomic) TemplateMsgSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
- (void)reportServerNotifySubscribeMessageOp:(unsigned int)arg1 viewModel:(id)arg2 reportModel:(id)arg3;
- (void)registerYReportSdk;
- (void)autoPauseLatestAutoplayVideo;
- (void)throttleScrollProcess;
- (void)autoplayVideoProcess;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTitleView:(id)arg1 ignoreAnimation:(_Bool)arg2;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (id)getChatContact;
- (void)msgSearchBarDoSearch;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarCancel;
- (void)msgSearchBarActive;
- (void)makeNotifyMsgExpose;
- (void)onTableEndScroll;
- (void)onSearchButton:(id)arg1;
- (void)onRightButton:(id)arg1;
- (void)reloadTabeView;
- (void)didReceiveMemoryWarning;
- (void)viewWillPop:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (_Bool)shouldInteractivePop;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

