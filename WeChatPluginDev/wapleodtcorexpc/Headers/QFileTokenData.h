//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface QFileTokenData : NSObject
{
    NSString *_host;
    NSString *_token;
    double _expire;
}

- (void).cxx_destruct;
@property(nonatomic) double expire; // @synthesize expire=_expire;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) NSString *hostUrl;
- (id)initWithDict:(id)arg1;

@end

