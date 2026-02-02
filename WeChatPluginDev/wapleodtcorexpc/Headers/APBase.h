//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, PublicWifiCache, PublicWifiPageInfo;

@interface APBase
{
    NSString *ssid;
    NSString *mac;
    unsigned int opCode;
    PublicWifiCache *cache;
    unsigned int scene;
    NSString *qrCode;
    NSString *mpUrl;
    NSString *mid;
    NSString *checkUrl;
    NSString *sessionKey;
    NSString *password;
    unsigned int retcode;
    NSString *errMsg;
    int _state;
    int _actionCode;
    unsigned int _protocolType;
    NSString *_bannerText;
    NSString *_showUrl;
    double _expiredTime;
    NSString *_retMsg;
    PublicWifiPageInfo *_pageInfo;
}

+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (id)swift_retMsg;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)retMsg;
+ (id)swift_retcode;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)retcode;
+ (id)swift_protocolType;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)protocolType;
+ (id)swift_checkUrl;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)checkUrl;
+ (id)swift_mid;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)mid;
+ (id)swift_mpUrl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)mpUrl;
+ (id)swift_qrCode;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)qrCode;
+ (id)swift_expiredTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)expiredTime;
+ (id)swift_showUrl;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)showUrl;
+ (id)swift_bannerText;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)bannerText;
+ (id)swift_actionCode;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)actionCode;
+ (id)swift_opCode;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)opCode;
+ (id)swift_mac;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)mac;
+ (id)swift_ssid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)ssid;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) PublicWifiPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(copy, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) unsigned int protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(copy, nonatomic) NSString *showUrl; // @synthesize showUrl=_showUrl;
@property(copy, nonatomic) NSString *bannerText; // @synthesize bannerText=_bannerText;
@property(nonatomic) int actionCode; // @synthesize actionCode=_actionCode;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *checkUrl; // @synthesize checkUrl;
@property(copy, nonatomic) NSString *mid; // @synthesize mid;
@property(nonatomic) unsigned int opCode; // @synthesize opCode;
@property(copy, nonatomic) NSString *mpUrl; // @synthesize mpUrl;
@property(nonatomic) unsigned int retcode; // @synthesize retcode;
@property(copy, nonatomic) NSString *qrCode; // @synthesize qrCode;
@property(retain, nonatomic) NSString *mac; // @synthesize mac;
@property(retain, nonatomic) NSString *ssid; // @synthesize ssid;
@property(copy, nonatomic) NSString *password; // @synthesize password;
@property(copy, nonatomic) NSString *sessionKey; // @synthesize sessionKey;
@property(nonatomic) unsigned int scene; // @synthesize scene;
@property(nonatomic) __weak PublicWifiCache *cache; // @synthesize cache;
- (_Bool)canStartWithCurrSSID:(id)arg1;
- (void)cancel;
- (void)start;
@property(readonly, copy) NSString *description;
- (id)init;
- (void)dealloc;

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

