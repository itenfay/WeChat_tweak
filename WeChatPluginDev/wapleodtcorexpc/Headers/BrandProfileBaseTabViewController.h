//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewController.h>

@class BizProfileV2Resp, BrandProfileCgiContext, BrandProfileEnterInfo, BrandProfileReporter, NSMutableArray, NSMutableSet, NSString, WCTimeLineFooterView;
@protocol BrandProfileBaseTabViewControllerDelegate;

@interface BrandProfileBaseTabViewController : UITableViewController
{
    BizProfileV2Resp *_cacheItem;
    BrandProfileCgiContext *_cgiContext;
    NSMutableArray *_sectionDataList;
    NSMutableArray *_visibleViewModelList;
    NSMutableSet *m_setFastLoadTemplateType;
    WCTimeLineFooterView *_footerView;
    id <BrandProfileBaseTabViewControllerDelegate> _delegate;
    BrandProfileReporter *_reporter;
    BrandProfileEnterInfo *_bpeInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileEnterInfo *bpeInfo; // @synthesize bpeInfo=_bpeInfo;
@property(retain, nonatomic) BrandProfileReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <BrandProfileBaseTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setExternalGestureRecognizer:(id)arg1;
- (id)viewController;
- (id)tabTitle;
- (void)setContentOffset:(struct CGPoint)arg1;
- (int)cgiRespFuncFlag;
- (id)cgiRespMessageList:(id)arg1;
- (int)cgiReqActionType;
- (unsigned long long)tabType;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)handleExposuredViewModel:(id)arg1;
- (void)removeFromVisibleViewModelList:(id)arg1;
- (void)addToVisibleViewModelList:(id)arg1;
- (_Bool)isInVisibleViewModelList:(id)arg1;
- (void)handleVisibleViewModelList;
- (void)updateTemplateFile;
- (void)onWebUrlClicked:(id)arg1;
- (void)internalOpenWebViewWithItemViewModel:(id)arg1;
- (void)onSelectItemViewModel:(id)arg1;
- (id)getBrandContact;
- (id)getViewController;
- (void)onFeatureMsgUnfold:(id)arg1;
- (void)onFooterUnfold:(id)arg1;
- (void)onMsgSectionHeightChange:(id)arg1;
- (void)onReloadItemCellView:(id)arg1;
- (void)fetchProfileNextPkg;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)genWebViewExtraInfoFromSourceMessage;
- (void)openWebView:(id)arg1 extraInfo:(id)arg2 hasItemShowType:(_Bool)arg3 itemShowType:(unsigned int)arg4 fromFeature:(_Bool)arg5;
- (void)handleMsgSectionDataWillDisplay:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)calcuateSectionWidth;
- (void)preDownloadCoverImageIfNeed:(id)arg1;
- (_Bool)isExistInSectionDataList:(id)arg1;
- (void)updateSectionWidthInSectionDataList;
- (void)reportFeatureMsgExpose;
- (void)advanceUpdateMPPageDataWithSectionData:(id)arg1;
- (_Bool)appendGroupMsgList:(id)arg1 isFeature:(_Bool)arg2;
- (_Bool)appendMsgList:(id)arg1;
- (id)getFooterWordingForResp:(id)arg1;
- (id)getTipsWordingForResp:(id)arg1;
- (void)tableViewReloadData;
- (void)handleNextPkgResp:(id)arg1;
- (void)handleFirstPkgResp:(id)arg1;
- (void)handleFirstPkgFail;
- (void)onFetchBizProfile:(id)arg1 resp:(id)arg2 action:(int)arg3 userInfo:(id)arg4;
- (void)handleTipsWording;
- (void)setupFooterView;
- (void)configTableView;
- (void)setupTableView;
- (void)loadCacheItem:(id)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

