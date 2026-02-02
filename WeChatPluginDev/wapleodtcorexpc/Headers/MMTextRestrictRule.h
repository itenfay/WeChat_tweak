//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;
@protocol UITextFieldDelegate;

@interface MMTextRestrictRule
{
    unsigned long long _maxLength;
    long long _restricyType;
    id <UITextFieldDelegate> _m_delegate;
    long long _restrictType;
}

+ (id)textRestrictRuleWithType:(long long)arg1;
+ (struct _NSRange)markedTextRangeToNSRange:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long restrictType; // @synthesize restrictType=_restrictType;
@property(nonatomic) __weak id <UITextFieldDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(readonly, nonatomic) long long restricyType; // @synthesize restricyType=_restricyType;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)restrictMaxLength:(id)arg1;
- (void)textDidChange:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

