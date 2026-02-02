//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveComplaintReportHandler
{
    unsigned int scene;
    unsigned int roomRole;
    unsigned int audienceCount;
    NSString *roomId;
    unsigned long long liveId;
    NSString *topic;
    unsigned long long liveUin;
    NSString *liveUserName;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_liveUserName;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_liveUin;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_scene;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *liveUserName; // @synthesize liveUserName;
@property(nonatomic) unsigned int audienceCount; // @synthesize audienceCount;
@property(nonatomic) unsigned int roomRole; // @synthesize roomRole;
@property(nonatomic) unsigned long long liveUin; // @synthesize liveUin;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(nonatomic) unsigned int scene; // @synthesize scene;
- (void)onReportEventTriggered:(id)arg1 controller:(id)arg2 view:(id)arg3 action:(SEL)arg4 target:(id)arg5;
- (id)init;
- (void)report;

@end

