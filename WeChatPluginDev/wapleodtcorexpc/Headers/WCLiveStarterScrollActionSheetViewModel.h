//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId;

@interface WCLiveStarterScrollActionSheetViewModel : NSObject
{
    MMFinderLiveTaskId *_liveTaskId;
    unsigned long long _hiddenItemsFlag;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long hiddenItemsFlag; // @synthesize hiddenItemsFlag=_hiddenItemsFlag;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(readonly, nonatomic) _Bool shouldHideRewardWishItem;
@property(readonly, nonatomic) _Bool shouldHideFansGroupItem;
@property(readonly, nonatomic) _Bool shouldHideLinkItem;
@property(readonly, nonatomic) _Bool shouldHideRedPacketItem;
- (_Bool)isShowCreatorCenterEnabled;
- (_Bool)isShowOpPromotionCardEntranceEnable;
- (_Bool)isLinkItemEnabled;
- (_Bool)isRewardItemEnabled;
- (_Bool)isRecommendOptionEnabled;
- (_Bool)isAnchorCustomizeRewardEnabled;
- (_Bool)isFansGroupEnabled;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (_Bool)isShowEntranceForFeedbackHelpEnabled;
- (_Bool)isShowTrafficEntranceEnabled;
- (_Bool)enableShowFansGroupEntrance;
- (_Bool)isLikeAnchorEntrenceEnable;
- (_Bool)isRewardAnchorEntrenceEnable;
- (long long)currVisibilityMode;
- (_Bool)isHiddenAudienceName;
- (_Bool)isHiddenAudienceNameEnable;
- (_Bool)isMicMuted;
- (_Bool)isRewardEnable;
- (_Bool)isMicEnable;
- (_Bool)isFreeTalkEnabled;
- (_Bool)isQuickReplyEnable;
- (_Bool)isBulletinEnable;
- (_Bool)isLikeEnable;
- (_Bool)isCommentEnable;
- (_Bool)isRecommendOptionExpose;
- (_Bool)isCommentAssistantEnable;
- (id)initWithTaskId:(id)arg1;

@end

