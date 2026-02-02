//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface GameChatRoomContact : NSObject
{
    unsigned int _updateTime;
    NSString *_userName;
    NSData *_pbData;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_pbData;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)pbData;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSData *pbData; // @synthesize pbData=_pbData;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
- (id)userData;
- (id)init;

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

