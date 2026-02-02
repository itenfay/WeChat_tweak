//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderCommentMentionContact : NSObject
{
    NSString *_username;
    unsigned long long _mentionedTime;
}

+ (void)__wcdb_index_3:(void *)arg1;
+ (void)__wcdb_column_constraint_2:(void *)arg1;
+ (id)swift_mentionedTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)mentionedTime;
+ (id)swift_username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)username;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long mentionedTime; // @synthesize mentionedTime=_mentionedTime;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

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

