//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, NSString, UIButton, UILabel, UIView, WCFinderCommonSearchBar, WCFinderLocationFooterView, WCFinderLocationReportModel, WCFinderLocationViewModel, WCFinderMultiSelectSearchBar;
@protocol WCFinderLocationViewControllerDelegate;

@interface WCFinderLocationViewController
{
    id <WCFinderLocationViewControllerDelegate> _delegate;
    NSString *_postSessionId;
    WCFinderLocationViewModel *_viewModel;
    UIView *_containerView;
    UILabel *_titleLabel;
    UIButton *_rightBarBtn;
    WCFinderCommonSearchBar *_singleSearchBar;
    WCFinderMultiSelectSearchBar *_multiSearchBar;
    MMTableView *_poiTableView;
    WCFinderLocationFooterView *_listTableFooterView;
    UIView *_topSeparateLine;
    WCFinderLocationReportModel *_reportModel;
}

+ (double)heightRatio;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLocationReportModel *reportModel; // @synthesize reportModel=_reportModel;
@property(retain, nonatomic) UIView *topSeparateLine; // @synthesize topSeparateLine=_topSeparateLine;
@property(retain, nonatomic) WCFinderLocationFooterView *listTableFooterView; // @synthesize listTableFooterView=_listTableFooterView;
@property(retain, nonatomic) MMTableView *poiTableView; // @synthesize poiTableView=_poiTableView;
@property(retain, nonatomic) WCFinderMultiSelectSearchBar *multiSearchBar; // @synthesize multiSearchBar=_multiSearchBar;
@property(retain, nonatomic) WCFinderCommonSearchBar *singleSearchBar; // @synthesize singleSearchBar=_singleSearchBar;
@property(retain, nonatomic) UIButton *rightBarBtn; // @synthesize rightBarBtn=_rightBarBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) WCFinderLocationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSString *postSessionId; // @synthesize postSessionId=_postSessionId;
@property(nonatomic) __weak id <WCFinderLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)dismissAllPresentedViewControllers;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)updateSearchAssetPOIInfo:(id)arg1;
- (void)showSelectGPSFromAssetPicker;
- (void)onLocationFooterClickSubtitle:(id)arg1;
- (id)genReportInfoDic;
- (void)configureSessionPageInOutReport;
- (void)registerYReportSdk;
- (void)onMultiSelectSearchTextFiledChanged:(id)arg1;
- (void)onMultiSelectSearchItem:(id)arg1;
- (void)onCommonSearchBarTextFiledChanged:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)onViewModelDataReload;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearCurSearchTextField;
- (id)getCurSearchTextField;
- (void)onClickAcceptBtn;
- (void)closeContainer;
- (void)onClickCancelButton;
- (void)_initTableView;
- (double)containerViewHeight;
- (void)setUpView;
- (void)_initHeaderView;
- (void)layoutAllSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)triggerFetchPOILbsList;
- (void)viewDidLoad;
- (id)initWithPOIType:(unsigned long long)arg1 finderUsername:(id)arg2 selectedLocation:(id)arg3 materialLbsLocation:(id)arg4 reportModel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

