//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderSearchRecord : NSObject
{
    unsigned int _searchTime;
    NSString *_searchContent;
}

+ (void)__wcdb_index_3:(void *)arg1;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_searchTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)searchTime;
+ (id)swift_searchContent;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)searchContent;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int searchTime; // @synthesize searchTime=_searchTime;
@property(copy, nonatomic) NSString *searchContent; // @synthesize searchContent=_searchContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

