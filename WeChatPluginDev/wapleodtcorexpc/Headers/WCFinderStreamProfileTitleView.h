//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView, UILabel, WCFinderHeadImageView;

@interface WCFinderStreamProfileTitleView
{
    UILabel *_nickNameLabel;
    UIImageView *_arrowIconView;
    WCFinderHeadImageView *_avatarImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderHeadImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
- (void)adjustNickNameLabelWidthDelta:(double)arg1;
- (void)showArrowIcon;
- (void)updateLayout;
- (void)layoutSubviews;
- (void)updateWithContact:(id)arg1;
- (void)updateTextColor:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

