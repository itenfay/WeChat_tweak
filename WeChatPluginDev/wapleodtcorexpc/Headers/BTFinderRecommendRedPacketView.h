//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, UIImageView;

@interface BTFinderRecommendRedPacketView
{
    UIImageView *_redPacketImageView;
    MMUILabel *_label;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *redPacketImageView; // @synthesize redPacketImageView=_redPacketImageView;
- (void)setLabelTextColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

