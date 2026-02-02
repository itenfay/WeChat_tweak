//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WeuiPlugin : NSObject
{
    CDUnknownBlockType eventSink;
    int lastKeyboardHeight;
    _Bool isShowKeyboard;
}

+ (void)registerWithRegistrar:(id)arg1;
- (void).cxx_destruct;
- (id)getKeyboardHeight:(id)arg1;
- (void)checkIsKeyboardOpen:(id)arg1;
- (id)showKeyboard:(_Bool)arg1 keyboardHeight:(double)arg2;
- (void)dealloc;
- (void)onKeyboardDidShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)registEvent;
- (id)onListenWithArguments:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)onCancelWithArguments:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

