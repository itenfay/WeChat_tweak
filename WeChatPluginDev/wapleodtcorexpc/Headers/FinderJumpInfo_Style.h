//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class EnhanceBubble, FinderJumpInfo_AccountStyle, FinderJumpInfo_AroundAccountCircleStyle, FinderJumpInfo_BannerStyle, FinderJumpInfo_BariableButtonStyle, FinderJumpInfo_BigBubbleStyle, FinderJumpInfo_BigButtonStyle, FinderJumpInfo_ButtonStyle, FinderJumpInfo_CardBottomBarLeftStyle, FinderJumpInfo_CardBottomBarRightStyle, FinderJumpInfo_CardStyle, FinderJumpInfo_CarouselCardStyle, FinderJumpInfo_CombinationStyle, FinderJumpInfo_CommentCarouselStyle, FinderJumpInfo_DynamicCardStyle, FinderJumpInfo_DynamicCardStyleV2, FinderJumpInfo_DynamicCarouselCardStyle, FinderJumpInfo_FinderCrossPlatformCardStyle, FinderJumpInfo_GradientCardStyle, FinderJumpInfo_HotBubbleStyle, FinderJumpInfo_IconTextStyle, FinderJumpInfo_ImageStyle, FinderJumpInfo_JumpButtonStyle, FinderJumpInfo_LabelStyle, FinderJumpInfo_LbsLifeCardStyle, FinderJumpInfo_LinkStyle, FinderJumpInfo_LiveLivingStyle, FinderJumpInfo_LiveReservationStyle, FinderJumpInfo_LoadingStyle, FinderJumpInfo_LuckyBag, FinderJumpInfo_NormalBubbleStyle, FinderJumpInfo_RelativePosition, FinderJumpInfo_SubtitleBubbleStyle, FinderVideoStyle, ProductCardStyle;

@interface FinderJumpInfo_Style : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (double)expandDelayTimeInMS;
- (void)setExpandDelayTimeInMS:(double)arg1;
- (double)appearDelayTimeInMS;
- (void)setAppearDelayTimeInMS:(double)arg1;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo_AccountStyle *accountStyle; // @dynamic accountStyle;
@property(nonatomic) unsigned int appearAtPlayTimeMs; // @dynamic appearAtPlayTimeMs;
@property(nonatomic) unsigned int appearConditionType; // @dynamic appearConditionType;
@property(nonatomic) unsigned int appearTime; // @dynamic appearTime;
@property(retain, nonatomic) FinderJumpInfo_AroundAccountCircleStyle *aroundAccountCircleStyle; // @dynamic aroundAccountCircleStyle;
@property(nonatomic) unsigned int asyncLoadInfoScene; // @dynamic asyncLoadInfoScene;
@property(nonatomic) unsigned int asyncLoadInfoTimeInterval; // @dynamic asyncLoadInfoTimeInterval;
@property(retain, nonatomic) FinderJumpInfo_BannerStyle *bannerStyle; // @dynamic bannerStyle;
@property(retain, nonatomic) FinderJumpInfo_BariableButtonStyle *bariableButtonStyle; // @dynamic bariableButtonStyle;
@property(retain, nonatomic) FinderJumpInfo_BigBubbleStyle *bigBubble; // @dynamic bigBubble;
@property(retain, nonatomic) FinderJumpInfo_BigButtonStyle *bigButton; // @dynamic bigButton;
@property(retain, nonatomic) FinderJumpInfo_CardStyle *bigCard; // @dynamic bigCard;
@property(retain, nonatomic) FinderJumpInfo_ButtonStyle *buttonStyle; // @dynamic buttonStyle;
@property(retain, nonatomic) FinderJumpInfo_CardBottomBarLeftStyle *cardLeftStyle; // @dynamic cardLeftStyle;
@property(retain, nonatomic) FinderJumpInfo_CardBottomBarRightStyle *cardRightStyle; // @dynamic cardRightStyle;
@property(retain, nonatomic) FinderJumpInfo_CarouselCardStyle *carouselCardStyle; // @dynamic carouselCardStyle;
@property(retain, nonatomic) FinderJumpInfo_CombinationStyle *combiationStyle; // @dynamic combiationStyle;
@property(retain, nonatomic) FinderJumpInfo_CommentCarouselStyle *commentCarouselStyle; // @dynamic commentCarouselStyle;
@property(retain, nonatomic) FinderJumpInfo_FinderCrossPlatformCardStyle *crossPlatformCardStyle; // @dynamic crossPlatformCardStyle;
@property(nonatomic) unsigned int disappearAtPlayTimeMs; // @dynamic disappearAtPlayTimeMs;
@property(nonatomic) unsigned int disappearFeedBottom; // @dynamic disappearFeedBottom;
@property(retain, nonatomic) FinderJumpInfo_DynamicCardStyle *dynamicCard; // @dynamic dynamicCard;
@property(retain, nonatomic) FinderJumpInfo_DynamicCardStyleV2 *dynamicCardV2; // @dynamic dynamicCardV2;
@property(retain, nonatomic) FinderJumpInfo_DynamicCarouselCardStyle *dynamicCarouselCardStyle; // @dynamic dynamicCarouselCardStyle;
@property(retain, nonatomic) EnhanceBubble *enhanceBubble; // @dynamic enhanceBubble;
@property(retain, nonatomic) FinderVideoStyle *finderVideoStyle; // @dynamic finderVideoStyle;
@property(nonatomic) unsigned int finishAppeared; // @dynamic finishAppeared;
@property(retain, nonatomic) FinderJumpInfo_GradientCardStyle *gradientCard; // @dynamic gradientCard;
@property(retain, nonatomic) FinderJumpInfo_HotBubbleStyle *hotBubble; // @dynamic hotBubble;
@property(retain, nonatomic) FinderJumpInfo_IconTextStyle *iconTextStyle; // @dynamic iconTextStyle;
@property(retain, nonatomic) FinderJumpInfo_ImageStyle *imageStyle; // @dynamic imageStyle;
@property(retain, nonatomic) FinderJumpInfo_JumpButtonStyle *jumpButtonStyle; // @dynamic jumpButtonStyle;
@property(retain, nonatomic) FinderJumpInfo_LabelStyle *labelStyle; // @dynamic labelStyle;
@property(retain, nonatomic) FinderJumpInfo_LbsLifeCardStyle *lbslifeCardStyle; // @dynamic lbslifeCardStyle;
@property(retain, nonatomic) FinderJumpInfo_LinkStyle *link; // @dynamic link;
@property(retain, nonatomic) FinderJumpInfo_LiveLivingStyle *liveLivingStyle; // @dynamic liveLivingStyle;
@property(retain, nonatomic) FinderJumpInfo_LiveReservationStyle *liveReservationStyle; // @dynamic liveReservationStyle;
@property(retain, nonatomic) FinderJumpInfo_LoadingStyle *loadingStyle; // @dynamic loadingStyle;
@property(retain, nonatomic) FinderJumpInfo_LuckyBag *luckyBag; // @dynamic luckyBag;
@property(retain, nonatomic) FinderJumpInfo_NormalBubbleStyle *normalButtle; // @dynamic normalButtle;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(retain, nonatomic) ProductCardStyle *productCardStyle; // @dynamic productCardStyle;
@property(retain, nonatomic) FinderJumpInfo_RelativePosition *relativePosition; // @dynamic relativePosition;
@property(nonatomic) unsigned int screen; // @dynamic screen;
@property(nonatomic) _Bool showAdsIcon; // @dynamic showAdsIcon;
@property(nonatomic) unsigned int showPosition; // @dynamic showPosition;
@property(nonatomic) unsigned int showStyle; // @dynamic showStyle;
@property(retain, nonatomic) FinderJumpInfo_CardStyle *smallCard; // @dynamic smallCard;
@property(retain, nonatomic) FinderJumpInfo_SubtitleBubbleStyle *subtitleBubbleStyle; // @dynamic subtitleBubbleStyle;

@end

