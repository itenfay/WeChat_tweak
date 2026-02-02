//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCCommonCacheObj
{
    unsigned int _lastUseTime;
    unsigned int _mediaType;
    NSString *_fileMd5;
    NSString *_filePath;
    NSString *_aggregateName;
}

+ (void)__wcdb_column_constraint_5:(void *)arg1;
+ (id)swift_aggregateName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)aggregateName;
+ (id)swift_mediaType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)mediaType;
+ (id)swift_lastUseTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)lastUseTime;
+ (id)swift_filePath;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)filePath;
+ (id)swift_fileMd5;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)fileMd5;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *aggregateName; // @synthesize aggregateName=_aggregateName;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int lastUseTime; // @synthesize lastUseTime=_lastUseTime;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileMd5; // @synthesize fileMd5=_fileMd5;
- (id)getAbsolutePath;

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

