//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, QDBDatabase, QDBStatement;

@interface QDBResultSet : NSObject
{
    QDBDatabase *_parentDB;
    QDBStatement *_statement;
    NSString *_query;
    NSMutableDictionary *_columnNameToIndexMap;
}

+ (id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2;
- (void).cxx_destruct;
@property(retain) QDBStatement *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
- (id)dataForColumnIndex:(int)arg1;
- (id)dataForColumn:(id)arg1;
- (id)stringForColumnIndex:(int)arg1;
- (id)stringForColumn:(id)arg1;
- (int)intForColumnIndex:(int)arg1;
- (int)intForColumn:(id)arg1;
- (int)columnIndexForName:(id)arg1;
@property(readonly) NSMutableDictionary *columnNameToIndexMap;
- (_Bool)nextWithError:(id *)arg1;
- (_Bool)next;
- (int)columnCount;
- (void)setParentDB:(id)arg1;
- (void)close;
- (void)dealloc;

@end

