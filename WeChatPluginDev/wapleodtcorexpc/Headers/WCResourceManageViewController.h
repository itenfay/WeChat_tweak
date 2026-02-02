//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, MMUILabel, NSDate, NSMutableArray, NSString, ResourceBrowseCollectionView, StorageFootPanelView, UIView, WCFilterView;

@interface WCResourceManageViewController
{
    unsigned int _eFilterStartTime;
    unsigned int _eFilterEndTime;
    NSMutableArray *_allMsgInfo;
    UIView *_underlineTabView;
    WCFilterView *_filterView;
    StorageFootPanelView *_footPanelView;
    UIView *_middleView;
    ResourceBrowseCollectionView *_allResBrowseView;
    MMUILabel *_middleTipLabel;
    MMUILabel *_middleLoadLabel;
    MMUIActivityIndicatorView *_loadingIndicatorView;
    unsigned long long _curManageType;
    unsigned long long _curOrderType;
    unsigned long long _curSelectType;
    unsigned long long _curSelectTime;
    long long _currentTime;
    NSDate *_minSelectDate;
    NSDate *_maxSelectDate;
    NSDate *_selectBeginDate;
    NSDate *_selectEndDate;
    unsigned long long _viewType;
}

+ (id)getDateWithoutHMS:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(nonatomic) unsigned int eFilterEndTime; // @synthesize eFilterEndTime=_eFilterEndTime;
@property(nonatomic) unsigned int eFilterStartTime; // @synthesize eFilterStartTime=_eFilterStartTime;
@property(retain, nonatomic) NSDate *selectEndDate; // @synthesize selectEndDate=_selectEndDate;
@property(retain, nonatomic) NSDate *selectBeginDate; // @synthesize selectBeginDate=_selectBeginDate;
@property(retain, nonatomic) NSDate *maxSelectDate; // @synthesize maxSelectDate=_maxSelectDate;
@property(retain, nonatomic) NSDate *minSelectDate; // @synthesize minSelectDate=_minSelectDate;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) unsigned long long curSelectTime; // @synthesize curSelectTime=_curSelectTime;
@property(nonatomic) unsigned long long curSelectType; // @synthesize curSelectType=_curSelectType;
@property(nonatomic) unsigned long long curOrderType; // @synthesize curOrderType=_curOrderType;
@property(nonatomic) unsigned long long curManageType; // @synthesize curManageType=_curManageType;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) MMUILabel *middleLoadLabel; // @synthesize middleLoadLabel=_middleLoadLabel;
@property(retain, nonatomic) MMUILabel *middleTipLabel; // @synthesize middleTipLabel=_middleTipLabel;
@property(retain, nonatomic) ResourceBrowseCollectionView *allResBrowseView; // @synthesize allResBrowseView=_allResBrowseView;
@property(retain, nonatomic) UIView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) StorageFootPanelView *footPanelView; // @synthesize footPanelView=_footPanelView;
@property(retain, nonatomic) WCFilterView *filterView; // @synthesize filterView=_filterView;
@property(retain, nonatomic) UIView *underlineTabView; // @synthesize underlineTabView=_underlineTabView;
@property(retain, nonatomic) NSMutableArray *allMsgInfo; // @synthesize allMsgInfo=_allMsgInfo;
- (void)p_fillDataItemsFilter:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataLoadFinished;
- (void)onReturn;
- (void)switchToView:(unsigned long long)arg1;
- (struct CGRect)getMiddleFrame;
- (void)updateView;
- (void)initView;
- (void)reinitData;
- (void)initData;
- (_Bool)isDataAllSelected;
- (unsigned long long)getSeletedDataSize;
- (_Bool)isDataSelectEmpty;
- (_Bool)isDataEmpty;
- (void)fillingData;
- (void)deleteTheSelectedData;
- (void)viewDidLoad;
- (_Bool)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (id)initWithResourceViewType:(unsigned long long)arg1;
- (id)init;
- (_Bool)wouldResponseToResourceBrowseCollectionViewClickRecordMsg;
- (id)onResourceBrowseCollectionViewGetParentUIViewController;
- (void)onResourceBrowseCollectionViewSelectChange:(id)arg1;
- (id)makeAllBrowseView;
- (_Bool)isFootPanelRelateDataSelectEmpty;
- (_Bool)isFootPanelRelateDataLoading;
- (void)onFootPanelDeleteButtonClick;
- (void)onFootPanelSelectButtonClick;
- (id)getFootPanelSizeText;
- (id)getFootPanelLabelText;
- (id)getFootPanelDeletebuttonTitle;
- (id)getFootPanelSelectButtonTitle;
- (void)makeFootPanelView;
- (id)getCurrentViewController;
- (void)onSelectionPanelDismissed:(id)arg1;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)p_getFilterSection;
- (id)p_getTimeSection;
- (void)makeFilterView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

