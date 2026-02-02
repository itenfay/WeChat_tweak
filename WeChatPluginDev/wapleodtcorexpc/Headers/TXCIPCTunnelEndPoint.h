//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface TXCIPCTunnelEndPoint : NSObject
{
    NSURL *_url;
    NSString *_host;
    long long _type;
    long long _port;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long port; // @synthesize port=_port;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithPort:(long long)arg1;
- (id)initWithAppGroup:(id)arg1;

@end

