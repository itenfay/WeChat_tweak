//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface WCPayLedgerRecordDatabase : NSObject
{
    MISSING_TYPE *database;
    MISSING_TYPE *table;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)removeAllRecords;
- (void)deleteWithTalker:(id)arg1;
- (void)deleteWithTalker:(id)arg1 localId:(long long)arg2;
- (void)deleteWithId:(id)arg1;
- (id)init;

@end

