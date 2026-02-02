//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary, NSMutableDictionary, NSString, NSTimer, WACustomKeyboard, WAJSEventHandler_BaseEvent, WANativeKeyboardAccessoryView;
@protocol InputKeyboardDelegate, WATextInputInterface;

@interface WAWebViewPlugin_InputKeyboard
{
    double _toolBarHeight;
    long long _orientation;
    NSMutableDictionary *_textInputs;
    _Bool _keyboardDidShow;
    _Bool _viewDisappear;
    _Bool _canShowKeyboard;
    _Bool _hidding;
    _Bool _modalMask;
    _Bool _systemKeyboard;
    _Bool _customHiddingKeyboard;
    id <InputKeyboardDelegate> _inputDelegate;
    WANativeKeyboardAccessoryView *_nativeInputAccessoryView;
    id <WATextInputInterface> _field;
    WACustomKeyboard *_customKeyboard;
    double _keyboardHeight;
    NSDictionary *_delayParam;
    WAJSEventHandler_BaseEvent *_handler;
    double _offset;
    id <WATextInputInterface> _checkingField;
    NSTimer *_ignoreSafeAreaChangeTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *ignoreSafeAreaChangeTimer; // @synthesize ignoreSafeAreaChangeTimer=_ignoreSafeAreaChangeTimer;
@property(nonatomic) __weak id <WATextInputInterface> checkingField; // @synthesize checkingField=_checkingField;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) _Bool customHiddingKeyboard; // @synthesize customHiddingKeyboard=_customHiddingKeyboard;
@property(retain, nonatomic) WAJSEventHandler_BaseEvent *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDictionary *delayParam; // @synthesize delayParam=_delayParam;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) WACustomKeyboard *customKeyboard; // @synthesize customKeyboard=_customKeyboard;
@property(nonatomic) _Bool systemKeyboard; // @synthesize systemKeyboard=_systemKeyboard;
@property(retain, nonatomic) id <WATextInputInterface> field; // @synthesize field=_field;
@property(retain, nonatomic) WANativeKeyboardAccessoryView *nativeInputAccessoryView; // @synthesize nativeInputAccessoryView=_nativeInputAccessoryView;
@property(nonatomic) _Bool modalMask; // @synthesize modalMask=_modalMask;
@property(nonatomic) __weak id <InputKeyboardDelegate> inputDelegate; // @synthesize inputDelegate=_inputDelegate;
- (void)miniProgramKeybaordFinish:(id)arg1;
- (void)miniProgramKeybaordTouchDelete:(id)arg1;
- (void)miniProgramKeybaordTouchNumber:(id)arg1;
- (void)setKeyboardAppearance:(id)arg1 WithStr:(id)arg2;
- (void)setCurrentViewOffset:(double)arg1;
- (void)showDropDown:(id)arg1;
- (void)setDrapDown:(id)arg1 field:(id)arg2;
- (id)getInput;
- (void)onScrollViewDidEndScroll:(id)arg1;
- (void)onScrollViewWillBeginDragging:(id)arg1;
- (void)onSelectDrop:(id)arg1 input:(id)arg2;
- (void)onDeleteDrop:(id)arg1 input:(id)arg2;
- (double)getContentHeight:(unsigned int)arg1;
- (long long)getLineCount:(unsigned int)arg1;
- (_Bool)onReturn:(id)arg1;
- (void)didHeightChange:(double)arg1 lineNum:(long long)arg2 input:(id)arg3;
- (void)onCaretBreak;
- (void)didValueChange:(id)arg1 pos:(long long)arg2 input:(id)arg3 keyCode:(unsigned short)arg4;
- (void)onFocus:(id)arg1;
- (_Bool)updateTextArea:(id)arg1;
- (_Bool)removeTextArea:(unsigned int)arg1;
- (unsigned int)insertTextArea:(id)arg1;
- (_Bool)focusInput:(id)arg1;
- (_Bool)updateTextField:(id)arg1;
- (_Bool)removeTextField:(unsigned int)arg1;
- (void)parseSafePasswordParam:(id)arg1 field:(id)arg2;
- (unsigned int)insertTextField:(id)arg1;
- (void)onDone;
- (void)hideKeyBoard:(_Bool)arg1;
- (void)onKeyboardDidHide:(id)arg1;
- (void)setDelayedHandler:(id)arg1 withParam:(id)arg2;
- (_Bool)keyboardVisible;
- (void)sendOnKeyboardHeightChangeEventWithHeight:(double)arg1 duration:(double)arg2 inputId:(unsigned int)arg3;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardDidShow:(id)arg1;
- (void)adjustViewPosition:(_Bool)arg1;
- (void)enterBackground:(id)arg1;
- (void)didResize;
- (_Bool)isWebviewInputFocusing;
- (void)setWebviewInputFocusing:(_Bool)arg1;
- (void)onSystemKeyboardWillShow:(id)arg1;
- (void)updateKeyboardAccessoryViewForInput:(id)arg1;
- (void)setSystemKeyboardMode:(_Bool)arg1;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (void)setInputValue:(id)arg1 cursorPos:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)getReturnKeyType:(id)arg1 defaultType:(long long)arg2;
- (long long)getTextViewReturnKeyType:(id)arg1;
- (long long)getTextFieldReturnKeyType:(id)arg1;
- (void)addNotifications;
- (void)onKeyboardDidReady;
- (void)showCustomKeyboard:(long long)arg1 confirmButton:(_Bool)arg2;
- (void)showSystemKeyboard:(_Bool)arg1;
- (void)showKeyboardForExistInput:(id)arg1;
- (void)showKeyBoard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

