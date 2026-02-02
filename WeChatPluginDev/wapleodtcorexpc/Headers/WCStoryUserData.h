//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCStoryUserData : NSObject
{
    unsigned int _postCount;
    unsigned int _lastPostTime;
    NSString *_userName;
}

+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (id)swift_lastPostTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)lastPostTime;
+ (id)swift_postCount;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)postCount;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int lastPostTime; // @synthesize lastPostTime=_lastPostTime;
@property(nonatomic) unsigned int postCount; // @synthesize postCount=_postCount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N

@property(nonatomic) long long lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@property(readonly) Class superclass;

@end

