//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCOutRecentCallItem
{
    _Bool isAutoIncrement;
    unsigned int localID;
    unsigned int createTime;
    unsigned int startTime;
    unsigned int endTime;
    unsigned int statusCode;
    unsigned int _dialScene;
    unsigned int _countyrCodeType;
    unsigned int _callFlag;
    NSString *countryCode;
    NSString *phoneNum;
    long long lastInsertedRowID;
    NSString *nickName;
    NSString *phoneTag;
    NSString *_checkCountryCode;
    NSString *_inviteRespFullPhoneNum;
}

+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_statusCode;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)statusCode;
+ (id)swift_endTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)endTime;
+ (id)swift_startTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)startTime;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_phoneNum;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)phoneNum;
+ (id)swift_countryCode;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)countryCode;
+ (id)swift_localID;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localID;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int callFlag; // @synthesize callFlag=_callFlag;
@property(nonatomic) unsigned int countyrCodeType; // @synthesize countyrCodeType=_countyrCodeType;
@property(nonatomic) unsigned int dialScene; // @synthesize dialScene=_dialScene;
@property(retain, nonatomic) NSString *inviteRespFullPhoneNum; // @synthesize inviteRespFullPhoneNum=_inviteRespFullPhoneNum;
@property(retain, nonatomic) NSString *checkCountryCode; // @synthesize checkCountryCode=_checkCountryCode;
@property(retain, nonatomic) NSString *phoneTag; // @synthesize phoneTag;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement

@property(nonatomic) unsigned int statusCode; // @synthesize statusCode;
@property(nonatomic) unsigned int endTime; // @synthesize endTime;
@property(nonatomic) unsigned int startTime; // @synthesize startTime;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(nonatomic) unsigned int localID; // @synthesize localID;
@property(readonly, nonatomic) NSString *fullPhoneNumInLog;
@property(readonly, nonatomic) NSString *fullPhoneNum;
@property(readonly, nonatomic) NSString *statusWording;
- (void)CopyValueToCopy:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

