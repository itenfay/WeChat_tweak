//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CustomVisualEffectView;

@interface MinimizeAbsorbFloatingBackgroundView : UIView
{
    UIView *_bgView;
    CustomVisualEffectView *_visualEffectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CustomVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void)layoutSubviews;
- (id)init;

@end

