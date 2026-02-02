//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary;

@interface EdgeComputingRunRecord
{
    NSMutableDictionary *runRecords;
}

- (void).cxx_destruct;
- (unsigned long long)getLastRecord:(id)arg1;
- (void)removeRecord:(id)arg1;
- (void)addRecord:(id)arg1 withTime:(unsigned long long)arg2;
- (void)saveRecord;
- (void)initRecord;
- (id)init;

@end

