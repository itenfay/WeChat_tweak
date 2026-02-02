//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SessionForwardRecord : NSObject
{
    _Bool _isHidden;
    unsigned int _forwardTime;
    NSString *_sessionUsername;
    unsigned long long _scene;
}

+ (void)__wcdb_column_constraint_4:(void *)arg1;
+ (id)swift_scene;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (const void *)scene;
+ (id)swift_isHidden;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (const void *)isHidden;
+ (id)swift_forwardTime;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (const void *)forwardTime;
+ (id)swift_sessionUsername;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (const void *)sessionUsername;
+ (id)__wcdbtyper;
+ (id)allBridgeProperties;
+ (const void *)allProperties;
+ (const void *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool isHidden; // @synthesize isHidden=_isHidden;
@property(nonatomic) unsigned int forwardTime; // @synthesize forwardTime=_forwardTime;
@property(retain, nonatomic) NSString *sessionUsername; // @synthesize sessionUsername=_sessionUsername;

@end

