//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface QMapPromoteConfig : NSObject
{
    _Bool _enable;
    unsigned int _maxZoom;
    unsigned int _minZoom;
    NSDictionary *_json;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *json; // @synthesize json=_json;
@property(readonly, nonatomic) unsigned int minZoom; // @synthesize minZoom=_minZoom;
@property(readonly, nonatomic) unsigned int maxZoom; // @synthesize maxZoom=_maxZoom;
@property(readonly, nonatomic) _Bool enable; // @synthesize enable=_enable;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

