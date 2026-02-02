//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QServerProxy : NSObject
{
    NSString *_domain;
    NSString *_proxy_domain;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *proxy_domain; // @synthesize proxy_domain=_proxy_domain;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)initWithDict:(id)arg1;

@end

