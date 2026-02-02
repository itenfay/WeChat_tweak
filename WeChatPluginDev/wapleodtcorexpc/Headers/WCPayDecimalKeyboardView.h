//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, NSTimer, UIButton, UITextField;
@protocol WCPayDecimalKeyboardViewDelegate;

@interface WCPayDecimalKeyboardView : UIView
{
    _Bool _alwaysHideFloatButton;
    _Bool _alwaysShowFloatButton;
    _Bool _confirmBtnEnableFlag;
    _Bool _operateBtnEnableFlag;
    _Bool _isOnlySupportInteger;
    _Bool _bIsViewControllerDismiss;
    _Bool _bIskeyboardHiding;
    _Bool _bIskeyboardShowing;
    _Bool _bNeedForceHide;
    _Bool _bNeedHideFloatBtn;
    _Bool _bIsInnerMode;
    UIButton *_confirmBtn;
    UIButton *_zeroBtn;
    UIButton *_dotBtn;
    UIButton *_deleteBtn;
    id <WCPayDecimalKeyboardViewDelegate> _delegate;
    UIView *_toolView;
    UIView *_keysArea;
    NSString *_confirmBtnTitle;
    NSString *_operateBtnTitle;
    UIButton *_operateBtn;
    NSMutableArray *_keyContentArray;
    UITextField *_targetTextField;
    UIButton *_floatConfirmBtn;
    double _keyboardShowY;
    double _vcBottomContentY;
    NSString *_enterAmount;
    NSString *_innerAmount;
    NSTimer *_clearTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *clearTimer; // @synthesize clearTimer=_clearTimer;
@property(retain, nonatomic) NSString *innerAmount; // @synthesize innerAmount=_innerAmount;
@property(retain, nonatomic) NSString *enterAmount; // @synthesize enterAmount=_enterAmount;
@property(nonatomic) _Bool bIsInnerMode; // @synthesize bIsInnerMode=_bIsInnerMode;
@property(nonatomic) double vcBottomContentY; // @synthesize vcBottomContentY=_vcBottomContentY;
@property(nonatomic) _Bool bNeedHideFloatBtn; // @synthesize bNeedHideFloatBtn=_bNeedHideFloatBtn;
@property(nonatomic) _Bool bNeedForceHide; // @synthesize bNeedForceHide=_bNeedForceHide;
@property(nonatomic) double keyboardShowY; // @synthesize keyboardShowY=_keyboardShowY;
@property(nonatomic) _Bool bIskeyboardShowing; // @synthesize bIskeyboardShowing=_bIskeyboardShowing;
@property(nonatomic) _Bool bIskeyboardHiding; // @synthesize bIskeyboardHiding=_bIskeyboardHiding;
@property(nonatomic) _Bool bIsViewControllerDismiss; // @synthesize bIsViewControllerDismiss=_bIsViewControllerDismiss;
@property(retain, nonatomic) UIButton *floatConfirmBtn; // @synthesize floatConfirmBtn=_floatConfirmBtn;
@property(nonatomic) __weak UITextField *targetTextField; // @synthesize targetTextField=_targetTextField;
@property(retain, nonatomic) NSMutableArray *keyContentArray; // @synthesize keyContentArray=_keyContentArray;
@property(nonatomic) _Bool isOnlySupportInteger; // @synthesize isOnlySupportInteger=_isOnlySupportInteger;
@property(nonatomic) _Bool operateBtnEnableFlag; // @synthesize operateBtnEnableFlag=_operateBtnEnableFlag;
@property(nonatomic) _Bool confirmBtnEnableFlag; // @synthesize confirmBtnEnableFlag=_confirmBtnEnableFlag;
@property(retain, nonatomic) UIButton *operateBtn; // @synthesize operateBtn=_operateBtn;
@property(retain, nonatomic) NSString *operateBtnTitle; // @synthesize operateBtnTitle=_operateBtnTitle;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
@property(retain, nonatomic) UIView *keysArea; // @synthesize keysArea=_keysArea;
@property(retain, nonatomic) UIView *toolView; // @synthesize toolView=_toolView;
@property(nonatomic) __weak id <WCPayDecimalKeyboardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *dotBtn; // @synthesize dotBtn=_dotBtn;
@property(retain, nonatomic) UIButton *zeroBtn; // @synthesize zeroBtn=_zeroBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property _Bool alwaysShowFloatButton; // @synthesize alwaysShowFloatButton=_alwaysShowFloatButton;
@property _Bool alwaysHideFloatButton; // @synthesize alwaysHideFloatButton=_alwaysHideFloatButton;
- (void)WCBaseViewControllerWillBeDismissed:(id)arg1;
- (void)MMUIViewControllerWillDisppear:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)layoutKeyboardButton;
- (void)keyboardFrameChange:(id)arg1;
- (_Bool)isCurrentKeyboardViewActive;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)floatConfirmBtnClick;
- (void)genFloatConfirmBtn;
- (double)smallBtnBottomMargin;
- (double)smallBtnRightMargin;
- (double)smallBtnHeight;
- (double)smallBtnWidth;
- (id)copyConfirmBtn;
- (id)circleLayerWithDiameter:(double)arg1;
- (id)pathWithDiameter:(double)arg1;
- (double)bigCircleDiameter;
- (double)smallCircleDiameter;
- (struct _NSRange)textFieldSelectedRange;
- (void)handleTextFieldEditingWithText:(id)arg1;
- (void)keyboardBtnClick:(id)arg1;
- (void)keyboardBtnTouchDown:(id)arg1;
- (void)forceShowFloatConfirmBtn;
- (void)setViewControllerBottomContentY:(double)arg1;
- (void)setNeedForceDismissAndHideFloatBtn;
- (void)setNeedForceDismiss;
- (void)setConfirmBtnBackgroundColor:(id)arg1;
- (_Bool)operateBtnEnable;
- (_Bool)confirmBtnEnable;
- (void)setOperateBtnEnable:(_Bool)arg1;
- (void)setConfirmbtnEnable:(_Bool)arg1;
- (double)confirmBtnWidth;
- (double)commonBtnHeight;
- (double)commonBtnWidth;
- (id)genKeyboardCommonBtnAttributeWithBackgroundColor:(id)arg1 needDefaultClickEvent:(_Bool)arg2;
- (id)genKeyboardBigConfirmBtnWithTitle:(id)arg1 needDefaultClickEvent:(_Bool)arg2;
- (id)genKeyboardIconBtnWithImage:(id)arg1;
- (id)genKeyboardCommonBtnWithTitle:(id)arg1;
- (long long)getCurrentKeyboardBtnTag;
- (void)setupKeyboardView;
- (void)outTimeTask;
- (void)clickConfirm;
- (id)getEnterAmount;
- (void)resetAmount;
- (id)getInputAmount;
- (void)manualHideKeyboard;
- (void)manualShowKeyboard;
- (id)initKeyboardViewWithDelegate:(id)arg1 textField:(id)arg2 confirmBtnTitle:(id)arg3 toolView:(id)arg4 operateBtnTitle:(id)arg5 isOnlySupportInteger:(_Bool)arg6;
- (id)initKeyboardViewWithDelegate:(id)arg1 textField:(id)arg2 confirmBtnTitle:(id)arg3 toolView:(id)arg4 operateBtnTitle:(id)arg5;
- (id)initKeyboardViewWithDelegate:(id)arg1 textField:(id)arg2 confirmBtnTitle:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

