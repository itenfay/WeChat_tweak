//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SessionForwardRecordItem : NSObject
{
    unsigned int _forwardTime;
    NSString *_sessionItemUsername;
}

+ (void)__wcdb_index_8:(void *)arg1;
+ (void)__wcdb_index_7:(void *)arg1;
+ (id)swift_forwardTime;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (const void *)forwardTime;
+ (id)swift_sessionItemUsername;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (const void *)sessionItemUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned int forwardTime; // @synthesize forwardTime=_forwardTime;
@property(retain, nonatomic) NSString *sessionItemUsername; // @synthesize sessionItemUsername=_sessionItemUsername;

@end

