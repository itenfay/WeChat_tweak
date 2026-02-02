//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMMagnifiterView, MMSelectCoverView, MMTableView, NSString, UIMenuItem, UIPanGestureRecognizer, UITapGestureRecognizer, WeNoteDataController;
@protocol WNSelectionViewDelegate;

@interface WNSelectionView
{
    UIPanGestureRecognizer *m_oPanGestureRecognizer;
    UITapGestureRecognizer *m_tapGestureRecognizer;
    MMSelectCoverView *_coverView;
    _Bool _bTouchLeft;
    _Bool _bTouchRight;
    double _startOffsetY;
    _Bool _isEnable;
    _Bool _isScrollFromSelf;
    UIMenuItem *m_orderListItem;
    _Bool _bSelecting;
    id <WNSelectionViewDelegate> delegate;
    MMTableView *_tableView;
    WeNoteDataController *_dataController;
    MMMagnifiterView *_magnifiterView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMagnifiterView *magnifiterView; // @synthesize magnifiterView=_magnifiterView;
@property(nonatomic) __weak WeNoteDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool bSelecting; // @synthesize bSelecting=_bSelecting;
@property(nonatomic) __weak id <WNSelectionViewDelegate> delegate; // @synthesize delegate;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)keyCommands;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelectRightPosTextView:(id)arg1 range:(id)arg2 end:(_Bool)arg3;
- (void)setSelectLeftPosTextView:(id)arg1 range:(id)arg2 end:(_Bool)arg3;
- (void)setSelectBottomPos:(double)arg1;
- (void)setSelectTopPos:(double)arg1;
- (void)updateCoverViewLeft:(_Bool)arg1 Right:(_Bool)arg2;
- (void)updateCoverView;
- (void)onPanAction:(id)arg1;
- (void)onTapAction:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onRedo:(id)arg1;
- (void)onEditOrderList:(id)arg1;
- (void)onUndo:(id)arg1;
- (void)setHighlightFromKey:(id)arg1;
- (void)setBoldFromKey:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSmallImage:(id)arg1;
- (void)setLargeImage:(id)arg1;
- (void)onEdit:(id)arg1;
- (void)onPaste:(id)arg1;
- (void)onCut:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onDelete:(id)arg1;
- (_Bool)showOrderListMenuWith:(id)arg1;
- (void)hideMenuItems;
- (void)showMenuItems;
- (id)magnifiterView:(double)arg1;
- (void)removeMaginfierView;
- (void)showCoverView;
- (void)checkShouldEnable;
- (void)delayShowMenu;
- (void)tryUpdateSelectionViewOnScroll;
- (void)tryToShowMenueWithoutSelectionView:(struct CGRect)arg1;
- (void)tryShowSelectionViewWithMenue:(_Bool)arg1;
- (void)cancelSelect;
- (void)didReloadView;
- (double)paragraphLeft;
@property(readonly, nonatomic) _Bool selectionShowing;
- (void)hideView;
- (void)checkOrderListMenuItemWith:(struct _NSRange)arg1;
- (id)getMenuItemsWithResponder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

