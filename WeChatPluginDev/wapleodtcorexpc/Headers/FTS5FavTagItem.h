//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTS5FavTagItem : NSObject
{
    NSString *_tag;
    NSString *_localIds;
}

+ (void)__wcdb_virtual_table_82:(void *)arg1;
+ (void)__wcdb_virtual_table_81:(void *)arg1;
+ (id)swift_localIds;
+ (const void *)__wcdb_synthesize_80:(void *)arg1;
+ (const void *)localIds;
+ (id)swift_tag;
+ (const void *)__wcdb_synthesize_79:(void *)arg1;
+ (const void *)tag;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *localIds; // @synthesize localIds=_localIds;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;

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

