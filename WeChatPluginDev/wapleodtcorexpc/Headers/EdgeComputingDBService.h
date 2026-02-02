//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface EdgeComputingDBService
{
    NSMutableDictionary *_dBMgrCache;
}

- (void).cxx_destruct;
- (void)clear;
- (_Bool)createTable:(id)arg1 withFields:(id)arg2 withDBManager:(id)arg3;
- (_Bool)checkTableExist:(id)arg1 withDB:(id)arg2;
- (_Bool)saveDatasToDB:(id)arg1 withTable:(id)arg2 withFields:(id)arg3 withDatas:(id)arg4;
- (id)queryDataBySQL:(id)arg1 withSQL:(id)arg2;
- (id)getOrCreateDBMgr:(id)arg1;
- (id)init;

@end

