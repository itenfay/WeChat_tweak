//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIFont;

@interface MMTitleFontChangeableButton : UIButton
{
    UIFont *_normalFont;
    UIFont *_highlightedFont;
    UIFont *_selectedFont;
    UIFont *_disabledFont;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *disabledFont; // @synthesize disabledFont=_disabledFont;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) UIFont *highlightedFont; // @synthesize highlightedFont=_highlightedFont;
@property(retain, nonatomic) UIFont *normalFont; // @synthesize normalFont=_normalFont;
- (void)setTitleFont:(id)arg1;
- (void)layoutSubviews;
- (void)setTitleFont:(id)arg1 forState:(unsigned long long)arg2;

@end

