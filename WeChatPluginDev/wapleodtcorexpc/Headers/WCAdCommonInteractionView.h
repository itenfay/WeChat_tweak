//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class ColorGradientView, MMUILabel, UIImageView, WCAdCommonInteractionInfo;

@interface WCAdCommonInteractionView : UIView
{
    WCAdCommonInteractionInfo *_interactionInfo;
    ColorGradientView *_bottomGradientView;
    UIImageView *_iconView;
    MMUILabel *_descLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) ColorGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) WCAdCommonInteractionInfo *interactionInfo; // @synthesize interactionInfo=_interactionInfo;
- (_Bool)isContentWordingVisible;
- (void)layoutSubviews;
- (void)generateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 interactionInfo:(id)arg2;

@end

