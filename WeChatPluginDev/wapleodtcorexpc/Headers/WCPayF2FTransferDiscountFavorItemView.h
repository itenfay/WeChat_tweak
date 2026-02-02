//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WCPayF2FTransferDiscountFavorItemView : UIView
{
    CDUnknownBlockType _onClick;
    UILabel *_titleLabel;
    UIImageView *_arrow;
    UIView *_highLightMask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *highLightMask; // @synthesize highLightMask=_highLightMask;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType onClick; // @synthesize onClick=_onClick;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateTitle:(id)arg1 color:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)init;

@end

