//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMLiveUserActionReportHandler
{
    unsigned int liveRole;
    unsigned int roomRole;
    unsigned int action;
    unsigned int actionResult;
    unsigned int audienceCount;
    NSString *roomId;
    unsigned long long liveId;
    unsigned long long audienceUin;
    unsigned long long actionTS;
    NSString *audienceUserName;
    NSString *anchorusername;
}

+ (void)initialize;
+ (void)MMLiveReportFieldAdd_audienceCount;
+ (void)MMLiveReportFieldAdd_anchorusername;
+ (void)MMLiveReportFieldAdd_audienceUserName;
+ (void)MMLiveReportFieldAdd_actionTS;
+ (void)MMLiveReportFieldAdd_actionResult;
+ (void)MMLiveReportFieldAdd_action;
+ (void)MMLiveReportFieldAdd_roomRole;
+ (void)MMLiveReportFieldAdd_liveRole;
+ (void)MMLiveReportFieldAdd_audienceUin;
+ (void)MMLiveReportFieldAdd_liveId;
+ (void)MMLiveReportFieldAdd_roomId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int audienceCount; // @synthesize audienceCount;
@property(retain, nonatomic) NSString *anchorusername; // @synthesize anchorusername;
@property(retain, nonatomic) NSString *audienceUserName; // @synthesize audienceUserName;
@property(nonatomic) unsigned long long actionTS; // @synthesize actionTS;
@property(nonatomic) unsigned int actionResult; // @synthesize actionResult;
@property(nonatomic) unsigned int action; // @synthesize action;
@property(nonatomic) unsigned int roomRole; // @synthesize roomRole;
@property(nonatomic) unsigned int liveRole; // @synthesize liveRole;
@property(nonatomic) unsigned long long audienceUin; // @synthesize audienceUin;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId;
- (void)doReport;
- (void)reportAction:(unsigned int)arg1 result:(unsigned int)arg2;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onUIOrientationChanged:(id)arg1;
- (void)onActionSheetClicked:(id)arg1 controller:(id)arg2 button:(id)arg3 buttonTitle:(id)arg4;
- (void)onReportEventTriggered:(id)arg1 controller:(id)arg2 view:(id)arg3 action:(SEL)arg4 target:(id)arg5;
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

