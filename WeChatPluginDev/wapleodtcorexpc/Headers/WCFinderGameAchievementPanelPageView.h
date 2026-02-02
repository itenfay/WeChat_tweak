//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewCell.h>

@class AchievementInfo_GameAchievement, MMWebImageView, UILabel, WCFinderLinearView;

@interface WCFinderGameAchievementPanelPageView : UICollectionViewCell
{
    AchievementInfo_GameAchievement *_gameAchievement;
    MMWebImageView *_iconView;
    MMWebImageView *_hdIconView;
    UILabel *_itemNameLabel;
    WCFinderLinearView *_achievementView;
    UILabel *_achievementNameLabel;
}

+ (double)displayHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *achievementNameLabel; // @synthesize achievementNameLabel=_achievementNameLabel;
@property(retain, nonatomic) WCFinderLinearView *achievementView; // @synthesize achievementView=_achievementView;
@property(retain, nonatomic) UILabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
@property(retain, nonatomic) MMWebImageView *hdIconView; // @synthesize hdIconView=_hdIconView;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) AchievementInfo_GameAchievement *gameAchievement; // @synthesize gameAchievement=_gameAchievement;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

