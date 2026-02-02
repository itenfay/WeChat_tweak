//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveTipsBarUserActionReportHandler
{
    unsigned int livesCnt;
    unsigned int action;
    NSString *chatName;
    NSString *actionToLiveId;
    unsigned long long actionTS;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_actionTS;
+ (void)MMLiveReportFieldAdd_action;
+ (void)MMLiveReportFieldAdd_actionToLiveId;
+ (void)MMLiveReportFieldAdd_livesCnt;
+ (void)MMLiveReportFieldAdd_chatName;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionTS; // @synthesize actionTS;
@property(nonatomic) unsigned int action; // @synthesize action;
@property(retain, nonatomic) NSString *actionToLiveId; // @synthesize actionToLiveId;
@property(nonatomic) unsigned int livesCnt; // @synthesize livesCnt;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
- (void)loadLivesCnt:(id)arg1;
- (void)reportWithActionScene:(unsigned int)arg1 liveInfo:(id)arg2;
- (void)reportWithActionScene:(unsigned int)arg1 chatName:(id)arg2;
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

