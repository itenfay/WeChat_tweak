//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WASemver;

@interface WASemverRange : NSObject
{
    WASemver *_semver;
    unsigned long long _op;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long op; // @synthesize op=_op;
@property(retain, nonatomic) WASemver *semver; // @synthesize semver=_semver;
- (_Bool)isSatisfiedBy:(id)arg1;
- (id)initWithVersionStr:(id)arg1 op:(unsigned long long)arg2;
- (id)initWithVersion:(id)arg1 op:(unsigned long long)arg2;

@end

