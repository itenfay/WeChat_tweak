//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class DBContactBrand, DBContactChatRoom, DBContactEncryptSecret, DBContactHeadImage, DBContactLocal, DBContactOpenIM, DBContactOther, DBContactProfile, DBContactRemark, DBContactSocial, NSString;

@interface DBContactTable : NSObject
{
    unsigned int _type;
    unsigned int _certificationFlag;
    unsigned int _imgStatus;
    unsigned int _extFlag;
    NSString *_userName;
    unsigned long long _typeExt;
    NSString *_encodeUserName;
    DBContactLocal *_dbContactLocal;
    DBContactOther *_dbContactOther;
    DBContactRemark *_dbContactRemark;
    DBContactHeadImage *_dbContactHeadImage;
    DBContactProfile *_dbContactProfile;
    DBContactSocial *_dbContactSocial;
    DBContactChatRoom *_dbContactChatRoom;
    DBContactBrand *_dbContactBrand;
    NSString *_openIMAppid;
    DBContactOpenIM *_dbContactOpenIM;
    DBContactEncryptSecret *_dbContactEncryptSecret;
}

+ (void)__wcdb_column_constraint_23:(void *)arg1;
+ (void)__wcdb_column_constraint_22:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (void)__wcdb_column_constraint_20:(void *)arg1;
+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (id)swift_dbContactEncryptSecret;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)dbContactEncryptSecret;
+ (id)swift_dbContactOpenIM;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)dbContactOpenIM;
+ (id)swift_openIMAppid;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)openIMAppid;
+ (id)swift_extFlag;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)extFlag;
+ (id)swift_dbContactBrand;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)dbContactBrand;
+ (id)swift_dbContactChatRoom;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)dbContactChatRoom;
+ (id)swift_dbContactSocial;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)dbContactSocial;
+ (id)swift_dbContactProfile;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)dbContactProfile;
+ (id)swift_dbContactHeadImage;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)dbContactHeadImage;
+ (id)swift_dbContactRemark;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)dbContactRemark;
+ (id)swift_dbContactOther;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)dbContactOther;
+ (id)swift_dbContactLocal;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)dbContactLocal;
+ (id)swift_encodeUserName;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)encodeUserName;
+ (id)swift_imgStatus;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)imgStatus;
+ (id)swift_certificationFlag;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)certificationFlag;
+ (id)swift_typeExt;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)typeExt;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)type;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) DBContactEncryptSecret *dbContactEncryptSecret; // @synthesize dbContactEncryptSecret=_dbContactEncryptSecret;
@property(retain, nonatomic) DBContactOpenIM *dbContactOpenIM; // @synthesize dbContactOpenIM=_dbContactOpenIM;
@property(retain, nonatomic) NSString *openIMAppid; // @synthesize openIMAppid=_openIMAppid;
@property(nonatomic) unsigned int extFlag; // @synthesize extFlag=_extFlag;
@property(retain, nonatomic) DBContactBrand *dbContactBrand; // @synthesize dbContactBrand=_dbContactBrand;
@property(retain, nonatomic) DBContactChatRoom *dbContactChatRoom; // @synthesize dbContactChatRoom=_dbContactChatRoom;
@property(retain, nonatomic) DBContactSocial *dbContactSocial; // @synthesize dbContactSocial=_dbContactSocial;
@property(retain, nonatomic) DBContactProfile *dbContactProfile; // @synthesize dbContactProfile=_dbContactProfile;
@property(retain, nonatomic) DBContactHeadImage *dbContactHeadImage; // @synthesize dbContactHeadImage=_dbContactHeadImage;
@property(retain, nonatomic) DBContactRemark *dbContactRemark; // @synthesize dbContactRemark=_dbContactRemark;
@property(retain, nonatomic) DBContactOther *dbContactOther; // @synthesize dbContactOther=_dbContactOther;
@property(retain, nonatomic) DBContactLocal *dbContactLocal; // @synthesize dbContactLocal=_dbContactLocal;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus=_imgStatus;
@property(retain, nonatomic) NSString *encodeUserName; // @synthesize encodeUserName=_encodeUserName;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag=_certificationFlag;
@property(nonatomic) unsigned long long typeExt; // @synthesize typeExt=_typeExt;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

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

