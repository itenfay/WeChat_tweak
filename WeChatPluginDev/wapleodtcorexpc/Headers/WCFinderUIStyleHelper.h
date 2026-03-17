//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderUIStyleHelper : NSObject
{
}

+ (double)findPageCellSafeMargin;
+ (id)topViewController;
+ (void)addShadowToTLViewItem:(id)arg1;
+ (id)findLowestVisibleSubviewInContainer:(id)arg1;
+ (void)removeAndHiddenView:(id)arg1;
+ (double)getHalfScreenPercentHeightByMediaWidHeightRatio:(double)arg1;
+ (id)dynamicIconPathWithKey:(id)arg1;
+ (id)getViewTopViewController:(id)arg1;
+ (id)getViewTopWindow:(id)arg1;
+ (_Bool)finderIsOnSubScene;
+ (_Bool)isInFinderScene;
+ (_Bool)finderIsMainScreenOnSubScene;
+ (_Bool)stringIsEqual:(id)arg1 stringB:(id)arg2;
+ (_Bool)curViewIsOnSubScene:(id)arg1;
+ (double)screenHeightIsSubScene:(_Bool)arg1;
+ (double)iPadPopoverWidth:(id)arg1;
+ (double)iPadScreenWidth:(id)arg1;
+ (double)iPadFullScreenContentWidth:(id)arg1;
+ (double)getCurrentMainScreenWidth;
+ (struct CGRect)getFindEntryCellRemainRect:(unsigned long long)arg1 leftRedDot:(_Bool)arg2 redDotNumber:(unsigned long long)arg3;
+ (unsigned long long)calcFinderCellLineNumWithTitle:(id)arg1 leftRedDot:(_Bool)arg2 redDotNumber:(unsigned long long)arg3;
+ (unsigned long long)calcMaxTextLength:(int)arg1 font:(id)arg2 width:(double)arg3;
+ (id)genEnglisthTextTitle;
+ (id)genTestTitle;
+ (unsigned long long)calcFinderTimelineRecommendBubbleMaxSingleTitleLength;
+ (unsigned long long)calcFinderTimelineBubbleMaxSingleTitleLength;
+ (unsigned long long)finderCellSingleLineMaxTitleLengthLeftRedDot:(_Bool)arg1 redDotNumber:(unsigned long long)arg2 entryScene:(unsigned long long)arg3;
+ (unsigned long long)finderCellSingleLineMaxTitleLengthLeftRedDot:(_Bool)arg1 redDotNumber:(unsigned long long)arg2;
+ (unsigned long long)finderCellDoubleLineMaxTitleLengthLeftRedDot:(_Bool)arg1 redDotNumber:(unsigned long long)arg2 entryScene:(unsigned long long)arg3;
+ (unsigned long long)calcFinderCellMaxTitleLengthLeftRedDot:(_Bool)arg1 redDotNumber:(unsigned long long)arg2 entryScene:(unsigned long long)arg3;
+ (unsigned long long)calcFinderCellMaxTitleLengthLeftRedDot:(_Bool)arg1 redDotNumber:(unsigned long long)arg2;
+ (_Bool)isSnSPOIGoToRelated;
+ (_Bool)isDiceMachine;
+ (_Bool)isSnSLiveHeaderEnable;
+ (_Bool)isNearbyDetailGoToRelated;
+ (_Bool)isNearbyPrivateMsgShow;
+ (double)friendLikeAvatorCornerRadius;
+ (_Bool)isSquareFriendLikeAvator;
+ (id)loadingColor;
+ (id)currentFinderLogoStyleColor;
+ (double)pauseImageMusicTipsLabelWidth;
+ (double)pauseVideoTipsLabelWidth;
+ (double)bulletSettingWidth;

@end

