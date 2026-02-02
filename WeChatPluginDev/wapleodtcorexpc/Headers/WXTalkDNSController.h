//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WXTalkDNSController : NSObject
{
    unsigned int _netType;
    unsigned int relayPort;
    NSString *relayIP;
    NSArray *relayIPList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *relayIPList; // @synthesize relayIPList;
@property(nonatomic) unsigned int relayPort; // @synthesize relayPort;
@property(retain, nonatomic) NSString *relayIP; // @synthesize relayIP;
- (void)dealloc;
- (id)init;

@end

