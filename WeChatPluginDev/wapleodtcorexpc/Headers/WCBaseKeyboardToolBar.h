//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIBarButtonItem, UIScrollView, UIToolbar;

@interface WCBaseKeyboardToolBar : NSObject
{
    UIBarButtonItem *m_PreviousButtonItem;
    UIBarButtonItem *m_NextButtonItem;
    UIBarButtonItem *m_SpaceButtonItem;
    UIBarButtonItem *m_FinishButtonItem;
    UIToolbar *m_toolBar;
    UIScrollView *m_scrollView;
    double m_keyboardHeight;
    NSMutableArray *m_arrItem;
    long long m_uiCurrentItemIndex;
    _Bool m_bTouchHide;
    _Bool m_bNoAutoPostion;
    _Bool m_bScrollChangedResignFirstResponder;
    SEL m_scrollChangedAction;
    id m_scrollChangedTarget;
    _Bool _bNeedManualKeyboardFrameChange;
    SEL _manualSetAction;
    id _manualSetTarget;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id manualSetTarget; // @synthesize manualSetTarget=_manualSetTarget;
@property(nonatomic) SEL manualSetAction; // @synthesize manualSetAction=_manualSetAction;
@property(nonatomic) _Bool bNeedManualKeyboardFrameChange; // @synthesize bNeedManualKeyboardFrameChange=_bNeedManualKeyboardFrameChange;
- (void)scrollViewDidScroll:(id)arg1;
- (void)mmTableView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
- (void)done;
- (void)OnNextItem;
- (void)OnPreviousItem;
- (void)UpdateBarButtonItem;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setNeedManualKeyboardFrameChange:(_Bool)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)positionWhenBecameFirstResponder:(id)arg1 withAnimated:(_Bool)arg2;
- (void)sizeWhenBecameFirstResponder;
- (void)changeKeyBoardSize:(id)arg1;
- (void)initNotification;
- (void)initBtnItem;
- (_Bool)setCurrentActiveItem:(id)arg1;
- (_Bool)findCurrentActiveItem;
- (void)setScrollView:(id)arg1;
- (void)addItem:(id)arg1;
- (void)removeAllItem;
- (id)getView;
- (void)initToolBar;
- (void)dealloc;
- (void)setScrollChangedResignFirstResponder:(_Bool)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)setNoAutoPostion:(_Bool)arg1;
- (void)setTouchHide:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

