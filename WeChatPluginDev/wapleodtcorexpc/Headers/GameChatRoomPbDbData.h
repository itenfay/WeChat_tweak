//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WXPBGeneratedMessage;

@interface GameChatRoomPbDbData : NSObject
{
    NSString *_keyWithCategroy;
    NSData *_pbData;
    NSString *_additionalInfo;
    NSString *_pbClassName;
    double _createTime;
    double _expireDuration;
    WXPBGeneratedMessage *_pbMsg;
    NSString *_category;
}

+ (id)dbKeyFromCategory:(id)arg1 key:(id)arg2;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (id)swift_additionalInfo;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)additionalInfo;
+ (id)swift_expireDuration;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)expireDuration;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_pbClassName;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)pbClassName;
+ (id)swift_pbData;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)pbData;
+ (id)swift_category;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)category;
+ (id)swift_keyWithCategroy;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)keyWithCategroy;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) WXPBGeneratedMessage *pbMsg; // @synthesize pbMsg=_pbMsg;
@property(nonatomic) double expireDuration; // @synthesize expireDuration=_expireDuration;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *pbClassName; // @synthesize pbClassName=_pbClassName;
@property(retain, nonatomic) NSString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(retain, nonatomic) NSData *pbData; // @synthesize pbData=_pbData;
@property(retain, nonatomic) NSString *keyWithCategroy; // @synthesize keyWithCategroy=_keyWithCategroy;
- (_Bool)isOfPbClass:(Class)arg1;
- (id)initWithCategory:(id)arg1 key:(id)arg2 pbData:(id)arg3;

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

