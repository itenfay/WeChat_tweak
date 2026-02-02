//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DBFavoritesItem : NSObject
{
    _Bool isAutoIncrement;
    unsigned int _localId;
    unsigned int _favId;
    unsigned int _type;
    unsigned int _time;
    unsigned int _updateSeq;
    unsigned int _localUpdateSeq;
    unsigned int _sourceType;
    unsigned int _localStatus;
    unsigned int _webCacheStatus;
    unsigned int _usedTimes;
    unsigned int _IntRes2;
    unsigned int _IntRes3;
    long long lastInsertedRowID;
    NSString *_fromUser;
    NSString *_toUser;
    NSString *_realChatName;
    NSString *_sourceId;
    NSString *_xml;
    long long _dataTotalSize;
    NSString *_StrRes1;
    NSString *_StrRes2;
    NSString *_StrRes3;
}

+ (void)__wcdb_column_constraint_48:(void *)arg1;
+ (void)__wcdb_column_constraint_47:(void *)arg1;
+ (void)__wcdb_column_constraint_46:(void *)arg1;
+ (void)__wcdb_column_constraint_45:(void *)arg1;
+ (void)__wcdb_column_constraint_44:(void *)arg1;
+ (void)__wcdb_column_constraint_43:(void *)arg1;
+ (void)__wcdb_column_constraint_42:(void *)arg1;
+ (void)__wcdb_column_constraint_41:(void *)arg1;
+ (void)__wcdb_column_constraint_40:(void *)arg1;
+ (void)__wcdb_column_constraint_39:(void *)arg1;
+ (void)__wcdb_column_constraint_38:(void *)arg1;
+ (void)__wcdb_column_constraint_37:(void *)arg1;
+ (void)__wcdb_index_36:(void *)arg1;
+ (void)__wcdb_index_35:(void *)arg1;
+ (void)__wcdb_index_34:(void *)arg1;
+ (void)__wcdb_index_33:(void *)arg1;
+ (void)__wcdb_index_32:(void *)arg1;
+ (void)__wcdb_index_31:(void *)arg1;
+ (void)__wcdb_index_30:(void *)arg1;
+ (void)__wcdb_index_29:(void *)arg1;
+ (void)__wcdb_index_28:(void *)arg1;
+ (void)__wcdb_index_27:(void *)arg1;
+ (void)__wcdb_index_26:(void *)arg1;
+ (void)__wcdb_index_25:(void *)arg1;
+ (void)__wcdb_index_24:(void *)arg1;
+ (void)__wcdb_index_23:(void *)arg1;
+ (void)__wcdb_index_22:(void *)arg1;
+ (void)__wcdb_column_constraint_21:(void *)arg1;
+ (id)swift_StrRes3;
+ (const void *)__wcdb_synthesize_20:(void *)arg1;
+ (const void *)StrRes3;
+ (id)swift_StrRes2;
+ (const void *)__wcdb_synthesize_19:(void *)arg1;
+ (const void *)StrRes2;
+ (id)swift_StrRes1;
+ (const void *)__wcdb_synthesize_18:(void *)arg1;
+ (const void *)StrRes1;
+ (id)swift_IntRes3;
+ (const void *)__wcdb_synthesize_17:(void *)arg1;
+ (const void *)IntRes3;
+ (id)swift_IntRes2;
+ (const void *)__wcdb_synthesize_16:(void *)arg1;
+ (const void *)IntRes2;
+ (id)swift_usedTimes;
+ (const void *)__wcdb_synthesize_15:(void *)arg1;
+ (const void *)usedTimes;
+ (id)swift_webCacheStatus;
+ (const void *)__wcdb_synthesize_14:(void *)arg1;
+ (const void *)webCacheStatus;
+ (id)swift_dataTotalSize;
+ (const void *)__wcdb_synthesize_13:(void *)arg1;
+ (const void *)dataTotalSize;
+ (id)swift_xml;
+ (const void *)__wcdb_synthesize_12:(void *)arg1;
+ (const void *)xml;
+ (id)swift_sourceId;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (const void *)sourceId;
+ (id)swift_localStatus;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (const void *)localStatus;
+ (id)swift_sourceType;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (const void *)sourceType;
+ (id)swift_realChatName;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)realChatName;
+ (id)swift_toUser;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)toUser;
+ (id)swift_fromUser;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)fromUser;
+ (id)swift_localUpdateSeq;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)localUpdateSeq;
+ (id)swift_updateSeq;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)updateSeq;
+ (id)swift_time;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)time;
+ (id)swift_type;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)type;
+ (id)swift_favId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)favId;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)localId;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3=_StrRes3;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2=_StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1=_StrRes1;
@property(nonatomic) unsigned int IntRes3; // @synthesize IntRes3=_IntRes3;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2=_IntRes2;
@property(nonatomic) unsigned int usedTimes; // @synthesize usedTimes=_usedTimes;
@property(nonatomic) unsigned int webCacheStatus; // @synthesize webCacheStatus=_webCacheStatus;
@property(nonatomic) long long dataTotalSize; // @synthesize dataTotalSize=_dataTotalSize;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int localStatus; // @synthesize localStatus=_localStatus;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUser; // @synthesize toUser=_toUser;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser=_fromUser;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
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

