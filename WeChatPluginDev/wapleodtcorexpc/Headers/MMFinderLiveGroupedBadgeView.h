//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveTaskId, NSArray, NSMutableArray, UIImageView;

@interface MMFinderLiveGroupedBadgeView : UIView
{
    _Bool _isFinderUser;
    NSMutableArray *_signViewArrayForLayout;
    NSArray *_badgeInfos;
    double _maxWidth;
    long long _style;
    long long _darkModeStyle;
    MMFinderLiveTaskId *_taskId;
    UIImageView *_finderIconImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFinderUser; // @synthesize isFinderUser=_isFinderUser;
@property(retain, nonatomic) UIImageView *finderIconImageView; // @synthesize finderIconImageView=_finderIconImageView;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) long long darkModeStyle; // @synthesize darkModeStyle=_darkModeStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) NSArray *badgeInfos; // @synthesize badgeInfos=_badgeInfos;
@property(retain, nonatomic) NSMutableArray *signViewArrayForLayout; // @synthesize signViewArrayForLayout=_signViewArrayForLayout;
- (id)mediumFontForMixedText;
- (id)boldFontForNumericText;
- (id)finderLiveTask;
- (_Bool)onlyDark;
- (id)loadFansGroupSignViewIfCan;
- (id)loadGlobalRankSignViewIfCan;
- (id)loadMysteriousSignViewIfCan;
- (id)loadAnonymousSignViewIfCan;
- (void)reloadSignViewArray;
- (void)sizeToFitWithMaxWidth:(double)arg1;
- (void)updateWithBadgeInfos:(id)arg1 isFinderUser:(_Bool)arg2 badgeStyle:(long long)arg3;
- (void)updateWithBadgeInfos:(id)arg1 badgeStyle:(long long)arg2;
- (id)initWithLiveTaskId:(id)arg1 darkModeStyle:(long long)arg2;

@end

