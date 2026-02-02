//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCMomentsMenuActionReportForwardInfo, WCMomentsMenuActionReportSnsInfo;

@interface WCMomentsMenuActionReportSession
{
    long long _scene;
    WCMomentsMenuActionReportSnsInfo *_snsInfo;
    long long _actionType;
    WCMomentsMenuActionReportForwardInfo *_forwardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCMomentsMenuActionReportForwardInfo *forwardInfo; // @synthesize forwardInfo=_forwardInfo;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) WCMomentsMenuActionReportSnsInfo *snsInfo; // @synthesize snsInfo=_snsInfo;
@property(nonatomic) long long scene; // @synthesize scene=_scene;
- (id)generateForwardInfoString;
- (id)generateSnsInfoString;
- (id)generateReportString;
- (void)report;

@end

