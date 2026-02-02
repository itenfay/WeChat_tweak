//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WCCardOfflineCodeInfoData
{
    unsigned int status;
    NSString *cardId;
    NSString *qrCodeId;
    NSData *code;
}

+ (id)swift_status;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)status;
+ (id)swift_code;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)code;
+ (id)swift_qrCodeId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)qrCodeId;
+ (id)swift_cardId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)cardId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(retain, nonatomic) NSData *code; // @synthesize code;
@property(retain, nonatomic) NSString *qrCodeId; // @synthesize qrCodeId;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;

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

