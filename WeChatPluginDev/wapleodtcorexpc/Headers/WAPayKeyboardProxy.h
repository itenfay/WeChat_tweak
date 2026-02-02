//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UITextField, WCPayDecimalKeyboardView;
@protocol IWAPayKeyboardServiceDelegate;

@interface WAPayKeyboardProxy : NSObject
{
    UITextField *_textField;
    id <IWAPayKeyboardServiceDelegate> _delegate;
    WCPayDecimalKeyboardView *_keyboard;
}

+ (id)createService;
- (void).cxx_destruct;
@property(retain, nonatomic) WCPayDecimalKeyboardView *keyboard; // @synthesize keyboard=_keyboard;
@property(nonatomic) __weak id <IWAPayKeyboardServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (id)keyboardHostViewController;
- (void)keyboardViewConfirmBtnClick:(id)arg1;
- (void)attachKeyboardTo:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

