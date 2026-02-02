//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMAuthInfo : NSObject
{
    int _encryptAlgo;
    NSString *_identify;
    NSData *_clientSessionKey;
    NSData *_serverSessionKey;
    NSData *_serverId;
}

- (void).cxx_destruct;
@property(retain) NSData *serverId; // @synthesize serverId=_serverId;
@property(retain) NSData *serverSessionKey; // @synthesize serverSessionKey=_serverSessionKey;
@property(retain) NSData *clientSessionKey; // @synthesize clientSessionKey=_clientSessionKey;
@property(nonatomic) int encryptAlgo; // @synthesize encryptAlgo=_encryptAlgo;
@property(retain, nonatomic) NSString *identify; // @synthesize identify=_identify;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

