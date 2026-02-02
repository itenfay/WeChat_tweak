//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMMessageAssetIDItem : NSObject
{
    long long _messageSvrID;
    NSString *_chatName;
    NSString *_assetID;
}

+ (void)__wcdb_column_constraint_3:(void *)arg1;
+ (id)swift_assetID;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)assetID;
+ (id)swift_chatName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)chatName;
+ (id)swift_messageSvrID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)messageSvrID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) long long messageSvrID; // @synthesize messageSvrID=_messageSvrID;

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

