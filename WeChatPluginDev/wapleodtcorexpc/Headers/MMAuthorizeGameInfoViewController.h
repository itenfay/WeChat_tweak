//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class GetUserGrantInfoBuffer, MMAuthorizeScopeTopView, MMTableView, NSMutableArray, NSString, RichTextView, SetUserGrantInfoBuffer, UIButton, UIView;
@protocol MMAuthorizeViewControllerDelegate;

@interface MMAuthorizeGameInfoViewController
{
    id <MMAuthorizeViewControllerDelegate> _delegate;
    SetUserGrantInfoBuffer *_setUserGrantInfoBuffer;
    MMTableView *_tableView;
    MMAuthorizeScopeTopView *_tableHeaderView;
    UIView *_tableFooterView;
    UIButton *_comfirmBtn;
    UIButton *_denyBtn;
    UIView *_footerViewSeperator;
    RichTextView *_richTextView;
    GetUserGrantInfoBuffer *_getUserGrantInfoBuffer;
    NSMutableArray *_arrViewModels;
    NSMutableArray *_arrShowingViewModels;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrShowingViewModels; // @synthesize arrShowingViewModels=_arrShowingViewModels;
@property(retain, nonatomic) NSMutableArray *arrViewModels; // @synthesize arrViewModels=_arrViewModels;
@property(retain, nonatomic) GetUserGrantInfoBuffer *getUserGrantInfoBuffer; // @synthesize getUserGrantInfoBuffer=_getUserGrantInfoBuffer;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) UIView *footerViewSeperator; // @synthesize footerViewSeperator=_footerViewSeperator;
@property(retain, nonatomic) UIButton *denyBtn; // @synthesize denyBtn=_denyBtn;
@property(retain, nonatomic) UIButton *comfirmBtn; // @synthesize comfirmBtn=_comfirmBtn;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) MMAuthorizeScopeTopView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SetUserGrantInfoBuffer *setUserGrantInfoBuffer; // @synthesize setUserGrantInfoBuffer=_setUserGrantInfoBuffer;
@property(nonatomic) __weak id <MMAuthorizeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onSelectHalfScreenCellWithViewModel:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)genSetUserGrantInfoBuffer;
- (_Bool)shouldShowViewModel:(id)arg1;
- (void)updateShowingViewModels;
- (void)initViewModels;
- (void)initData;
- (void)onDenyBtnClick;
- (void)onComfirmBtnClick;
- (void)onReturn;
- (_Bool)shouldInteractivePop;
- (void)initRichTextView;
- (void)layoutTableFooterView;
- (void)initTableFooterView;
- (void)layoutTableHeaderView;
- (void)initTableHeaderView;
- (void)initSubViews;
- (id)navigationBarBackgroundColor;
- (void)initNavigationBar;
- (void)viewDidLoad;
- (id)initWithGetUserGrantInfoBuffer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

