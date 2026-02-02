//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EdgeComputingConfigParser, NSMutableDictionary;

@interface EdgeComputingConfigService
{
    NSMutableDictionary *scriptConfigModels;
    NSMutableDictionary *sqlConfigModels;
    EdgeComputingConfigParser *configParser;
}

- (void).cxx_destruct;
- (void)tryToDownloadScript;
- (void)onSessionEdgeComputingSqlConfigChange:(id)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3;
- (void)onSessionEdgeComputingScriptConfigChange:(id)arg1 isDel:(_Bool)arg2 andSessionPageId:(unsigned int)arg3;
- (void)onNewEdgeComputingSqlConfigDelete:(unsigned int)arg1;
- (void)onNewEdgeComputingSqlConfigUpdate:(unsigned int)arg1 andExptItem:(id)arg2;
- (void)onNewEdgeComputingScriptConfigDelete:(unsigned int)arg1;
- (void)onNewEdgeComputingScriptConfigUpdate:(unsigned int)arg1 andExptItem:(id)arg2;
- (void)removeSqlConfigModel:(id)arg1;
- (id)getSqlConfigModels;
- (id)getScriptConfigModels;
- (void)initConfig;
- (void)onClearData;
- (void)onInit;

@end

