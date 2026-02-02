//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIView;

@interface MMCustomHighlightColorButton : UIButton
{
    UIView *_maskView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setHighlightMaskViewColor:(id)arg1 cornerRadius:(double)arg2;

@end

