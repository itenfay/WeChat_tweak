//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderCourseInfo, NSString;

@interface WCFinderCourseInfo : NSObject
{
    _Bool _purchased;
    NSString *_courseIDKey;
    FinderCourseInfo *_courseInfo;
}

+ (id)finderCourseFromCourse:(id)arg1 purchased:(_Bool)arg2;
+ (void)__wcdb_index_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_purchased;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)purchased;
+ (id)swift_courseInfo;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)courseInfo;
+ (id)swift_courseIDKey;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)courseIDKey;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool purchased; // @synthesize purchased=_purchased;
@property(retain, nonatomic) FinderCourseInfo *courseInfo; // @synthesize courseInfo=_courseInfo;
@property(copy, nonatomic) NSString *courseIDKey; // @synthesize courseIDKey=_courseIDKey;
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

