//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QServerSetting : NSObject
{
    _Bool _https;
    int _status;
    NSString *_name;
    NSString *_host;
    NSString *_host_test;
}

- (void).cxx_destruct;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *host_test; // @synthesize host_test=_host_test;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(nonatomic) _Bool https; // @synthesize https=_https;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)checkHttpsString:(id)arg1 useHttps:(_Bool)arg2;
- (id)getDomain;
- (id)initWithDict:(id)arg1;

@end

