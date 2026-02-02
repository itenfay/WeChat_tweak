//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveAnchorLiveMicReportHandler
{
    unsigned int waitCount;
    unsigned int allowConnect;
    unsigned int actionCode;
    unsigned int linkCount;
    NSString *roomId;
    unsigned long long liveId;
    NSString *audienceUin;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_linkCount;
+ (void)MMLiveReportFieldAdd_actionCode;
+ (void)MMLiveReportFieldAdd_audienceUin;
+ (void)MMLiveReportFieldAdd_allowConnect;
+ (void)MMLiveReportFieldAdd_waitCount;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_roomId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int linkCount; // @synthesize linkCount;
@property(nonatomic) unsigned int actionCode; // @synthesize actionCode;
@property(retain, nonatomic) NSString *audienceUin; // @synthesize audienceUin;
@property(nonatomic) unsigned int allowConnect; // @synthesize allowConnect;
@property(nonatomic) unsigned int waitCount; // @synthesize waitCount;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
- (id)init;
- (void)report;

@end

