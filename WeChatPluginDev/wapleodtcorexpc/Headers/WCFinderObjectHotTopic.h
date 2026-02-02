//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderObjectHotTopic : NSObject
{
    _Bool _jumpFlag;
    unsigned int _topicType;
    unsigned long long _topicId;
    NSString *_topicName;
    NSData *_topicBuffer;
}

+ (id)newWithPBTopic:(id)arg1;
+ (id)swift_topicBuffer;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)topicBuffer;
+ (id)swift_jumpFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)jumpFlag;
+ (id)swift_topicType;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)topicType;
+ (id)swift_topicName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)topicName;
+ (id)swift_topicId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)topicId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_topicBuffer;
+ (void)PBArrayAdd_jumpFlag;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_topicName;
+ (void)PBArrayAdd_topicId;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *topicBuffer; // @synthesize topicBuffer=_topicBuffer;
@property(nonatomic) _Bool jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(nonatomic) unsigned int topicType; // @synthesize topicType=_topicType;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(nonatomic) unsigned long long topicId; // @synthesize topicId=_topicId;
@property(readonly, copy) NSString *description;
- (id)convertToPBTopic;
- (id)getPBPropertyTable;

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

