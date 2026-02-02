//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandNotificationDBMsg : NSObject
{
    _Bool isAutoIncrement;
    _Bool _bExposedInMainSession;
    _Bool _shouldShowPriorityNotification;
    _Bool _isClickPriorityNotificationInTL;
    unsigned int _version;
    unsigned int _msgId;
    unsigned int _msgLocalId;
    unsigned int _createTime;
    unsigned int _status;
    unsigned int _type;
    unsigned int _msgClusterType;
    unsigned int _msgBizType;
    unsigned int _exposeCountInMainSession;
    unsigned int _exposeTotalTimeInMainSession;
    long long lastInsertedRowID;
    long long _msgServerId;
    NSString *_message;
    NSString *_msgIdentify;
    NSString *_userName;
    NSString *_msgSource;
}

+ (void)__wcdb_index_24:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_index_21:(void *)arg1;
+ (void)__wcdb_index_20:(void *)arg1;
+ (void)__wcdb_index_19:(void *)arg1;
+ (void)__wcdb_column_constraint_18:(void *)arg1;
+ (id)swift_isClickPriorityNotificationInTL;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)isClickPriorityNotificationInTL;
+ (id)swift_shouldShowPriorityNotification;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)shouldShowPriorityNotification;
+ (id)swift_exposeTotalTimeInMainSession;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)exposeTotalTimeInMainSession;
+ (id)swift_exposeCountInMainSession;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)exposeCountInMainSession;
+ (id)swift_bExposedInMainSession;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)bExposedInMainSession;
+ (id)swift_msgBizType;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)msgBizType;
+ (id)swift_msgSource;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)msgSource;
+ (id)swift_userName;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)userName;
+ (id)swift_msgIdentify;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)msgIdentify;
+ (id)swift_msgClusterType;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)msgClusterType;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)type;
+ (id)swift_status;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)status;
+ (id)swift_message;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)message;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_msgServerId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)msgServerId;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_msgId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)msgId;
+ (id)swift_version;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)version;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool isClickPriorityNotificationInTL; // @synthesize isClickPriorityNotificationInTL=_isClickPriorityNotificationInTL;
@property(nonatomic) _Bool shouldShowPriorityNotification; // @synthesize shouldShowPriorityNotification=_shouldShowPriorityNotification;
@property(nonatomic) unsigned int exposeTotalTimeInMainSession; // @synthesize exposeTotalTimeInMainSession=_exposeTotalTimeInMainSession;
@property(nonatomic) unsigned int exposeCountInMainSession; // @synthesize exposeCountInMainSession=_exposeCountInMainSession;
@property(nonatomic) _Bool bExposedInMainSession; // @synthesize bExposedInMainSession=_bExposedInMainSession;
@property(nonatomic) unsigned int msgBizType; // @synthesize msgBizType=_msgBizType;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource=_msgSource;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *msgIdentify; // @synthesize msgIdentify=_msgIdentify;
@property(nonatomic) unsigned int msgClusterType; // @synthesize msgClusterType=_msgClusterType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId=_msgServerId;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(nonatomic) unsigned int msgId; // @synthesize msgId=_msgId;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N,VlastInsertedRowID

@property(nonatomic) _Bool isAutoIncrement; // @synthesize isAutoIncrement;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,N,VisAutoIncrement


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

