//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface JSAPIVerifyOverhead : NSObject
{
    struct timeval _startTime;
    NSString *_url;
    long long _cgi;
}

- (void).cxx_destruct;
- (void)computeTimeConsumption:(_Bool)arg1 appId:(id)arg2 errCode:(long long)arg3;
- (id)initWithUrl:(id)arg1 cgi:(long long)arg2;

@end

