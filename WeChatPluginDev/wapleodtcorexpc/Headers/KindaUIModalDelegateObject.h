//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class KindaModalController, MMVoidBoolI32Callback, NSString;

@interface KindaUIModalDelegateObject : NSObject
{
    MMVoidBoolI32Callback *_keyboardShowCallback;
    CDUnknownBlockType _requestEndEditing;
    KindaModalController *_controller;
}

- (void).cxx_destruct;
@property(nonatomic) __weak KindaModalController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) CDUnknownBlockType requestEndEditing; // @synthesize requestEndEditing=_requestEndEditing;
@property(retain, nonatomic) MMVoidBoolI32Callback *keyboardShowCallback; // @synthesize keyboardShowCallback=_keyboardShowCallback;
- (void)endEditing;
- (void)setKeyBoardShowCallbackImpl:(id)arg1;
- (void)refreshNavigationBar;
- (void)fragmentShow:(_Bool)arg1;
- (void)genSnapshotImpl:(_Bool)arg1 callback:(id)arg2;
- (long long)currentPlatform;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

