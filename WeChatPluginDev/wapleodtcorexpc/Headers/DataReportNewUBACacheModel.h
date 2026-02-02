//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DataReportNewUBACacheModel : NSObject
{
    unsigned long long _cacheTime;
    NSString *_reportStr;
}

+ (id)swift_reportStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)reportStr;
+ (id)swift_cacheTime;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)cacheTime;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
+ (void)initialize;
+ (void)PBArrayAdd_reportStr;
+ (void)PBArrayAdd_cacheTime;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reportStr; // @synthesize reportStr=_reportStr;
@property(nonatomic) unsigned long long cacheTime; // @synthesize cacheTime=_cacheTime;
- (id)toString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTime:(unsigned long long)arg1 withStr:(id)arg2;
- (id)getPBPropertyTable;

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

