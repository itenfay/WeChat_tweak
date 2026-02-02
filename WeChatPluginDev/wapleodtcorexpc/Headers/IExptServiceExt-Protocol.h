//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMExptItem, NSArray, NSString;

@protocol IExptServiceExt

@optional
- (void)onNewEdgeComputingSqlConfigDelete:(unsigned int)arg1;
- (void)onNewEdgeComputingSqlConfigUpdate:(unsigned int)arg1 andExptItem:(MMExptItem *)arg2;
- (void)onNewEdgeComputingScriptConfigDelete:(unsigned int)arg1;
- (void)onNewEdgeComputingScriptConfigUpdate:(unsigned int)arg1 andExptItem:(MMExptItem *)arg2;
- (void)onSessionEdgeComputingSqlConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3;
- (void)onSessionEdgeComputingScriptConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3;
- (void)onSessionViewBlackListConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3;
- (void)onSessionPageConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3 needReport:(_Bool)arg4;
- (void)onPageFlowConfigChange:(NSArray *)arg1 isDel:(_Bool)arg2;
- (void)onSessionUBAConfigChange:(NSString *)arg1 isDel:(_Bool)arg2;
- (void)onSessionConfigChange:(NSString *)arg1 isDel:(_Bool)arg2 needReport:(_Bool)arg3;
- (void)updateWCLabByXExpt:(NSArray *)arg1 deleteExptIds:(NSArray *)arg2 andExptFlag:(unsigned int)arg3 andAppIdList:(NSArray *)arg4;
- (void)onExptItemListChange;
@end

