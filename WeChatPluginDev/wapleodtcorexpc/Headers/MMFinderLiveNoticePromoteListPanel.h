//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveCreateNoticeReporter, MMFinderLiveTask, MMRefreshTableFooterView, MMUIActivityIndicatorView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UITableView, WCFinderContact;
@protocol MMFinderLiveNoticePromoteListPanelDelegate;

@interface MMFinderLiveNoticePromoteListPanel
{
    _Bool _hasMoreNotices;
    unsigned int _totalNoticeCount;
    id <MMFinderLiveNoticePromoteListPanelDelegate> _delegate;
    MMFinderLiveCreateNoticeReporter *_createNoticeReporter;
    WCFinderContact *_anchorContact;
    NSMutableSet *_addedNoticeIds;
    NSMutableArray *_noticeInfoList;
    NSMutableDictionary *_noticeToIndexDict;
    double _estimatedRowHeight;
    MMUIActivityIndicatorView *_loadingIndicator;
    UITableView *_noticeTableView;
    MMRefreshTableFooterView *_refreshFooterView;
    MMFinderLiveTask *_liveTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveTask *liveTask; // @synthesize liveTask=_liveTask;
@property(retain, nonatomic) MMRefreshTableFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) UITableView *noticeTableView; // @synthesize noticeTableView=_noticeTableView;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) double estimatedRowHeight; // @synthesize estimatedRowHeight=_estimatedRowHeight;
@property(nonatomic) _Bool hasMoreNotices; // @synthesize hasMoreNotices=_hasMoreNotices;
@property(nonatomic) unsigned int totalNoticeCount; // @synthesize totalNoticeCount=_totalNoticeCount;
@property(retain, nonatomic) NSMutableDictionary *noticeToIndexDict; // @synthesize noticeToIndexDict=_noticeToIndexDict;
@property(retain, nonatomic) NSMutableArray *noticeInfoList; // @synthesize noticeInfoList=_noticeInfoList;
@property(retain, nonatomic) NSMutableSet *addedNoticeIds; // @synthesize addedNoticeIds=_addedNoticeIds;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) MMFinderLiveCreateNoticeReporter *createNoticeReporter; // @synthesize createNoticeReporter=_createNoticeReporter;
@property(nonatomic) __weak id <MMFinderLiveNoticePromoteListPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rebuildNoticeToIndexDictFromIndex:(unsigned long long)arg1;
- (void)reloadRowWithNoticeId:(id)arg1;
- (id)indexPathOfRowWithNoticeId:(id)arg1;
- (id)appendNoticeInfoItems:(id)arg1;
- (void)fetchData:(_Bool)arg1;
- (id)getLastNoticeInfo;
- (id)getCurrentRightButton;
- (id)getCurrentLeftButton;
- (void)updatePageSheetTitle;
- (void)setupPageSheetConfig;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onAddButtonTappedForCell:(id)arg1 liveNotice:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didFinishModLiveNoticeWithInfo:(id)arg1;
- (void)noticeQRCodePreviewViewControllerDidRevokeNotice:(id)arg1;
- (void)noticeQRCodePreviewViewControllerNoticeTopChanged:(id)arg1 noticeInfo:(id)arg2;
- (void)rightButtonAction;
- (void)leftButtonAction;
- (void)pageSheetWillAppear;
- (void)layoutSubviews;
- (void)removeAddedNoticeId:(id)arg1;
- (void)addAddedNoticeId:(id)arg1;
- (id)initWithAddedNoticeIds:(id)arg1 liveTask:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

