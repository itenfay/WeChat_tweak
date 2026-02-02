//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMLocatingCoordinateLogic, MMPickLocationViewController, NSIndexPath, NSMutableArray, NSString, POIItem, UIButton, UILabel, UITextView, WCAddressMultiPickerItem, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBaseTextViewItem;
@protocol WCAddressInfoViewControllerDelegate;

@interface WCAddressInfoViewController
{
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCAddressMultiPickerItem *m_pickerDistrictItem;
    WCBaseTextViewItem *m_textViewStreetItem;
    WCBaseTextFieldItem *m_textFieldPostalCodeItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    WCBaseTextViewItem *m_textViewPasteBoardItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    NSMutableArray *m_arrayInfo;
    id <WCAddressInfoViewControllerDelegate> m_delegate;
    NSIndexPath *m_selectItemIndex;
    _Bool m_resolveConnection;
    NSString *m_pasteBoardString;
    double m_keyboardHeight;
    POIItem *m_selectPosition;
    int _infoStatus;
    MMPickLocationViewController *_pickLocationViewController;
    UILabel *_districtInfoLabel;
    NSString *_districtInfoLabelString;
    unsigned long long _cellHeightForDistrictInfo;
    UITextView *_pasteBoard;
    UILabel *_pasteBoardPlaceHoldText;
    UIButton *_resolveButton;
    UIButton *_doubleResolveButton;
    UIButton *_clearPasteButton;
    MMLocatingCoordinateLogic *_locatingLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLocatingCoordinateLogic *locatingLogic; // @synthesize locatingLogic=_locatingLogic;
@property(retain, nonatomic) UIButton *clearPasteButton; // @synthesize clearPasteButton=_clearPasteButton;
@property(retain, nonatomic) UIButton *doubleResolveButton; // @synthesize doubleResolveButton=_doubleResolveButton;
@property(retain, nonatomic) UIButton *resolveButton; // @synthesize resolveButton=_resolveButton;
@property(retain, nonatomic) UILabel *pasteBoardPlaceHoldText; // @synthesize pasteBoardPlaceHoldText=_pasteBoardPlaceHoldText;
@property(retain, nonatomic) UITextView *pasteBoard; // @synthesize pasteBoard=_pasteBoard;
@property(nonatomic) unsigned long long cellHeightForDistrictInfo; // @synthesize cellHeightForDistrictInfo=_cellHeightForDistrictInfo;
@property(nonatomic) int infoStatus; // @synthesize infoStatus=_infoStatus;
@property(retain, nonatomic) NSString *districtInfoLabelString; // @synthesize districtInfoLabelString=_districtInfoLabelString;
@property(retain, nonatomic) UILabel *districtInfoLabel; // @synthesize districtInfoLabel=_districtInfoLabel;
@property(retain, nonatomic) MMPickLocationViewController *pickLocationViewController; // @synthesize pickLocationViewController=_pickLocationViewController;
- (void)setTextForStreetItem:(id)arg1;
- (void)setDistinctInfo:(id)arg1;
- (void)onFailureCompletionWithText:(id)arg1 andComponent:(int)arg2;
- (void)multiPickerWillDisappear;
- (void)onFinishMultiPickerWithProvince:(id)arg1 andCity:(id)arg2 andDistrict:(id)arg3 andStreet:(id)arg4 andPostCode:(id)arg5;
- (void)onCancelSeletctedLocation;
- (id)onGetRightBarButton;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)onFinishSelectedLocation;
- (void)addressButtonDidClicked;
- (void)contactButtonDidClicked;
- (void)textViewDidChange:(id)arg1;
- (void)showResolvingIndictor;
- (void)clearPasteBoardInfo:(id)arg1;
- (void)onResolveAddressInfo:(id)arg1;
- (void)resolvePasteBoardInfo:(id)arg1;
- (void)setPasteBoardWithStatu:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeEmptyCell:(id)arg1 cellInfo:(id)arg2;
- (void)makePasteBoardCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (_Bool)checkIsEmpty:(id)arg1;
- (void)onNext;
- (_Bool)getData:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initNavigationBar;
- (void)showEnsureAlert:(id)arg1 Title:(id)arg2;
- (void)OnCancelClick;
- (void)OnComfireEnsureAlert;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)initInfoTemplate;
- (id)navigationBarBackgroundColor;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

