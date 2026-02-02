//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIButton, UITextField;

@interface WXGRoamPackageNameChangeHalfView
{
    UITextField *_textField;
    UIButton *_completeBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *completeBtn; // @synthesize completeBtn=_completeBtn;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onComplete;
- (void)setupDetailView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

