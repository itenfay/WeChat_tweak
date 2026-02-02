//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KFContact
{
    _Bool _headImgUpdateFlag;
    unsigned int _kfType;
    unsigned int _updateTime;
    NSString *kfOpenId;
    NSString *_brand;
    NSString *_headImageUrl;
    NSString *_nickName;
}

+ (void)__wcdb_column_constraint_7:(void *)arg1;
+ (id)swift_headImgUpdateFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)headImgUpdateFlag;
+ (id)swift_updateTime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)updateTime;
+ (id)swift_nickName;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)nickName;
+ (id)swift_headImageUrl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)headImageUrl;
+ (id)swift_brand;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)brand;
+ (id)swift_kfType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)kfType;
+ (id)swift_kfOpenId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)kfOpenId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool headImgUpdateFlag; // @synthesize headImgUpdateFlag=_headImgUpdateFlag;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(nonatomic) unsigned int kfType; // @synthesize kfType=_kfType;
@property(retain, nonatomic) NSString *kfOpenId; // @synthesize kfOpenId;

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

