//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImage, UILabel;

@interface TPIDKeyboardButton : UIButton
{
    UILabel *subtitleLabel;
    UIImage *_highlightedImage;
}

@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel;
- (void)dealloc;
- (void)hiddenKeyboardPressedState:(_Bool)arg1;
- (void)setKeyboardBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (unsigned long long)accessibilityTraits;

@end

