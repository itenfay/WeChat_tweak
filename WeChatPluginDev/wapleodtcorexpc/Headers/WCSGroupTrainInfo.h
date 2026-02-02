//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;

@interface WCSGroupTrainInfo : NSObject
{
    unsigned int _lastSearchTime;
    NSString *_gId;
    NSData *_info;
    NSMutableArray *_arrClicks;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_lastSearchTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)lastSearchTime;
+ (id)swift_info;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)info;
+ (id)swift_gId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)gId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrClicks; // @synthesize arrClicks=_arrClicks;
@property(nonatomic) unsigned int lastSearchTime; // @synthesize lastSearchTime=_lastSearchTime;
@property(retain, nonatomic) NSData *info; // @synthesize info=_info;
@property(retain, nonatomic) NSString *gId; // @synthesize gId=_gId;
- (unsigned int)getClickCountForRecentDays:(unsigned int)arg1 nowDayOffset:(int)arg2;
- (_Bool)addOneClick:(int)arg1;
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

