//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveStickerRecord : NSObject
{
    NSString *_instanceId;
    unsigned long long _stickerType;
    unsigned long long _schemaVersion;
    NSString *_attributesJson;
    NSString *_imageFilename;
    double _lastUpdated;
    unsigned long long _liveId;
}

+ (id)stickerItemFromRecord:(id)arg1;
+ (id)stickerRecordFromItem:(id)arg1 liveId:(unsigned long long)arg2;
+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_liveId;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)liveId;
+ (id)swift_lastUpdated;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)lastUpdated;
+ (id)swift_imageFilename;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)imageFilename;
+ (id)swift_attributesJson;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)attributesJson;
+ (id)swift_schemaVersion;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)schemaVersion;
+ (id)swift_stickerType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)stickerType;
+ (id)swift_instanceId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)instanceId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long liveId; // @synthesize liveId=_liveId;
@property(nonatomic) double lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(retain, nonatomic) NSString *imageFilename; // @synthesize imageFilename=_imageFilename;
@property(retain, nonatomic) NSString *attributesJson; // @synthesize attributesJson=_attributesJson;
@property(nonatomic) unsigned long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(retain, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;

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

