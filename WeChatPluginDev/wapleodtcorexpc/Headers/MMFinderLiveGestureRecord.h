//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveGestureInfo, NSString;

@interface MMFinderLiveGestureRecord : NSObject
{
    unsigned int _gestureId;
    unsigned int _version;
    unsigned int _schemaVersion;
    MMFinderLiveGestureInfo *_gestureInfo;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_schemaVersion;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)schemaVersion;
+ (id)swift_gestureInfo;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)gestureInfo;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)version;
+ (id)swift_gestureId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)gestureId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) MMFinderLiveGestureInfo *gestureInfo; // @synthesize gestureInfo=_gestureInfo;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int gestureId; // @synthesize gestureId=_gestureId;

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

