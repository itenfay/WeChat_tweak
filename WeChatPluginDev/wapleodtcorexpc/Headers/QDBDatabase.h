//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableSet, NSString;

@interface QDBDatabase : NSObject
{
    void *_db;
    NSString *_databasePath;
    _Bool _isExecutingStatement;
    _Bool _logsErrors;
    NSMutableSet *_openResultSets;
    NSDateFormatter *_dateFormat;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSDateFormatter *dateFormat; // @synthesize dateFormat=_dateFormat;
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 valist:(char *)arg3;
- (_Bool)executeUpdate:(id)arg1;
- (id)executeQuery:(id)arg1 valist:(char *)arg2;
- (id)executeQuery:(id)arg1;
- (void)closeOpenResultSets;
- (void)resultSetDidClose:(id)arg1;
- (_Bool)close;
- (_Bool)open;
- (id)lastError;
- (id)lastErrorMessage;
- (int)lastErrorCode;
- (id)errorWithMessage:(id)arg1;
- (void)warnInUse;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (_Bool)hasDateFormatter;
- (_Bool)databaseExists;
- (void *)sqliteHandle;
- (const char *)sqlitePath;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

