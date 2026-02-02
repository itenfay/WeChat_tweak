//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class LiveOnlineInfo, MMFinderLiveUserStateItem, NSData, NSMutableArray, NSString;

@interface WCFinderGetLiveOnlineMemberResult : NSObject
{
    unsigned int _onlineMemberCount;
    unsigned int _maxDisplayCount;
    unsigned int _continueFlag;
    unsigned int _boardMemberCount;
    unsigned int _liveOnlineMemberBoardVersion;
    NSMutableArray *_onlineUserStateItems;
    MMFinderLiveUserStateItem *_myLiveUserStateItem;
    NSMutableArray *_recentRewardUserStateItems;
    unsigned long long _previewLiveOnlineMemberCount;
    unsigned long long _rewardTotalAmountInHeat;
    unsigned long long _liveHeatValue;
    NSString *_liveHeatValueStr;
    NSData *_lastBuffer;
    NSString *_adImgUrl;
    NSString *_liveParticipateMemberCountStr;
    NSString *_liveOnlineCountStr;
    NSData *_businessFilterBuffer;
    LiveOnlineInfo *_exposedOnlineInfo;
    NSString *_anonymousOnlineCountStr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *anonymousOnlineCountStr; // @synthesize anonymousOnlineCountStr=_anonymousOnlineCountStr;
@property(retain, nonatomic) LiveOnlineInfo *exposedOnlineInfo; // @synthesize exposedOnlineInfo=_exposedOnlineInfo;
@property(retain, nonatomic) NSData *businessFilterBuffer; // @synthesize businessFilterBuffer=_businessFilterBuffer;
@property(nonatomic) unsigned int liveOnlineMemberBoardVersion; // @synthesize liveOnlineMemberBoardVersion=_liveOnlineMemberBoardVersion;
@property(retain, nonatomic) NSString *liveOnlineCountStr; // @synthesize liveOnlineCountStr=_liveOnlineCountStr;
@property(retain, nonatomic) NSString *liveParticipateMemberCountStr; // @synthesize liveParticipateMemberCountStr=_liveParticipateMemberCountStr;
@property(nonatomic) unsigned int boardMemberCount; // @synthesize boardMemberCount=_boardMemberCount;
@property(retain, nonatomic) NSString *adImgUrl; // @synthesize adImgUrl=_adImgUrl;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) unsigned int continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSString *liveHeatValueStr; // @synthesize liveHeatValueStr=_liveHeatValueStr;
@property(nonatomic) unsigned long long liveHeatValue; // @synthesize liveHeatValue=_liveHeatValue;
@property(nonatomic) unsigned long long rewardTotalAmountInHeat; // @synthesize rewardTotalAmountInHeat=_rewardTotalAmountInHeat;
@property(nonatomic) unsigned long long previewLiveOnlineMemberCount; // @synthesize previewLiveOnlineMemberCount=_previewLiveOnlineMemberCount;
@property(nonatomic) unsigned int maxDisplayCount; // @synthesize maxDisplayCount=_maxDisplayCount;
@property(nonatomic) unsigned int onlineMemberCount; // @synthesize onlineMemberCount=_onlineMemberCount;
@property(retain, nonatomic) NSMutableArray *recentRewardUserStateItems; // @synthesize recentRewardUserStateItems=_recentRewardUserStateItems;
@property(retain, nonatomic) MMFinderLiveUserStateItem *myLiveUserStateItem; // @synthesize myLiveUserStateItem=_myLiveUserStateItem;
@property(retain, nonatomic) NSMutableArray *onlineUserStateItems; // @synthesize onlineUserStateItems=_onlineUserStateItems;

@end

