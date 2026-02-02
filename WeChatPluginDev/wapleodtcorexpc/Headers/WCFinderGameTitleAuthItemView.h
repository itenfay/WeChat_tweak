//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AchievementInfo_GameAchievement, MMWebImageView, UILabel;

@interface WCFinderGameTitleAuthItemView : UIView
{
    MMWebImageView *_iconView;
    UILabel *_contentLabel;
    AchievementInfo_GameAchievement *_gameAchievement;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AchievementInfo_GameAchievement *gameAchievement; // @synthesize gameAchievement=_gameAchievement;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMWebImageView *iconView; // @synthesize iconView=_iconView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setDisplayCovered:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

