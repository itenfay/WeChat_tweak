//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel;

@interface EditVideoRightTopEntranceButton
{
    UIImageView *_logoImageView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

+ (id)longVideoEntrance;
+ (id)finderEntranceForShortVideo;
+ (id)finderEntranceForLongVideo;
+ (id)WeSeeEntrance;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)loadWithLogo:(id)arg1 title:(id)arg2;

@end

