//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCDBSequence : NSObject
{
    NSString *_name;
    long long _seq;
}

+ (id)tableName;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)name;
+ (id)swift_seq;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)seq;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

