//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController;
@protocol UITextInput;

@interface WeuiPluginImpl : NSObject
{
    CDUnknownBlockType eventSink;
    double lastKeyboardHeight;
    double lastInputAccessoryHeight;
    _Bool isShowKeyboard;
    UIViewController *_associateViewController;
    UIView<UITextInput> *_flutterTextInput;
}

+ (id)plugin;
- (void).cxx_destruct;
@property(nonatomic) __weak UIView<UITextInput> *flutterTextInput; // @synthesize flutterTextInput=_flutterTextInput;
@property(nonatomic) __weak UIViewController *associateViewController; // @synthesize associateViewController=_associateViewController;
- (void)onDetachedToViewController;
- (void)onAttachedToViewController:(id)arg1;
- (id)getKeyboardHeight:(id)arg1;
- (void)checkIsKeyboardOpen:(id)arg1;
- (id)showKeyboard:(_Bool)arg1 keyboardHeight:(double)arg2 inputAccessoryHeight:(double)arg3;
- (void)dealloc;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)checkValidAndFindTextInput;
- (void)registEvent;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToEngine:(id)arg1;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

