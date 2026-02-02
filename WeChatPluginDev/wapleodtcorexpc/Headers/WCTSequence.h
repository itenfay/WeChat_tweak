//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCTSequence : NSObject
{
    int _seq;
    NSString *_name;
}

+ (id)tableName;
+ (id)swift_seq;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)seq;
+ (id)swift_name;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)name;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int seq; // @synthesize seq=_seq;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

