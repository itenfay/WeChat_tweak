//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMPrefetcherClientJsApiHandler : NSObject
{
    unsigned int _userHash;
    NSString *_clientId;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned int userHash; // @synthesize userHash=_userHash;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void)handleHTTPURLResponse:(id)arg1 data:(id)arg2 error:(id)arg3 callback:(id)arg4;
- (void)doRequestWithUrl:(id)arg1 method:(id)arg2 header:(id)arg3 body:(id)arg4 callback:(id)arg5;
- (void)addApi_request:(id)arg1;
- (void)addApi_getUserHash:(id)arg1;
- (void)addApi_getId:(id)arg1;
- (void)setupApiWithJSContext:(id)arg1;

@end

