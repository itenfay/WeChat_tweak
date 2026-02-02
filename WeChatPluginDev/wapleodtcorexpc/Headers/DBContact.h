//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface DBContact : NSObject
{
    unsigned int _version;
    unsigned int _uin;
    unsigned int _sex;
    unsigned int _type;
    unsigned int _LastChatTime;
    NSString *_userName;
    NSString *_nickName;
    NSString *_email;
    NSString *_mobile;
    NSString *_fullPinYin;
    NSData *_extent;
    NSString *_image;
    NSString *_draft;
}

+ (void)__wcdb_column_constraint_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (void)__wcdb_column_constraint_17:(void *)arg1;
+ (void)__wcdb_column_constraint_16:(void *)arg1;
+ (void)__wcdb_column_constraint_15:(void *)arg1;
+ (void)__wcdb_column_constraint_14:(void *)arg1;
+ (void)__wcdb_column_constraint_13:(void *)arg1;
+ (id)swift_draft;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)draft;
+ (id)swift_LastChatTime;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)LastChatTime;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)type;
+ (id)swift_image;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)image;
+ (id)swift_extent;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)extent;
+ (id)swift_fullPinYin;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)fullPinYin;
+ (id)swift_sex;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)sex;
+ (id)swift_mobile;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)mobile;
+ (id)swift_email;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)email;
+ (id)swift_uin;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)uin;
+ (id)swift_nickName;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)nickName;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)userName;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)version;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int LastChatTime; // @synthesize LastChatTime=_LastChatTime;
@property(retain, nonatomic) NSString *draft; // @synthesize draft=_draft;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *image; // @synthesize image=_image;
@property(retain, nonatomic) NSData *extent; // @synthesize extent=_extent;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin=_fullPinYin;
@property(nonatomic) unsigned int sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) unsigned int uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int version; // @synthesize version=_version;

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

