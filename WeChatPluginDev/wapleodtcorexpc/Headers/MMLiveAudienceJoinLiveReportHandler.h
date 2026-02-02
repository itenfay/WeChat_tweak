//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveAudienceJoinLiveReportHandler
{
    unsigned int scene;
    unsigned int errCode;
    unsigned int enterRoomCount;
    unsigned int exitRoomCount;
    unsigned int commentCount;
    unsigned int heartCount;
    unsigned int connectReqCount;
    unsigned int connectCount;
    NSString *roomId;
    unsigned long long liveId;
    NSString *liveUin;
    NSString *liveUserName;
    unsigned long long lastTime;
    unsigned long long enterTimestamp;
    unsigned long long exitTimestamp;
    unsigned long long exitChatroomUV;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_exitChatroomUV;
+ (void)MMLiveReportFieldAdd_exitTimestamp;
+ (void)MMLiveReportFieldAdd_enterTimestamp;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)MMLiveReportFieldAdd_connectCount;
+ (void)MMLiveReportFieldAdd_connectReqCount;
+ (void)MMLiveReportFieldAdd_heartCount;
+ (void)MMLiveReportFieldAdd_commentCount;
+ (void)MMLiveReportFieldAdd_exitRoomCount;
+ (void)MMLiveReportFieldAdd_enterRoomCount;
+ (void)MMLiveReportFieldAdd_errCode;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_scene;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long exitChatroomUV; // @synthesize exitChatroomUV;
@property(nonatomic) unsigned long long exitTimestamp; // @synthesize exitTimestamp;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp;
@property(nonatomic) unsigned long long lastTime; // @synthesize lastTime;
@property(retain, nonatomic) NSString *liveUserName; // @synthesize liveUserName;
@property(nonatomic) unsigned int connectCount; // @synthesize connectCount;
@property(nonatomic) unsigned int connectReqCount; // @synthesize connectReqCount;
@property(nonatomic) unsigned int heartCount; // @synthesize heartCount;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount;
@property(nonatomic) unsigned int exitRoomCount; // @synthesize exitRoomCount;
@property(nonatomic) unsigned int enterRoomCount; // @synthesize enterRoomCount;
@property(nonatomic) unsigned int errCode; // @synthesize errCode;
@property(retain, nonatomic) NSString *liveUin; // @synthesize liveUin;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(nonatomic) unsigned int scene; // @synthesize scene;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (id)init;
- (void)report;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

