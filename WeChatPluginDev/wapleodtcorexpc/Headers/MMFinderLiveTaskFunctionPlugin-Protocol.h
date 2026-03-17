//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderJoinLiveContext, MMFinderLiveAccountInfo, MMFinderLiveConnectMicUsersInfo, MMFinderLiveContext, MMFinderLiveFansGroupInfo, MMFinderLiveShopContext, MMFinderLiveTaskPluginObj, NSArray, NSString, WCFinderDataItem, WCFinderLiveInfo;

@protocol MMFinderLiveTaskFunctionPlugin <NSObject>
@property(retain, nonatomic) MMFinderLiveTaskPluginObj *plugin;
@property(retain, nonatomic) NSArray *currentAnchorBadgeInfoList;
@property(nonatomic) unsigned long long livePaymentType;
@property(retain, nonatomic) NSArray *currentSelfBadgeInfoArr;
@property(nonatomic) _Bool isAssistantRole;
@property(nonatomic) long long currentLiveAliasRoleType;
@property(nonatomic) int commentScene;
@property(retain, nonatomic) NSArray *liveAccountInfoList;
@property(readonly, nonatomic) long long liveLimitedLevel;
@property(readonly, nonatomic) MMFinderLiveFansGroupInfo *fansGroupInfo;
@property(readonly, nonatomic) _Bool isForceUseServerNickName;
@property(readonly, nonatomic) NSArray *currentRoomRewardRecipientContactList;
@property(retain, nonatomic) MMFinderLiveConnectMicUsersInfo *allConnectedMicUsersInfo;
@property(readonly, nonatomic) MMFinderLiveAccountInfo *currentLiveAccoutInfo;
@property(readonly, nonatomic) struct CGSize videoSize;
@property(readonly, nonatomic) long long cgiLiveScene;
@property(readonly, nonatomic) MMFinderJoinLiveContext *joinLiveContext;
@property(readonly, nonatomic) WCFinderDataItem *finderDataItem;
@property(readonly, copy, nonatomic) NSString *finderUserName;
@property(readonly, nonatomic) NSString *objectNonceID;
@property(readonly, nonatomic) unsigned long long objectID;
- (void)updateFansGroupInfo:(MMFinderLiveFansGroupInfo *)arg1;
- (_Bool)enableTopComment;
- (_Bool)hideNickBySpamCheck;
- (MMFinderLiveAccountInfo *)getAccoutInfoForAliasRoleType:(unsigned int)arg1;
- (MMFinderLiveShopContext *)liveShopContextCreateIfNotFound;
- (MMFinderLiveContext *)liveContextCreateIfNotFound;
- (void)updateLivePaymentTypeWithLiveInfo:(WCFinderLiveInfo *)arg1;
- (void)updateLiveMicExtFlag:(unsigned long long)arg1;
- (void)updateLiveExtFlag:(unsigned int)arg1;
- (void)updateJoinLiveContext:(MMFinderJoinLiveContext *)arg1;
@end

