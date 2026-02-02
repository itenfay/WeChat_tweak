//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, MMWebImageView, UILabel;

@interface GameChatMessageCell
{
    MMWebImageView *_iconImgView;
    UILabel *_bottomLabel;
    MMBadgeView *_badgeView;
}

+ (double)dynamicCellHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) MMWebImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (void)updateBadgeView:(unsigned long long)arg1 asSmallDot:(_Bool)arg2;
- (void)layoutBadgeView;
- (void)configureWithCellModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

