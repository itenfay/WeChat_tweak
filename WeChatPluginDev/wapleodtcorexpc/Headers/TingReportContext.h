//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class CurrCategoryInfoContext, CurrCategorySessionAttrContext, ExploreSessionsContext, NSString;

@interface TingReportContext : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)contextWithAction:(int)arg1 scene:(int)arg2;
+ (id)contextWithAction:(int)arg1;
- (void)fillWithCategory:(id)arg1;
- (void)fillWithTingItem:(id)arg1 belongsToCategory:(id)arg2;
- (void)fillWithListenItem:(id)arg1 belongsToCategory:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *actionBaseListenId; // @dynamic actionBaseListenId;
@property(retain, nonatomic) NSString *actionCategoryId; // @dynamic actionCategoryId;
@property(nonatomic) unsigned int actionCategoryType; // @dynamic actionCategoryType;
@property(retain, nonatomic) NSString *actionExtraInfo; // @dynamic actionExtraInfo;
@property(nonatomic) unsigned long long actionInPage; // @dynamic actionInPage;
@property(retain, nonatomic) NSString *actionListenId; // @dynamic actionListenId;
@property(nonatomic) unsigned int actionListenIdMediaType; // @dynamic actionListenIdMediaType;
@property(retain, nonatomic) NSString *actionListenIdfinderFeed; // @dynamic actionListenIdfinderFeed;
@property(nonatomic) unsigned int actionListenIdtype; // @dynamic actionListenIdtype;
@property(retain, nonatomic) NSString *actionRecommendId; // @dynamic actionRecommendId;
@property(retain, nonatomic) NSString *actionRequestId; // @dynamic actionRequestId;
@property(retain, nonatomic) NSString *actionRootShareFromOuterAppId; // @dynamic actionRootShareFromOuterAppId;
@property(retain, nonatomic) NSString *actionSearchId; // @dynamic actionSearchId;
@property(retain, nonatomic) NSString *actionSearchQuery; // @dynamic actionSearchQuery;
@property(retain, nonatomic) NSString *actionSearchSessionId; // @dynamic actionSearchSessionId;
@property(retain, nonatomic) NSString *actionSectionTitle; // @dynamic actionSectionTitle;
@property(retain, nonatomic) NSString *actionSingerFinderUin; // @dynamic actionSingerFinderUin;
@property(retain, nonatomic) NSString *actionSingerIdorBizUin; // @dynamic actionSingerIdorBizUin;
@property(nonatomic) unsigned int actionSongIndexInList; // @dynamic actionSongIndexInList;
@property(nonatomic) unsigned long long actionTs; // @dynamic actionTs;
@property(retain, nonatomic) NSString *appSessionId; // @dynamic appSessionId;
@property(nonatomic) unsigned long long appSessionStartScene; // @dynamic appSessionStartScene;
@property(retain, nonatomic) NSString *currAlbum; // @dynamic currAlbum;
@property(retain, nonatomic) NSString *currBaseListenId; // @dynamic currBaseListenId;
@property(retain, nonatomic) NSString *currCategoryId; // @dynamic currCategoryId;
@property(retain, nonatomic) CurrCategoryInfoContext *currCategoryInfo; // @dynamic currCategoryInfo;
@property(retain, nonatomic) CurrCategorySessionAttrContext *currCategorySession; // @dynamic currCategorySession;
@property(retain, nonatomic) NSString *currCategorySessionAttr; // @dynamic currCategorySessionAttr;
@property(retain, nonatomic) NSString *currCategorySessionId; // @dynamic currCategorySessionId;
@property(nonatomic) unsigned long long currCategoryStartScene; // @dynamic currCategoryStartScene;
@property(nonatomic) unsigned int currCategoryType; // @dynamic currCategoryType;
@property(nonatomic) unsigned int currCopyrightStatus; // @dynamic currCopyrightStatus;
@property(nonatomic) unsigned int currIsInAppBackground; // @dynamic currIsInAppBackground;
@property(nonatomic) unsigned int currIsPlatformLimitedFree; // @dynamic currIsPlatformLimitedFree;
@property(nonatomic) unsigned int currIsPlatformPay; // @dynamic currIsPlatformPay;
@property(nonatomic) unsigned int currIsPlatformVip; // @dynamic currIsPlatformVip;
@property(nonatomic) unsigned int currIsPlatformWxVip; // @dynamic currIsPlatformWxVip;
@property(nonatomic) unsigned int currIsTry; // @dynamic currIsTry;
@property(nonatomic) unsigned int currIsVipSong; // @dynamic currIsVipSong;
@property(retain, nonatomic) NSString *currLineId; // @dynamic currLineId;
@property(retain, nonatomic) NSString *currListenId; // @dynamic currListenId;
@property(retain, nonatomic) NSString *currListenIdfinderFeed; // @dynamic currListenIdfinderFeed;
@property(nonatomic) unsigned long long currListenIdstartTs; // @dynamic currListenIdstartTs;
@property(retain, nonatomic) NSString *currListenMd5; // @dynamic currListenMd5;
@property(retain, nonatomic) NSString *currPlatFormInfo; // @dynamic currPlatFormInfo;
@property(retain, nonatomic) NSString *currPlatformSongId; // @dynamic currPlatformSongId;
@property(nonatomic) unsigned int currPlayMode; // @dynamic currPlayMode;
@property(nonatomic) unsigned int currPlayQuality; // @dynamic currPlayQuality;
@property(nonatomic) unsigned int currProgressOfListenId; // @dynamic currProgressOfListenId;
@property(retain, nonatomic) NSString *currRoomId; // @dynamic currRoomId;
@property(nonatomic) unsigned long long currRoomIduserCount; // @dynamic currRoomIduserCount;
@property(nonatomic) unsigned long long currScene; // @dynamic currScene;
@property(retain, nonatomic) NSString *currSingerFinderUin; // @dynamic currSingerFinderUin;
@property(retain, nonatomic) NSString *currSingerIdorBizUin; // @dynamic currSingerIdorBizUin;
@property(nonatomic) unsigned int currSongIndexInList; // @dynamic currSongIndexInList;
@property(retain, nonatomic) NSString *currSongName; // @dynamic currSongName;
@property(nonatomic) unsigned int currTapeType; // @dynamic currTapeType;
@property(retain, nonatomic) NSString *currTingFunctionStartInfo; // @dynamic currTingFunctionStartInfo;
@property(nonatomic) unsigned long long currTingFunctionStartScene; // @dynamic currTingFunctionStartScene;
@property(nonatomic) unsigned long long durationOfCurrListenIdjank; // @dynamic durationOfCurrListenIdjank;
@property(nonatomic) unsigned long long durationSinceAppSessionStart; // @dynamic durationSinceAppSessionStart;
@property(nonatomic) unsigned long long durationSincePageStart; // @dynamic durationSincePageStart;
@property(nonatomic) unsigned long long durationSincePlaySessionStart; // @dynamic durationSincePlaySessionStart;
@property(retain, nonatomic) ExploreSessionsContext *exploreSessions; // @dynamic exploreSessions;
@property(retain, nonatomic) NSString *feedIdofSyncBeatVideo; // @dynamic feedIdofSyncBeatVideo;
@property(retain, nonatomic) NSString *finderSessionBuffer; // @dynamic finderSessionBuffer;
@property(retain, nonatomic) NSString *finderUin; // @dynamic finderUin;
@property(retain, nonatomic) NSString *flowWindowSessionId; // @dynamic flowWindowSessionId;
@property(nonatomic) unsigned int listenIdMediaType; // @dynamic listenIdMediaType;
@property(retain, nonatomic) NSString *listenIdsourceAppId; // @dynamic listenIdsourceAppId;
@property(nonatomic) unsigned int listenIdtype; // @dynamic listenIdtype;
@property(nonatomic) unsigned int maxProgressOfListenId; // @dynamic maxProgressOfListenId;
@property(nonatomic) unsigned int netType; // @dynamic netType;
@property(nonatomic) unsigned int origDurationOfListenId; // @dynamic origDurationOfListenId;
@property(nonatomic) unsigned int playDevType; // @dynamic playDevType;
@property(nonatomic) unsigned int playDurationOfListenId; // @dynamic playDurationOfListenId;
@property(retain, nonatomic) NSString *playSameSongId; // @dynamic playSameSongId;
@property(retain, nonatomic) NSString *playSessionId; // @dynamic playSessionId;
@property(nonatomic) unsigned long long playSessionStartScene; // @dynamic playSessionStartScene;
@property(retain, nonatomic) NSString *playSessionStartSceneInfo; // @dynamic playSessionStartSceneInfo;
@property(nonatomic) unsigned long long pvOfCurrListenIdjank; // @dynamic pvOfCurrListenIdjank;
@property(nonatomic) unsigned int realPlayTimeOfSyncBeatVideo; // @dynamic realPlayTimeOfSyncBeatVideo;
@property(retain, nonatomic) NSString *reddotInfo; // @dynamic reddotInfo;
@property(retain, nonatomic) NSString *rootListenIdofActionListenId; // @dynamic rootListenIdofActionListenId;
@property(nonatomic) unsigned int userType; // @dynamic userType;

@end

