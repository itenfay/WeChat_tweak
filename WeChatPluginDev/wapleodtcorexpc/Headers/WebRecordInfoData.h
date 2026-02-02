//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WebRecordInfoData
{
    unsigned int _visittime;
    NSString *_link;
    NSString *_name;
    NSString *_title;
    NSString *_iconurl;
    NSString *_imgurl;
}

+ (void)__wcdb_index_7:(void *)arg1;
+ (void)__wcdb_index_6:(void *)arg1;
+ (id)swift_visittime;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)visittime;
+ (id)swift_imgurl;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)imgurl;
+ (id)swift_iconurl;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)iconurl;
+ (id)swift_title;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)title;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)name;
+ (id)swift_link;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)link;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int visittime; // @synthesize visittime=_visittime;
@property(retain, nonatomic) NSString *imgurl; // @synthesize imgurl=_imgurl;
@property(retain, nonatomic) NSString *iconurl; // @synthesize iconurl=_iconurl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(readonly, copy) NSString *description;

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

