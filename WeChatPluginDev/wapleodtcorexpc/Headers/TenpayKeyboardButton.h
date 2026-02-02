//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UILabel;

@interface TenpayKeyboardButton : UIButton
{
    UILabel *subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;

@end

