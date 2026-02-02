//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderFollowingInfo : NSObject
{
    NSString *_followingUsername;
    unsigned long long _followIndex;
    unsigned long long _oneTimeFlag;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_oneTimeFlag;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)oneTimeFlag;
+ (id)swift_followIndex;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)followIndex;
+ (id)swift_followingUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)followingUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long oneTimeFlag; // @synthesize oneTimeFlag=_oneTimeFlag;
@property(nonatomic) unsigned long long followIndex; // @synthesize followIndex=_followIndex;
@property(copy, nonatomic) NSString *followingUsername; // @synthesize followingUsername=_followingUsername;
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

