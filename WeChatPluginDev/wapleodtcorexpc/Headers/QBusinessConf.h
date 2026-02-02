//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface QBusinessConf : NSObject
{
    _Bool _privacy_protection;
    NSArray *_http_proxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *http_proxy; // @synthesize http_proxy=_http_proxy;
@property(nonatomic) _Bool privacy_protection; // @synthesize privacy_protection=_privacy_protection;
- (id)initWithDict:(id)arg1;

@end

