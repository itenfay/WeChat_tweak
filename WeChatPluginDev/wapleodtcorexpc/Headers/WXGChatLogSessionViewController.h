//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableView, MMUIActivityIndicatorView, NSDate, NSString, UIButton, UIImageView, UILabel, UIView, WCFilterView;
@protocol WXGChatLogSessionViewControllerDelegate;

@interface WXGChatLogSessionViewController
{
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrAllSessionItem;
    struct vector<std::shared_ptr<ChatLogSessionItem>, std::allocator<std::shared_ptr<ChatLogSessionItem>>> _arrSelectedData;
    _Bool _showSelectTime;
    _Bool _showSelectTextOnly;
    _Bool _hideFilterView;
    _Bool _bSelectAllTime;
    _Bool _bSelectTextOnly;
    _Bool _bLoadDataEnd;
    NSString *_emptyTipString;
    NSString *_sizeRemindString;
    NSString *_titleString;
    unsigned long long _textType;
    id <WXGChatLogSessionViewControllerDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
    MMTableView *_sessionTableView;
    UIImageView *_footerImageView;
    UIView *_seperatorLine;
    UIButton *_selectAllButton;
    UIButton *_nextStepButton;
    UILabel *_emptyTipLabel;
    UILabel *_loadingLabel;
    UILabel *_sizeLabel;
    MMUIActivityIndicatorView *_loadingIndicatorView;
    WCFilterView *_filterView;
    UIView *_filterSeperatorLine;
    NSDate *_minDate;
    NSDate *_maxDate;
    NSDate *_selectBeginDate;
    NSDate *_selectEndDate;
    unsigned long long _lastSelectTimeIndex;
}

+ (id)getDateWithoutHMS:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool bLoadDataEnd; // @synthesize bLoadDataEnd=_bLoadDataEnd;
@property(nonatomic) unsigned long long lastSelectTimeIndex; // @synthesize lastSelectTimeIndex=_lastSelectTimeIndex;
@property(retain, nonatomic) NSDate *selectEndDate; // @synthesize selectEndDate=_selectEndDate;
@property(retain, nonatomic) NSDate *selectBeginDate; // @synthesize selectBeginDate=_selectBeginDate;
@property(nonatomic) _Bool bSelectTextOnly; // @synthesize bSelectTextOnly=_bSelectTextOnly;
@property(nonatomic) _Bool bSelectAllTime; // @synthesize bSelectAllTime=_bSelectAllTime;
@property(retain, nonatomic) NSDate *maxDate; // @synthesize maxDate=_maxDate;
@property(retain, nonatomic) NSDate *minDate; // @synthesize minDate=_minDate;
@property(retain, nonatomic) UIView *filterSeperatorLine; // @synthesize filterSeperatorLine=_filterSeperatorLine;
@property(retain, nonatomic) WCFilterView *filterView; // @synthesize filterView=_filterView;
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
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <WXGChatLogSessionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long textType; // @synthesize textType=_textType;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *sizeRemindString; // @synthesize sizeRemindString=_sizeRemindString;
@property(retain, nonatomic) NSString *emptyTipString; // @synthesize emptyTipString=_emptyTipString;
@property(nonatomic) _Bool showSelectTextOnly; // @synthesize showSelectTextOnly=_showSelectTextOnly;
@property(nonatomic) _Bool showSelectTime; // @synthesize showSelectTime=_showSelectTime;
- (id)getCurrentViewController;
- (void)onItemClick:(unsigned int)arg1 atSection:(unsigned int)arg2;
- (id)p_getFilterSection;
- (id)getTypeSection;
- (id)getTimeSection;
- (void)onChatLogDataLoad:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)onChatLogDataReloadItem;
- (void)onChatLogDataLoadFinished;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onSelecteAll;
- (void)onDone;
- (void)onCancel;
- (id)getDataSizeShowString:(const void *)arg1;
- (id)getSelectButtonTitle;
- (struct CGRect)getTableViewFrame;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)resetLoadingTip:(id)arg1;
- (void)resetEmptyTipLabelWithTip:(id)arg1;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)updateFilterView;
- (void)updateView;
- (void)reInitData;
- (void)initData;
- (void)initView;
- (void)makeEmptyView;
- (void)makeTableView;
- (void)makeFilterView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

