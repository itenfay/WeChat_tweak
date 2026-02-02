//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TextStateReadInfo : NSObject
{
    unsigned int _expiredTime;
    NSString *_textStateId;
    NSString *_topicId;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_topicId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)topicId;
+ (id)swift_expiredTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)expiredTime;
+ (id)swift_textStateId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)textStateId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(nonatomic) unsigned int expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSString *textStateId; // @synthesize textStateId=_textStateId;

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

