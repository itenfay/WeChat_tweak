//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MsgSolitaire : NSObject
{
    unsigned int _msgLocalId;
    NSString *_nsChatName;
}

+ (void)__wcdb_table_constraint_3:(void *)arg1;
+ (void)__wcdb_table_constraint_2:(void *)arg1;
+ (id)swift_msgLocalId;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)msgLocalId;
+ (id)swift_nsChatName;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)nsChatName;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;
@property(retain, nonatomic) NSString *nsChatName; // @synthesize nsChatName=_nsChatName;
- (id)description;

@end

