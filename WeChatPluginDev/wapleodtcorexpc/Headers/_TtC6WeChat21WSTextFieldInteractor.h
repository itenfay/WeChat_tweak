//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MISSING_TYPE, NSString, UITextField;

@interface _TtC6WeChat21WSTextFieldInteractor
{
    MISSING_TYPE *textField;
    MISSING_TYPE *forbidNotifyTextChanged;
    MISSING_TYPE *didEditingAtBegining;
    MISSING_TYPE *viewHasAppear;
    MISSING_TYPE *latestNotifiedText;
}

- (void).cxx_destruct;
- (id)init;
- (void)focusSearchBar:(_Bool)arg1;
- (void)__onSearchInputTextChangedWith:(id)arg1;
- (void)onSearchInputTextChanged:(id)arg1;
- (_Bool)textFieldShouldBeginEditing;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (id)initWithTextField:(id)arg1 webviewOwner:(id)arg2;
@property(nonatomic, copy) NSString *latestNotifiedText;
@property(nonatomic, readonly) NSString *trimmedText;
@property(nonatomic, readonly) UITextField *textField; // @synthesize textField;

@end

