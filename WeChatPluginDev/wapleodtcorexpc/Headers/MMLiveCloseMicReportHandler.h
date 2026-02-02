//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveCloseMicReportHandler
{
    unsigned int closeRole;
    unsigned int hasVideo;
    int isMicConnected;
    NSString *roomId;
    unsigned long long liveId;
    unsigned long long micId;
    NSString *liveUin;
    unsigned long long lastTime;
    NSString *liveUserName;
    NSString *liveMicId;
    long long startTime;
    long long endTime;
    long long startAudienceUV;
    long long endAudienceUV;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_isMicConnected;
+ (void)MMLiveReportFieldAdd_endAudienceUV;
+ (void)MMLiveReportFieldAdd_startAudienceUV;
+ (void)MMLiveReportFieldAdd_endTime;
+ (void)MMLiveReportFieldAdd_startTime;
+ (void)MMLiveReportFieldAdd_liveMicId;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)MMLiveReportFieldAdd_hasVideo;
+ (void)MMLiveReportFieldAdd_closeRole;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_micId;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_roomId;
- (void).cxx_destruct;
@property(nonatomic) int isMicConnected; // @synthesize isMicConnected;
@property(nonatomic) long long endAudienceUV; // @synthesize endAudienceUV;
@property(nonatomic) long long startAudienceUV; // @synthesize startAudienceUV;
@property(nonatomic) long long endTime; // @synthesize endTime;
@property(nonatomic) long long startTime; // @synthesize startTime;
@property(retain, nonatomic) NSString *liveMicId; // @synthesize liveMicId;
@property(retain, nonatomic) NSString *liveUserName; // @synthesize liveUserName;
@property(nonatomic) unsigned int hasVideo; // @synthesize hasVideo;
@property(nonatomic) unsigned int closeRole; // @synthesize closeRole;
@property(nonatomic) unsigned long long lastTime; // @synthesize lastTime;
@property(retain, nonatomic) NSString *liveUin; // @synthesize liveUin;
@property(nonatomic) unsigned long long micId; // @synthesize micId;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
- (void)doReportWidthGroupLiveTask:(id)arg1 isMicConnected:(_Bool)arg2;
- (void)reportWithLiveTask:(id)arg1 liveMicId:(id)arg2 isMicConnected:(_Bool)arg3;
- (id)init;
- (void)report;

@end

