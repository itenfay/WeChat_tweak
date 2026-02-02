//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CContact, CrossfadeAnimationController, MMGrowTextView, MMHeadImageView, MMTableView, MMTextView, MMUIView, NSMutableArray, NSMutableSet, NSString, SolitaireObj, SolitaireToolLogicController, SolitaireToolView, UIButton, UILabel, UIView;
@protocol SolitaireDisplayViewControllerDelegate;

@interface SolitaireDisplayViewController
{
    _Bool _bAddNewLine;
    _Bool _bFocusTitle;
    _Bool _hasExampleItem;
    _Bool _isTextViewFixOnKeyBoard;
    id <SolitaireDisplayViewControllerDelegate> _delegate;
    SolitaireObj *_solitaireObj;
    MMGrowTextView *_headTextView;
    MMGrowTextView *_tailTextView;
    SolitaireToolView *_toolView;
    SolitaireToolLogicController *_toolLogicController;
    MMTextView *_currentTextView;
    unsigned long long _enterScene;
    MMHeadImageView *_headImageView;
    UILabel *_infoLabel;
    CContact *_contact;
    MMGrowTextView *_textViewtoCalculate;
    CrossfadeAnimationController *_transitionInstance;
    MMTableView *_tableView;
    MMUIView *_tableHeadView;
    UIView *_headLineView;
    MMUIView *_tableTailView;
    NSMutableArray *_solitaireArray;
    UIButton *_addButton;
    double _keyboardHeight;
    NSString *_cacheHeadText;
    NSString *_cacheTailText;
    NSMutableSet *_nameSet;
    double _defaultKeyboardHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double defaultKeyboardHeight; // @synthesize defaultKeyboardHeight=_defaultKeyboardHeight;
@property(retain, nonatomic) NSMutableSet *nameSet; // @synthesize nameSet=_nameSet;
@property(copy, nonatomic) NSString *cacheTailText; // @synthesize cacheTailText=_cacheTailText;
@property(copy, nonatomic) NSString *cacheHeadText; // @synthesize cacheHeadText=_cacheHeadText;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) _Bool isTextViewFixOnKeyBoard; // @synthesize isTextViewFixOnKeyBoard=_isTextViewFixOnKeyBoard;
@property(nonatomic) _Bool hasExampleItem; // @synthesize hasExampleItem=_hasExampleItem;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) NSMutableArray *solitaireArray; // @synthesize solitaireArray=_solitaireArray;
@property(retain, nonatomic) MMUIView *tableTailView; // @synthesize tableTailView=_tableTailView;
@property(retain, nonatomic) UIView *headLineView; // @synthesize headLineView=_headLineView;
@property(retain, nonatomic) MMUIView *tableHeadView; // @synthesize tableHeadView=_tableHeadView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CrossfadeAnimationController *transitionInstance; // @synthesize transitionInstance=_transitionInstance;
@property(retain, nonatomic) MMGrowTextView *textViewtoCalculate; // @synthesize textViewtoCalculate=_textViewtoCalculate;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) unsigned long long enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) MMTextView *currentTextView; // @synthesize currentTextView=_currentTextView;
@property(retain, nonatomic) SolitaireToolLogicController *toolLogicController; // @synthesize toolLogicController=_toolLogicController;
@property(retain, nonatomic) SolitaireToolView *toolView; // @synthesize toolView=_toolView;
@property(retain, nonatomic) MMGrowTextView *tailTextView; // @synthesize tailTextView=_tailTextView;
@property(retain, nonatomic) MMGrowTextView *headTextView; // @synthesize headTextView=_headTextView;
@property(retain, nonatomic) SolitaireObj *solitaireObj; // @synthesize solitaireObj=_solitaireObj;
@property(nonatomic) _Bool bFocusTitle; // @synthesize bFocusTitle=_bFocusTitle;
@property(nonatomic) _Bool bAddNewLine; // @synthesize bAddNewLine=_bAddNewLine;
@property(nonatomic) __weak id <SolitaireDisplayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (void)hideKeyboard;
- (void)onSolitaireAlertViewconfirm;
- (void)onSolitaireAlertViewCancel;
- (void)sendSolitaire;
- (void)onSolitaire:(id)arg1;
- (void)exitSolitaireFormatInput;
- (void)onCancelAlertViewCancel;
- (void)OnCancel;
- (id)getNewItemCotent;
- (void)addNewLine;
- (void)onAddLineBtnClick;
- (void)scrollLastCellToVisible:(id)arg1;
- (id)getTrimmedSoliatireArray;
- (_Bool)isAllContentChanged;
- (void)checkRemoveNoCotentSolitaireItem;
- (_Bool)isSolitaireArrayHasTrueCotent;
- (_Bool)isSendButtonEnable;
- (void)setSendButtonIfEnable;
- (void)onBeFirstResponderAndShowKeyboard:(id)arg1 keyboardHeight:(double)arg2;
- (_Bool)isAddButtonHidden;
- (_Bool)textViewOfCellForbidEdit:(id)arg1;
- (void)textViewOfCellHeightDidChanged:(id)arg1 withOriginalText:(id)arg2 andNewText:(id)arg3;
- (void)adjustTableContentOffsetWhenShowKeyboard:(id)arg1 keyboardHeight:(double)arg2;
- (void)textViewOfCellBeginEditing:(id)arg1;
- (void)keyboardOfCellWillAppear:(double)arg1 ofCell:(id)arg2;
- (void)textOfCellDidChange:(id)arg1 ofOriginItem:(id)arg2;
- (void)textViewOfCellDidEnterNilOfOriginItem:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)onKeyboardWillHide;
- (void)keyboardWillShow:(double)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)getHeightWithText:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)shouldInteractiveDismiss;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)resetTextViewtoCalculateSize:(struct CGSize)arg1;
- (void)initNavigationBar;
- (id)makeLineView;
- (id)initWithSolitaireObj:(id)arg1;
- (id)getChatName;
- (void)onGetResult:(id)arg1 FromToolType:(unsigned int)arg2;
- (id)getViewController;
- (unsigned long long)getCurActiveInputSourceType;
- (void)reportClickType:(unsigned long long)arg1;
- (void)onClickTimeToolBtn;
- (void)onClickTelephoneToolBtn;
- (void)onClickLocationToolBtn;
- (_Bool)checkFirstResponderIsMMTextView;
- (void)updateToolBarHeight:(double)arg1;
- (void)initToolView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

