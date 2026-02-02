//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface MMMultiHostAuthInfo : NSObject
{
    NSString *_identify;
    NSData *_clientSessionKey;
    NSData *_serverSessionKey;
    NSData *_serverId;
    NSDictionary *_hostToAlgoDictionary;
}

- (void).cxx_destruct;
@property(retain) NSDictionary *hostToAlgoDictionary; // @synthesize hostToAlgoDictionary=_hostToAlgoDictionary;
@property(retain) NSData *serverId; // @synthesize serverId=_serverId;
@property(retain) NSData *serverSessionKey; // @synthesize serverSessionKey=_serverSessionKey;
@property(retain) NSData *clientSessionKey; // @synthesize clientSessionKey=_clientSessionKey;
@property(retain, nonatomic) NSString *identify; // @synthesize identify=_identify;
- (id)authInfoForHost:(id)arg1;
- (void)updateWithHostAlgoList:(id)arg1;
- (_Bool)hasOtherAlgo;
- (_Bool)isValid;
- (_Bool)hasSessionKey;

@end

