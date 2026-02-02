//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface TextStatePublishBottomButton : UIButton
{
    UIImageView *_selectedImageView;
}

+ (id)buttonWithTitleAndColor:(id)arg1 imageName:(id)arg2 color:(id)arg3 highLightedColor:(id)arg4 disabledColor:(id)arg5;
+ (id)buttonWithTitle:(id)arg1 imageName:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
- (void)hideRedDot;
- (void)showRedDot;
- (void)setSelected:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end

