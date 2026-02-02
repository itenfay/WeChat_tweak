//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveAnchorCloseLiveReportHandler
{
    unsigned int scene;
    unsigned int roomRole;
    unsigned int lastTime;
    unsigned int audienceCount;
    unsigned int audienceCountMax;
    unsigned int commentCount;
    unsigned int heartCount;
    unsigned int connectCount;
    unsigned int allowReplay;
    unsigned int roomCount;
    NSString *roomId;
    unsigned long long liveId;
    NSString *topic;
    unsigned long long costTime;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_costTime;
+ (void)MMLiveReportFieldAdd_roomCount;
+ (void)MMLiveReportFieldAdd_allowReplay;
+ (void)MMLiveReportFieldAdd_connectCount;
+ (void)MMLiveReportFieldAdd_heartCount;
+ (void)MMLiveReportFieldAdd_commentCount;
+ (void)MMLiveReportFieldAdd_audienceCountMax;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_lastTime;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_scene;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long costTime; // @synthesize costTime;
@property(nonatomic) unsigned int roomCount; // @synthesize roomCount;
@property(nonatomic) unsigned int allowReplay; // @synthesize allowReplay;
@property(nonatomic) unsigned int connectCount; // @synthesize connectCount;
@property(nonatomic) unsigned int heartCount; // @synthesize heartCount;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount;
@property(nonatomic) unsigned int audienceCountMax; // @synthesize audienceCountMax;
@property(nonatomic) unsigned int audienceCount; // @synthesize audienceCount;
@property(nonatomic) unsigned int lastTime; // @synthesize lastTime;
@property(nonatomic) unsigned int roomRole; // @synthesize roomRole;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
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

