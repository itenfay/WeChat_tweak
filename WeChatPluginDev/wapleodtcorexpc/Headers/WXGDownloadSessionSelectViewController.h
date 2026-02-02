//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIActivityIndicatorView, NSArray, NSDate, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIView, WCFilterView;
@protocol WXGDownloadSessionViewControllerDelegate;

@interface WXGDownloadSessionSelectViewController
{
    _Bool _isDelete;
    _Bool _hideFilterView;
    _Bool _bUpdate;
    _Bool _bSelectAllTime;
    id <WXGDownloadSessionViewControllerDelegate> _delegate;
    MMTableView *_sessionTableView;
    UIImageView *_footerImageView;
    UIView *_seperatorLine;
    UIButton *_selectAllButton;
    UIButton *_nextStepButton;
    UILabel *_emptyTipLabel;
    UILabel *_loadingLabel;
    UILabel *_sizeLabel;
    MMUIActivityIndicatorView *_loadingIndicatorView;
    NSArray *_infoArray;
    NSMutableDictionary *_selectedInfoDict;
    WCFilterView *_filterView;
    UIView *_filterSeperatorLine;
    NSDate *_minDate;
    NSDate *_maxDate;
    NSDate *_selectBeginDate;
    NSDate *_selectEndDate;
    unsigned long long _lastSelectTimeIndex;
    unsigned long long _selectedTotalSize;
}

+ (id)getDateWithoutHMS:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectedTotalSize; // @synthesize selectedTotalSize=_selectedTotalSize;
@property(nonatomic) unsigned long long lastSelectTimeIndex; // @synthesize lastSelectTimeIndex=_lastSelectTimeIndex;
@property(nonatomic) _Bool bSelectAllTime; // @synthesize bSelectAllTime=_bSelectAllTime;
@property(retain, nonatomic) NSDate *selectEndDate; // @synthesize selectEndDate=_selectEndDate;
@property(retain, nonatomic) NSDate *selectBeginDate; // @synthesize selectBeginDate=_selectBeginDate;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(retain, nonatomic) UIView *filterSeperatorLine; // @synthesize filterSeperatorLine=_filterSeperatorLine;
@property(retain, nonatomic) WCFilterView *filterView; // @synthesize filterView=_filterView;
@property(nonatomic) _Bool bUpdate; // @synthesize bUpdate=_bUpdate;
@property(retain, nonatomic) NSMutableDictionary *selectedInfoDict; // @synthesize selectedInfoDict=_selectedInfoDict;
@property(retain, nonatomic) NSArray *infoArray; // @synthesize infoArray=_infoArray;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UILabel *emptyTipLabel; // @synthesize emptyTipLabel=_emptyTipLabel;
@property(retain, nonatomic) UIButton *nextStepButton; // @synthesize nextStepButton=_nextStepButton;
@property(retain, nonatomic) UIButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
@property(retain, nonatomic) MMTableView *sessionTableView; // @synthesize sessionTableView=_sessionTableView;
@property(nonatomic) _Bool hideFilterView; // @synthesize hideFilterView=_hideFilterView;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(nonatomic) __weak id <WXGDownloadSessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getCurrentViewController;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (void)onSelecteAll;
- (void)dismissAndCallDelegete;
- (void)onDone;
- (void)onCancel;
- (id)getSelectButtonTitle;
- (struct CGRect)getTableViewFrame;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)resetLoadingTip:(id)arg1;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)updateView;
- (void)initView;
- (void)startLoading;
- (void)resetSelectedAndMakeEmptyView;
- (void)makeTableView;
- (id)getTimeSection;
- (id)p_getFilterSection;
- (void)makeFilterView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updateWithInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

