//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderJumpInfo, FinderLivePersonalCenterPrepareInfo, FinderPrivacySetting, GameRankSwitchInfo, JoinLiveInvisiableSwitchInfo, NSMutableArray, NSString, PlayHistorySettings, PostActionWording, PrepareFinder, PrepareFinderRealNameInfo, RelatedWxAcctInfo;

@interface FinderNewUserPrepareResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)updateWithBindFinderClubInfo:(id)arg1;
- (void)updateNoRecommendInfo:(id)arg1 withUsername:(id)arg2;
- (id)mainFinderPrepare;
- (id)finderPrepareDict;
- (id)prepareWithUsername:(id)arg1;
@property(readonly, nonatomic) PrepareFinder *prepareWithCurrentUsername;

// Remaining properties
@property(nonatomic) unsigned int actionType; // @dynamic actionType;
@property(retain, nonatomic) PostActionWording *actionWording; // @dynamic actionWording;
@property(retain, nonatomic) NSMutableArray *aliasInfo; // @dynamic aliasInfo;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int courseTotalCount; // @dynamic courseTotalCount;
@property(retain, nonatomic) NSString *curFinderUsername; // @dynamic curFinderUsername;
@property(nonatomic) unsigned int currentAliasRoleType; // @dynamic currentAliasRoleType;
@property(nonatomic) unsigned int favTotalCount; // @dynamic favTotalCount;
@property(retain, nonatomic) NSMutableArray *finderList; // @dynamic finderList;
@property(nonatomic) unsigned int followTotalCount; // @dynamic followTotalCount;
@property(nonatomic) unsigned int foreignUserFlag; // @dynamic foreignUserFlag;
@property(retain, nonatomic) GameRankSwitchInfo *gameLiveSwitchInfo; // @dynamic gameLiveSwitchInfo;
@property(nonatomic) unsigned int isOrderShow; // @dynamic isOrderShow;
@property(retain, nonatomic) JoinLiveInvisiableSwitchInfo *joinliveInvisiableSwitch; // @dynamic joinliveInvisiableSwitch;
@property(nonatomic) unsigned int lastFeedPromotionTs; // @dynamic lastFeedPromotionTs;
@property(nonatomic) unsigned int likedTotalCount; // @dynamic likedTotalCount;
@property(retain, nonatomic) FinderLivePersonalCenterPrepareInfo *livePersonalCenterInfo; // @dynamic livePersonalCenterInfo;
@property(retain, nonatomic) NSString *mainFinderUsername; // @dynamic mainFinderUsername;
@property(nonatomic) unsigned int membercardTotalCount; // @dynamic membercardTotalCount;
@property(nonatomic) unsigned int multiFinderCreateFlag; // @dynamic multiFinderCreateFlag;
@property(nonatomic) unsigned long long nextAliasModAvailableTime; // @dynamic nextAliasModAvailableTime;
@property(nonatomic) unsigned int nicknameMaxLength; // @dynamic nicknameMaxLength;
@property(nonatomic) unsigned int nicknameMinLength; // @dynamic nicknameMinLength;
@property(retain, nonatomic) NSString *noPostPrivilegeDesc; // @dynamic noPostPrivilegeDesc;
@property(retain, nonatomic) NSString *noPostPrivilegeTitle; // @dynamic noPostPrivilegeTitle;
@property(retain, nonatomic) NSMutableArray *operateFinderUserList; // @dynamic operateFinderUserList;
@property(retain, nonatomic) FinderJumpInfo *orderAppInfo; // @dynamic orderAppInfo;
@property(nonatomic) unsigned int paidCollectionTotalCount; // @dynamic paidCollectionTotalCount;
@property(retain, nonatomic) PlayHistorySettings *playHistorySettings; // @dynamic playHistorySettings;
@property(retain, nonatomic) PrepareFinderRealNameInfo *prepareRealnameInfo; // @dynamic prepareRealnameInfo;
@property(retain, nonatomic) FinderPrivacySetting *privacySetting; // @dynamic privacySetting;
@property(retain, nonatomic) FinderJumpInfo *purchaseMicRecordEntrance; // @dynamic purchaseMicRecordEntrance;
@property(nonatomic) unsigned int purchaseMicTotalCount; // @dynamic purchaseMicTotalCount;
@property(nonatomic) unsigned int purchasedTotalCount; // @dynamic purchasedTotalCount;
@property(retain, nonatomic) RelatedWxAcctInfo *relatedWxAcctInfo; // @dynamic relatedWxAcctInfo;
@property(retain, nonatomic) NSString *showInWxFinderUsername; // @dynamic showInWxFinderUsername;
@property(nonatomic) unsigned int signatureMaxLength; // @dynamic signatureMaxLength;
@property(retain, nonatomic) NSMutableArray *unauthFinderList; // @dynamic unauthFinderList;
@property(nonatomic) unsigned int userFlag; // @dynamic userFlag;
@property(nonatomic) int userNoFinder; // @dynamic userNoFinder;

@end

