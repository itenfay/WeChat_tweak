//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BaseMessageViewModel, NSArray, NSSet, NSString, UIView;

@interface BaseMessageCellView
{
    NSArray *m_arrMenuItems;
    UIView *m_contentView;
    _Bool m_touchEnded;
    _Bool m_bDisableAllOperation;
    _Bool m_bIsLongPressHandled;
    _Bool m_isConverting3dTouchToLongPress;
    _Bool m_isTouchUpInsideHandled;
    NSSet *_touches;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *touches; // @synthesize touches=_touches;
- (id)extInfoForSnapshotPrinter;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (_Bool)canPeek;
@property(readonly, nonatomic) UIView *forceTouchShakeView;
- (void)onTouchCancel;
- (void)onLongTouch;
- (void)onLongTouch:(struct CGPoint)arg1;
- (void)onTouchEnded;
- (void)onTouchUpInside;
- (void)onDelayedTouchUpInside;
- (void)onTouchDownRepeat;
- (_Bool)supportDoubleTap;
- (_Bool)autoHighlight;
- (void)onTouchDown;
- (void)LongPressEvents;
- (void)triggerLongPressFor3DTouchAtLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)isTouchInView:(id)arg1;
- (_Bool)checkContentSize;
- (id)getContentView;
- (struct CGRect)showRectForMenuController;
- (id)displayViewForRefer;
- (id)displayViewForImageBrowser;
- (void)setEnableAllOperation;
- (void)setDisableAllOperation;
- (void)showUIStatus;
- (void)hideUIStatus;
- (void)doFavorite;
- (void)doForward;
- (double)contentViewCenterY;
- (void)updateStatus;
- (_Bool)onCustomActionOperated:(id)arg1;
- (id)accessibilityCustomActions;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)accessibilityElementsHidden;
- (void)updateNodeStatus;
- (void)layoutContentView;
- (void)layoutFinished;
- (void)layoutInternal;
- (void)highlightMsgAnimated;
@property(nonatomic) _Bool highlighted;
- (void)prepareForReuse;
- (void)dealloc;
- (_Bool)canShowSearchMenuItem;
- (_Bool)canShowEditMenuItem;
- (_Bool)isChatSupportTopMessage;
- (void)onCancelTopMsgMenuItem:(id)arg1;
- (id)cancelTopMsgItem;
- (_Bool)canShowCancelTopMenuItem;
- (void)onTopMsgMenuItem:(id)arg1;
- (id)topMsgMenuItem;
- (_Bool)canShowTopMsgMenuItem;
- (void)onShowMsgReplyMenuItem:(id)arg1;
- (id)msgReplyMenuItem;
- (_Bool)canShowMsgReplyMenuItem;
- (void)onShowFTSIndexMenuItem:(id)arg1;
- (id)showFTSIndexMenuItem;
- (_Bool)canShowFTSIndexMenuItem;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)canShowMoreMenuItem;
- (void)onMore:(id)arg1;
- (id)moreMenuItem;
- (void)onRestore:(id)arg1;
- (id)restoreMenuItem;
- (_Bool)canShowShareMsgToOpenSDKMenuItem;
- (_Bool)canShowSendToDevices;
- (void)onShareMsgToOpenSDK:(id)arg1;
- (id)shareMsgToOpenSDKMenuItem;
- (_Bool)canRevokeWhenSending;
- (_Bool)canShowRevokeMsgMenuItem;
- (void)addRevokeOrDeleteMenuItem:(id)arg1;
- (void)onRevokeMsg:(id)arg1;
- (id)revokeMsgMenuItem;
- (_Bool)canShowDeleteMenuItem;
- (void)onDelete:(id)arg1;
- (id)deleteMenuItem;
- (void)onCopy:(id)arg1;
- (id)copyMenuItem;
- (_Bool)canShowFavoriteMenuItem;
- (void)onFavorite:(id)arg1;
- (id)favoriteMenuItem;
- (_Bool)canShowForwardMenuItem;
- (void)onForward:(id)arg1;
- (id)forwardMenuItem;
- (_Bool)canShowScheduleMenuItem;
- (void)onSchedule:(id)arg1;
- (id)scheduleMenuItem;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canCellShowOperationMenu;
- (id)operationMenuItems;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)onShowOperationMenu;
- (void)showOperationMenu;
- (id)filteredMenuItems:(id)arg1;
- (id)uniqMenuItems:(id)arg1;
- (id)bypassMessageMenuItemsWhitelist;
- (id)generateOperationMenuForRecordDetail;
- (id)generateOperationMenu;
- (_Bool)isOnlyShowDeleteMenu;
- (struct CGRect)targetRectForMenuControllerForRecordDetail;
- (struct CGRect)targetRectForMenuController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) BaseMessageViewModel *viewModel; // @dynamic viewModel;

@end

