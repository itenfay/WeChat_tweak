//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface WCHighLightButton : UIButton
{
    UIColor *_highlightColor;
    UIColor *_normalColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void)setHighlighted:(_Bool)arg1;

@end

