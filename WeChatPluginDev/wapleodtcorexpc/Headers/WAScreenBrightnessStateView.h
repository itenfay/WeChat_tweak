//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WAScreenBrightnessStateView : UIView
{
    UILabel *_nameLabel;
    UIImageView *_brightIcon;
    UIView *_progressContainerView;
    float _curBrightValue;
}

- (void).cxx_destruct;
- (void)updateScreenBrightness;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

