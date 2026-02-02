//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface EmoticonCellLikeButton : UIButton
{
    UIColor *_selectedColor;
    double _animateDuration;
    UIColor *_originBackgroundColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *originBackgroundColor; // @synthesize originBackgroundColor=_originBackgroundColor;
@property(nonatomic) double animateDuration; // @synthesize animateDuration=_animateDuration;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cancelSelectedState;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

