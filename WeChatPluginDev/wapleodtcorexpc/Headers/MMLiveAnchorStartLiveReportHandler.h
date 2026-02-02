//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveAnchorStartLiveReportHandler
{
    unsigned int scene;
    unsigned int rulePop;
    unsigned int ruleCheck;
    unsigned int customTopic;
    unsigned int cameraStatus;
    unsigned int horizontalStatus;
    unsigned int exitType;
    unsigned int errCode;
    unsigned int roomRole;
    unsigned int roomCount;
    unsigned int cameraSwitch;
    unsigned int micSwitch;
    unsigned int castSwitch;
    unsigned int hasClickedRuleConfirm;
    unsigned int hasRealNameProcess;
    NSString *roomId;
    NSString *topic;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_hasRealNameProcess;
+ (void)MMLiveReportFieldAdd_hasClickedRuleConfirm;
+ (void)MMLiveReportFieldAdd_castSwitch;
+ (void)MMLiveReportFieldAdd_micSwitch;
+ (void)MMLiveReportFieldAdd_cameraSwitch;
+ (void)MMLiveReportFieldAdd_roomCount;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_errCode;
+ (void)MMLiveReportFieldAdd_exitType;
+ (void)MMLiveReportFieldAdd_horizontalStatus;
+ (void)MMLiveReportFieldAdd_cameraStatus;
+ (void)MMLiveReportFieldAdd_customTopic;
+ (void)MMLiveReportFieldAdd_topic;
+ (void)MMLiveReportFieldAdd_ruleCheck;
+ (void)MMLiveReportFieldAdd_rulePop;
+ (void)MMLiveReportFieldAdd_roomId;
+ (void)MMLiveReportFieldAdd_scene;
- (void).cxx_destruct;
@property(nonatomic) unsigned int hasRealNameProcess; // @synthesize hasRealNameProcess;
@property(nonatomic) unsigned int hasClickedRuleConfirm; // @synthesize hasClickedRuleConfirm;
@property(nonatomic) unsigned int castSwitch; // @synthesize castSwitch;
@property(nonatomic) unsigned int micSwitch; // @synthesize micSwitch;
@property(nonatomic) unsigned int cameraSwitch; // @synthesize cameraSwitch;
@property(nonatomic) unsigned int roomCount; // @synthesize roomCount;
@property(nonatomic) unsigned int roomRole; // @synthesize roomRole;
@property(nonatomic) unsigned int errCode; // @synthesize errCode;
@property(nonatomic) unsigned int exitType; // @synthesize exitType;
@property(nonatomic) unsigned int horizontalStatus; // @synthesize horizontalStatus;
@property(nonatomic) unsigned int cameraStatus; // @synthesize cameraStatus;
@property(nonatomic) unsigned int customTopic; // @synthesize customTopic;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
@property(nonatomic) unsigned int ruleCheck; // @synthesize ruleCheck;
@property(nonatomic) unsigned int rulePop; // @synthesize rulePop;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
@property(nonatomic) unsigned int scene; // @synthesize scene;
- (void)reportActionWithReportTag:(unsigned int)arg1;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 verifySuccess:(_Bool)arg3;
- (void)onMMLiveStartFinishedWithLiveTask:(id)arg1 startExtraInfo:(id)arg2 startSuccess:(_Bool)arg3;
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

