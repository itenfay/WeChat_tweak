//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLivePromoteListBaseViewModel, MMTableView, NSMutableArray, NSString, UIView, WCFinderRefreshTableFooterView;

@interface MMFinderLivePromoteListBasePanel
{
    MMFinderLivePromoteListBaseViewModel *_listViewModel;
    long long _previousOrientation;
    UIView *_contentView;
    MMTableView *_mainTableView;
    NSMutableArray *_dataArray;
    WCFinderRefreshTableFooterView *_footerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRefreshTableFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) MMTableView *mainTableView; // @synthesize mainTableView=_mainTableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long previousOrientation; // @synthesize previousOrientation=_previousOrientation;
@property(retain, nonatomic) MMFinderLivePromoteListBaseViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
- (_Bool)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (id)getCurrentListViewModel;
- (double)contentViewHeight;
- (void)leftButtonAction;
- (id)getCurrentLeftButton;
- (void)addButtonClicked;
- (id)getCurrentRightButton;
- (void)setupPageSheetConfig;
- (void)pageSheetDidRotation;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)createUI;
- (void)realRefreshTableView;
- (void)fetchData;
- (void)initListViewModel:(id)arg1;
- (void)pageSheetWillAppear;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

