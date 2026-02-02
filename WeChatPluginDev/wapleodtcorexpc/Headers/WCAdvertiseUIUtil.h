//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCAdvertiseUIUtil : NSObject
{
}

+ (id)createPAGView:(id)arg1;
+ (_Bool)isAdFireworkCheerCommentStyle:(id)arg1;
+ (id)tryToAppendAtAllForAdBossFirstComment:(id)arg1 dataItem:(id)arg2 contentPrefix:(id)arg3;
+ (id)genCommentAtFriendFormatString:(id)arg1 defaultValue:(id)arg2;
+ (id)genCommentDisplayNameCustomColor:(id)arg1 defaultValue:(id)arg2;
+ (id)genLikeDisplayNameSeparatorText:(id)arg1 defaultValue:(id)arg2;
+ (id)genLikeDisplayNameCustomColor:(id)arg1 defaultValue:(id)arg2;
+ (id)fetchHexValueFromColor:(id)arg1;
+ (id)parseColorValueOrClearColorForOriColorString:(id)arg1;
+ (id)parseColorValueForOriColorString:(id)arg1;
+ (id)fetchColorWithLightColorString:(id)arg1 lightColorDefault:(id)arg2 darkColorString:(id)arg3 darkColorDefault:(id)arg4;
+ (_Bool)canShowBreakFrameTagView:(id)arg1;
+ (void)updateEasyBuyView:(id)arg1 withDataItem:(id)arg2;
+ (_Bool)canShowWeAppFlagshipIcon:(id)arg1;
+ (_Bool)canShowWeAppRelievedBuyIcon:(id)arg1;
+ (_Bool)needToShowPromotion:(id)arg1;
+ (void)addShadowToView:(id)arg1 color:(id)arg2 opacity:(float)arg3 offset:(struct CGSize)arg4 radius:(double)arg5;
+ (id)fetchHeadViewForTableFromView:(id)arg1;
+ (id)fetchCellViewForView:(id)arg1;
+ (id)fetchFeedOutFrameContainerForView:(id)arg1 isDetail:(_Bool)arg2;
+ (void)adjustAdChainLabel:(id)arg1 maxWidth:(double)arg2;
+ (double)getFullCardMaxFontScale;
+ (id)fetchActionLinkIconWithDataItem:(id)arg1 imgSize:(struct CGSize)arg2;
+ (id)fetchActionLinkIconWithDataItem:(id)arg1;
+ (long long)fetchActionLinkIconType:(id)arg1;
+ (id)fetchCardAdLogoTipsTextWithIconType:(long long)arg1;
+ (id)fetchCardAdLogoWithIconType:(long long)arg1;
+ (id)fetchCombinedGridActionIcon:(id)arg1 resIndex:(long long)arg2 isMain:(_Bool)arg3;
+ (_Bool)shouldShowCombinedGridActionIcon:(id)arg1 resIndex:(long long)arg2 isMain:(_Bool)arg3;
+ (long long)fetchCombinedGridActionType:(id)arg1 resIndex:(long long)arg2 isMain:(_Bool)arg3;
+ (id)fetchNormalAdLogoImage:(id)arg1 resIndex:(long long)arg2;
+ (_Bool)shouldShowNormalAdLogo:(id)arg1 resIndex:(long long)arg2;
+ (long long)fetchNormalAdLogo:(id)arg1 resIndex:(long long)arg2;
+ (void)setContentHidden:(_Bool)arg1 toView:(id)arg2;
+ (void)setCornerRadius:(double)arg1 toView:(id)arg2;
+ (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
+ (_Bool)isInNormalFontLevel;
+ (_Bool)shouldShowMultiProductsWithItem:(id)arg1;
+ (_Bool)canShowAtFriendIcon:(id)arg1;
+ (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
+ (id)genRichLabelWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4 lineSpacing:(double)arg5 numberOfLines:(long long)arg6 shadow:(_Bool)arg7;
+ (id)genRichLabelWithContent:(id)arg1 textColor:(id)arg2 font:(id)arg3 maxWidth:(double)arg4 lineSpacing:(double)arg5 isSingleLine:(_Bool)arg6 shadow:(_Bool)arg7;
+ (id)genRichLabelWithContent:(id)arg1 textColor:(id)arg2 fontSize:(double)arg3 bold:(_Bool)arg4 maxWidth:(double)arg5 lineSpacing:(double)arg6 isSingleLine:(_Bool)arg7 shadow:(_Bool)arg8;
+ (id)createFullCardContentConainerView:(id)arg1 withWidth:(double)arg2 height:(double)arg3;
+ (void)tryToLoadAdPreferAvatarOnHeadImage:(id)arg1 andObserver:(id)arg2 andAdData:(id)arg3;
+ (id)fetchDynamicFeedGridViewFromView:(id)arg1;
+ (id)fetchImageGridViewFromView:(id)arg1;
+ (void)removeViewControllerDirectlyWithVC:(id)arg1;
+ (void)adaptConventionalJumpParams:(id)arg1 dataItem:(id)arg2;
+ (_Bool)checkViewVisibilityStateWithType:(unsigned long long)arg1 forView:(id)arg2;
+ (unsigned long long)fetchMonitoringTypeWithTid:(id)arg1 cardView:(id)arg2 requestType:(long long)arg3;
+ (void)requestMonitoringTypeForTid:(id)arg1 cardView:(id)arg2 requestType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)findTableViewForSubView:(id)arg1;
+ (id)fetchValidTableViewForSubView:(id)arg1 ignoreVisibilityCheck:(_Bool)arg2;
+ (id)fetchValidTableViewForSubView:(id)arg1;

@end

