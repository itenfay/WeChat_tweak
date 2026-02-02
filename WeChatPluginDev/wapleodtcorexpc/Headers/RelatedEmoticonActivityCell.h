//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionActivity, MMUILabel, MMWebImageView, UIImageView;

@interface RelatedEmoticonActivityCell
{
    EmotionActivity *_activity;
    MMUILabel *_mainLabel;
    MMWebImageView *_iconImageView;
    MMUILabel *_nameLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) MMUILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) EmotionActivity *activity; // @synthesize activity=_activity;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

