//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SolitaireFoldInfo : NSObject
{
    unsigned int _localId;
    unsigned int _createTime;
    unsigned int _showCount;
    unsigned int _hiddenCount;
    NSString *_nsChatName;
    NSString *_nsFrontContent;
    NSString *_nsBehindContent;
    long long _firstSvrId;
    NSString *_nsIdentifier;
}

+ (void)__wcdb_table_constraint_11:(void *)arg1;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_9:(void *)arg1;
+ (id)swift_nsIdentifier;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (const void *)nsIdentifier;
+ (id)swift_firstSvrId;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (const void *)firstSvrId;
+ (id)swift_hiddenCount;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)hiddenCount;
+ (id)swift_showCount;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)showCount;
+ (id)swift_nsBehindContent;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (const void *)nsBehindContent;
+ (id)swift_nsFrontContent;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)nsFrontContent;
+ (id)swift_createTime;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)createTime;
+ (id)swift_localId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)localId;
+ (id)swift_nsChatName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)nsChatName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsIdentifier; // @synthesize nsIdentifier=_nsIdentifier;
@property(nonatomic) long long firstSvrId; // @synthesize firstSvrId=_firstSvrId;
@property(nonatomic) unsigned int hiddenCount; // @synthesize hiddenCount=_hiddenCount;
@property(nonatomic) unsigned int showCount; // @synthesize showCount=_showCount;
@property(retain, nonatomic) NSString *nsBehindContent; // @synthesize nsBehindContent=_nsBehindContent;
@property(retain, nonatomic) NSString *nsFrontContent; // @synthesize nsFrontContent=_nsFrontContent;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
- (id)description;
- (id)getPureText;
- (id)getFoldContent;

@end

