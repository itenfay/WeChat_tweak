//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImage, UIImageView, UILabel, UIStackView;

@interface MJPublisherButton : NSObject
{
    UILabel *_customTitleLabel;
    UIImageView *_customImageView;
    UIStackView *_stackView;
}

@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(readonly, nonatomic) UILabel *customTitleLabel; // @synthesize customTitleLabel=_customTitleLabel;
- (void)setHorizontalAlignmentLeftWithInset:(double)arg1;
- (void)setAlignmentCenter;
@property(nonatomic) long long axis;
@property(nonatomic) double spacing;
@property(retain, nonatomic) UIImage *customImage;
@property(retain, nonatomic) NSString *customTitle;
- (void)setTintColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

