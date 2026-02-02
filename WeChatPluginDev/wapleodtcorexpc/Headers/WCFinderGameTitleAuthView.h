//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class AchievementInfo, NSMutableArray;

@interface WCFinderGameTitleAuthView : UIView
{
    _Bool _displayCovered;
    NSMutableArray *_authIconViews;
    AchievementInfo *_achievementInfo;
}

+ (_Bool)shouldDispalyWithAchievementInfo:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) AchievementInfo *achievementInfo; // @synthesize achievementInfo=_achievementInfo;
@property(retain, nonatomic) NSMutableArray *authIconViews; // @synthesize authIconViews=_authIconViews;
@property(nonatomic) _Bool displayCovered; // @synthesize displayCovered=_displayCovered;
- (void)onClickGameAchievement:(id)arg1;
- (void)reLayoutElements;
- (void)setupWithAchievementInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

