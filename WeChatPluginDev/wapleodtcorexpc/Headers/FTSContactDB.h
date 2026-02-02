//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSDB;

@interface FTSContactDB : NSObject
{
    FTSDB *_database;
}

- (void).cxx_destruct;
- (id)searchContact:(id)arg1 contactType:(int)arg2 withHelper:(id)arg3 andCancelBlock:(CDUnknownBlockType)arg4;
- (_Bool)deleteIndexForUsername:(id)arg1 indexRecord:(id)arg2;
- (_Bool)deleteIndexForContacts:(id)arg1 indexRecord:(id)arg2;
- (_Bool)insertOrUpdateIndexForContacts:(id)arg1 updateCount:(unsigned int *)arg2 indexRecord:(id)arg3;
- (unsigned int)getIndexCount;
- (_Bool)existIndex;
- (_Bool)existValidIndexOfContact:(id)arg1;
- (_Bool)dropAllIndex;
- (_Bool)initDB:(id)arg1;

@end

