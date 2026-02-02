//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CAGradientLayer, MMUILabel;

@interface MMMusicDirectSetStatusMarqueeLabel
{
    CAGradientLayer *_maskLayer;
    MMUILabel *_labelForDefault;
    MMUILabel *_labelForMarquee;
    unsigned long long _mode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) MMUILabel *labelForMarquee; // @synthesize labelForMarquee=_labelForMarquee;
@property(retain, nonatomic) MMUILabel *labelForDefault; // @synthesize labelForDefault=_labelForDefault;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void)labelSizeToFit;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)removeMaskLayer;
- (void)initMaskLayer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

