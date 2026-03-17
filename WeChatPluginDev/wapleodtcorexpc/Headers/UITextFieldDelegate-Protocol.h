//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIMenu, UITextField;
@protocol UIEditMenuInteractionAnimating;

@protocol UITextFieldDelegate <NSObject>

@optional
- (void)textField:(UITextField *)arg1 willDismissEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (void)textField:(UITextField *)arg1 willPresentEditMenuWithAnimator:(id <UIEditMenuInteractionAnimating>)arg2;
- (UIMenu *)textField:(UITextField *)arg1 editMenuForCharactersInRange:(struct _NSRange)arg2 suggestedActions:(NSArray *)arg3;
- (_Bool)textFieldShouldReturn:(UITextField *)arg1;
- (_Bool)textFieldShouldClear:(UITextField *)arg1;
- (void)textFieldDidChangeSelection:(UITextField *)arg1;
- (_Bool)textField:(UITextField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)textFieldDidEndEditing:(UITextField *)arg1 reason:(long long)arg2;
- (void)textFieldDidEndEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldEndEditing:(UITextField *)arg1;
- (void)textFieldDidBeginEditing:(UITextField *)arg1;
- (_Bool)textFieldShouldBeginEditing:(UITextField *)arg1;
@end

