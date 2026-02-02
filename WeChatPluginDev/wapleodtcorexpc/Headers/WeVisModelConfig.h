//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WeVisModelConfig : NSObject
{
    _Bool _isValid;
    _Bool _isNeedUpdate;
    NSString *_key;
    long long _subType;
    long long _compatVersion;
    NSString *_name;
    NSString *_sha1;
}

+ (long long)sdkVersion;
+ (id)bundleModelArray;
+ (id)defaultModelArray;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isNeedUpdate; // @synthesize isNeedUpdate=_isNeedUpdate;
@property(readonly, nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSString *sha1; // @synthesize sha1=_sha1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long compatVersion; // @synthesize compatVersion=_compatVersion;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyToOther:(id)arg1;
- (id)configFileName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

