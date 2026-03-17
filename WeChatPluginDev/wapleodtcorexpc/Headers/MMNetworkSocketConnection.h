//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMNetworkSocketConnection : NSObject
{
    int _sockfd;
    void *_sockaddr;
    unsigned long long _interfaceType;
}

@property(nonatomic) unsigned long long interfaceType; // @synthesize interfaceType=_interfaceType;
@property(readonly, nonatomic) void *sockaddr; // @synthesize sockaddr=_sockaddr;
@property(nonatomic) int sockfd; // @synthesize sockfd=_sockfd;
- (void)setSockaddr:(const void *)arg1 addrlen:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithSockfd:(int)arg1;

@end

