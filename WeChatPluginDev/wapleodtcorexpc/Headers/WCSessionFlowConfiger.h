//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCSessionFlowConfigModel, WCSessionPageConfigModel, WCSessionUBAConfigModel;

@interface WCSessionFlowConfiger : NSObject
{
    _Bool _isNeedReportSingle;
    _Bool _isNeedCollectSessionUBA;
    WCSessionFlowConfigModel *_sessionFlowConfigModel;
    WCSessionPageConfigModel *_sessionPageConfigModel;
    WCSessionUBAConfigModel *_sessionUBAConfigModel;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isNeedCollectSessionUBA; // @synthesize isNeedCollectSessionUBA=_isNeedCollectSessionUBA;
@property(nonatomic) _Bool isNeedReportSingle; // @synthesize isNeedReportSingle=_isNeedReportSingle;
@property(retain, nonatomic) WCSessionUBAConfigModel *sessionUBAConfigModel; // @synthesize sessionUBAConfigModel=_sessionUBAConfigModel;
@property(retain, nonatomic) WCSessionPageConfigModel *sessionPageConfigModel; // @synthesize sessionPageConfigModel=_sessionPageConfigModel;
@property(retain, nonatomic) WCSessionFlowConfigModel *sessionFlowConfigModel; // @synthesize sessionFlowConfigModel=_sessionFlowConfigModel;
- (id)getMMKV;
- (void)onSessionUBAConfigChange:(id)arg1 isDel:(_Bool)arg2;
- (void)onSessionPageConfigChange:(id)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3 needReport:(_Bool)arg4;
- (void)realHandleSessionConfigChange:(id)arg1 isDel:(_Bool)arg2 needReport:(_Bool)arg3 isLocal:(_Bool)arg4;
- (void)onSessionConfigChange:(id)arg1 isDel:(_Bool)arg2 needReport:(_Bool)arg3;
- (_Bool)isSessionControlMonitorUIcontrol;
- (_Bool)isSessionControlMonitorGesture;
- (_Bool)isSessionUBAMonitorSwitch;
- (_Bool)isSessionMonitorSwitch;
- (_Bool)isMonitorSessionFlow;
- (_Bool)isNeedReportSingleSwitch;
- (_Bool)isFilterPage:(id)arg1;
- (_Bool)isMainTabPage:(id)arg1;
- (_Bool)isBlackListPage:(id)arg1;
- (id)getMonitorViewOperation:(id)arg1 pageName:(id)arg2 viewID:(id)arg3;
- (id)getMonitorViewOperation:(id)arg1 pageName:(id)arg2;
- (id)getSessionUBAUnitConfigModel:(id)arg1;
- (id)getPagePathConfigModels:(id)arg1;
- (id)getPagePathConfigModel:(id)arg1;
- (id)getSessionFlowSidByPageName:(id)arg1 prePage:(id)arg2 sessionParamExpects:(id)arg3;
- (id)getSessionFlowConfigBySid:(id)arg1;
- (id)getSessionFlowConfigByPageName:(id)arg1 prePage:(id)arg2 sessionParamExpects:(id)arg3;
- (id)getSessionFlowConfigsByPageName:(id)arg1 prePage:(id)arg2;
- (void)initSessionUBA;
- (void)initSessionPageConfig;
- (void)initSessionFlowConfig;
- (void)onClearData;
- (void)onInit;

@end

