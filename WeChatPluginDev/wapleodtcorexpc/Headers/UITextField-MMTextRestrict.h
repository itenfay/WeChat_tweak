//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITextField.h>

@class MMTextRestrictRule;
@protocol UITextFieldDelegate;

@interface UITextField (MMTextRestrict)
@property(nonatomic) unsigned long long maxTextLength;
@property(retain, nonatomic) MMTextRestrictRule *textRestrict;
@property(nonatomic) __weak id <UITextFieldDelegate> m_delegate;
@property(nonatomic) long long restrictType;
@end

