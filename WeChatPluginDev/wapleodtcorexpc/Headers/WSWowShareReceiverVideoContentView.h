//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIImageView, MMUILabel, MMWebImageView;

@interface WSWowShareReceiverVideoContentView : UIView
{
    unsigned int _type;
    MMWebImageView *_thumbImageView;
    UIView *_thumbShadowView;
    MMUIImageView *_thumbIconView;
    MMUILabel *_titleLabel;
    MMUILabel *_subTitleLabel;
    UIView *_bottomLine;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) MMUILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMUIImageView *thumbIconView; // @synthesize thumbIconView=_thumbIconView;
@property(retain, nonatomic) UIView *thumbShadowView; // @synthesize thumbShadowView=_thumbShadowView;
@property(retain, nonatomic) MMWebImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)outsideSetType:(unsigned int)arg1 title:(id)arg2 subTitle:(id)arg3 videoThumbUrl:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

