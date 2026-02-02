//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCADAtFriendCompatible : NSObject
{
    unsigned int _minVersion;
    unsigned int _maxVersion;
    NSString *_jumpUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) unsigned int maxVersion; // @synthesize maxVersion=_maxVersion;
@property(nonatomic) unsigned int minVersion; // @synthesize minVersion=_minVersion;
- (_Bool)isCompatible;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

