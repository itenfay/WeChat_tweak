//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UITapGestureRecognizer, WCSheetView;
@protocol KidsWatchBaseViewControllerDelegate;

@interface KidsWatchBaseViewController
{
    _Bool _allowTapEndEditing;
    _Bool _firstResponderOnceToken;
    id <KidsWatchBaseViewControllerDelegate> _delegate;
    WCSheetView *_sheetView;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool firstResponderOnceToken; // @synthesize firstResponderOnceToken=_firstResponderOnceToken;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) _Bool allowTapEndEditing; // @synthesize allowTapEndEditing=_allowTapEndEditing;
@property(retain, nonatomic) WCSheetView *sheetView; // @synthesize sheetView=_sheetView;
@property(nonatomic) __weak id <KidsWatchBaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)becomeFirstResponderOnce;
- (void)onKeyboardChangingHeight:(double)arg1;
- (void)onKeyboardWillChangeHeight:(double)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)initKeyboardEventListener;
- (_Bool)shouldEndEditForTappedView:(id)arg1;
- (void)onTapGestureTap:(id)arg1;
- (void)onTapCloseBarButtonItem;
- (void)onTapBackBarButtonItem;
- (void)onTapDismissBarButtonItem;
- (_Bool)forceCloseBarButtonItem;
- (_Bool)respondToKeyboardEvent;
- (double)contentWidth;
- (double)maxContentWidth;
- (long long)overrideUserInterfaceStyle;
- (_Bool)useBlackStatusbar;
- (id)navigationBarBackgroundColor;
- (void)layoutSubviews;
- (void)initSubviews;
- (void)viewWillBeInteractivePoped;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
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

