//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCUIAlertView;

@interface WAJSEventHandler_editTextWithPopForm
{
    WCUIAlertView *_editTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCUIAlertView *editTextView; // @synthesize editTextView=_editTextView;
- (void)onEditTextViewConfirmed;
- (void)onEditTextViewCancelled;
- (void)handleJSEvent:(id)arg1;

@end

