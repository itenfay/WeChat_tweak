//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface EdgeComputingConfigBreaker
{
    NSMutableDictionary *scriptConfigRecorder;
    NSMutableDictionary *sqlConfigRecorder;
    NSMutableDictionary *scriptConfigRecorderBackup;
    NSMutableDictionary *sqlConfigRecorderBackup;
}

- (void).cxx_destruct;
- (void)saveRecorder;
- (void)initRecorder;
- (void)removeSqlConfig:(id)arg1;
- (void)recordSqlConfig:(id)arg1;
- (_Bool)isErrorScriptConfig:(id)arg1;
- (void)removeScriptConfig:(id)arg1;
- (void)recordScriptConfig:(id)arg1;
- (id)init;

@end

