//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface FTSContactPinyinSearchItem : NSObject
{
    NSString *_pinyinContent;
    NSString *_reservedText;
}

+ (void)__wcdb_virtual_table_98:(void *)arg1;
+ (void)__wcdb_virtual_table_97:(void *)arg1;
+ (id)swift_reservedText;
+ (const void *)__wcdb_synthesize_96:(void *)arg1;
+ (const void *)reservedText;
+ (id)swift_pinyinContent;
+ (const void *)__wcdb_synthesize_95:(void *)arg1;
+ (const void *)pinyinContent;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText=_reservedText;
@property(retain, nonatomic) NSString *pinyinContent; // @synthesize pinyinContent=_pinyinContent;

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

