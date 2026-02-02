//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSString, WCAccountControlData, WCSheetView;

@interface WCAccountBaseViewController
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountControlData *m_data;
    WCSheetView *_sheetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (double)textFiledLeftMargin;
- (double)contentWidth;
- (_Bool)useTableView;
- (_Bool)useSheetView;
- (_Bool)useGrayBackgroundColor;
- (_Bool)useIpadStyle;
- (_Bool)useRedesignStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)getBothSideMarginInputLineView;
- (id)getInputLineView;
- (id)makeNewHeaderView:(id)arg1;
- (id)makeHeaderView:(id)arg1;
- (id)makeHeaderViewInMainFrame:(id)arg1;
- (id)getNewHeaderView:(id)arg1;
- (id)getHeaderView:(id)arg1;
- (id)getHeaderViewInMainFrame:(id)arg1;
- (void)hideKeyBoard;
- (void)setNavigationRightBarButtonMoreStyleWithtarget:(id)arg1 action:(SEL)arg2;
- (void)setNavigationLeftBarButtonStyle:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)initView;
- (void)configMainContentView;
- (id)mainContentView;
- (_Bool)autoHandleKeyboardEvent;
- (_Bool)useBlackStyleView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)callViewDidLoad;
- (_Bool)useCustomNavibar;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

