//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBContactExt : NSObject
{
    unsigned int _type;
    unsigned int _chatStatus;
    unsigned int _ConIntRes2;
    unsigned int _ConIntRes3;
    NSString *_userName;
    NSString *_remark;
    NSString *_remarkShortPinYin;
    NSString *_remarkFullPinYin;
    NSString *_QQMBlog;
    NSString *_SMBlog;
    NSString *_chatRoomMember;
    NSString *_domainList;
    NSString *_extent;
    NSString *_ConStrRes3;
}

+ (void)__wcdb_column_constraint_39:(void *)arg1;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_column_constraint_36:(void *)arg1;
+ (void)__wcdb_column_constraint_35:(void *)arg1;
+ (void)__wcdb_column_constraint_34:(void *)arg1;
+ (id)swift_ConStrRes3;
+ (const void *)__wcdb_synthesize_33:(void *)arg1;
+ (const void *)ConStrRes3;
+ (id)swift_extent;
+ (const void *)__wcdb_synthesize_32:(void *)arg1;
+ (const void *)extent;
+ (id)swift_domainList;
+ (const void *)__wcdb_synthesize_31:(void *)arg1;
+ (const void *)domainList;
+ (id)swift_ConIntRes3;
+ (const void *)__wcdb_synthesize_30:(void *)arg1;
+ (const void *)ConIntRes3;
+ (id)swift_ConIntRes2;
+ (const void *)__wcdb_synthesize_29:(void *)arg1;
+ (const void *)ConIntRes2;
+ (id)swift_chatStatus;
+ (const void *)__wcdb_synthesize_28:(void *)arg1;
+ (const void *)chatStatus;
+ (id)swift_chatRoomMember;
+ (const void *)__wcdb_synthesize_27:(void *)arg1;
+ (const void *)chatRoomMember;
+ (id)swift_SMBlog;
+ (const void *)__wcdb_synthesize_26:(void *)arg1;
+ (const void *)SMBlog;
+ (id)swift_QQMBlog;
+ (const void *)__wcdb_synthesize_25:(void *)arg1;
+ (const void *)QQMBlog;
+ (id)swift_remarkFullPinYin;
+ (const void *)__wcdb_synthesize_24:(void *)arg1;
+ (const void *)remarkFullPinYin;
+ (id)swift_remarkShortPinYin;
+ (const void *)__wcdb_synthesize_23:(void *)arg1;
+ (const void *)remarkShortPinYin;
+ (id)swift_remark;
+ (const void *)__wcdb_synthesize_22:(void *)arg1;
+ (const void *)remark;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_21:(void *)arg1;
+ (const void *)type;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)userName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3=_ConStrRes3;
@property(nonatomic) unsigned int ConIntRes3; // @synthesize ConIntRes3=_ConIntRes3;
@property(nonatomic) unsigned int ConIntRes2; // @synthesize ConIntRes2=_ConIntRes2;
@property(retain, nonatomic) NSString *extent; // @synthesize extent=_extent;
@property(retain, nonatomic) NSString *domainList; // @synthesize domainList=_domainList;
@property(nonatomic) unsigned int chatStatus; // @synthesize chatStatus=_chatStatus;
@property(retain, nonatomic) NSString *chatRoomMember; // @synthesize chatRoomMember=_chatRoomMember;
@property(retain, nonatomic) NSString *SMBlog; // @synthesize SMBlog=_SMBlog;
@property(retain, nonatomic) NSString *QQMBlog; // @synthesize QQMBlog=_QQMBlog;
@property(retain, nonatomic) NSString *remarkFullPinYin; // @synthesize remarkFullPinYin=_remarkFullPinYin;
@property(retain, nonatomic) NSString *remarkShortPinYin; // @synthesize remarkShortPinYin=_remarkShortPinYin;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
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

