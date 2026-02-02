//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMFinderLiveImageTextLabelParams, MMWebImageView, UIImageView, UILabel;

@interface MMFinderLiveImageTextLabelView
{
    MMFinderLiveImageTextLabelParams *_params;
    MMWebImageView *_leftImageView;
    UILabel *_label;
    UIImageView *_rightImageView;
}

+ (struct CGSize)sizeWithParams:(id)arg1;
+ (double)widthWithParams:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) MMWebImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) MMFinderLiveImageTextLabelParams *params; // @synthesize params=_params;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)update;
- (id)initWithFrame:(struct CGRect)arg1;

@end

