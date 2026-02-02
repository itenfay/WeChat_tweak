//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WALocalStorageDataInfo : NSObject
{
    unsigned int _keyAndDataLength;
    unsigned int _lastModifyTime;
    NSString *_key;
    NSString *_dataType;
    NSString *_data;
}

+ (void)__wcdb_column_constraint_9:(void *)arg1;
+ (id)swift_data;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)data;
+ (id)swift_dataType;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)dataType;
+ (id)swift_lastModifyTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)lastModifyTime;
+ (id)swift_keyAndDataLength;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)keyAndDataLength;
+ (id)swift_key;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)key;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *dataType; // @synthesize dataType=_dataType;
@property(nonatomic) unsigned int lastModifyTime; // @synthesize lastModifyTime=_lastModifyTime;
@property(nonatomic) unsigned int keyAndDataLength; // @synthesize keyAndDataLength=_keyAndDataLength;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;

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

