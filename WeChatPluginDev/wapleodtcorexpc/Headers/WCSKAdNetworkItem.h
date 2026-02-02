//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCSKAdNetworkItem : NSObject
{
    NSString *_version;
    NSString *_adNetworkId;
    long long _campaignId;
    NSString *_itunesItemId;
    NSString *_nonce;
    NSString *_sourceAppId;
    long long _timestamp;
    NSString *_signature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sourceAppId; // @synthesize sourceAppId=_sourceAppId;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSString *itunesItemId; // @synthesize itunesItemId=_itunesItemId;
@property(nonatomic) long long campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (id)description;
- (void)appendSKAdInfoToParameters:(id)arg1 forProduct:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParamsInfo:(id)arg1;
- (id)initWithItem:(id)arg1 targetAppId:(id)arg2;
- (id)initWithProductId:(id)arg1;

@end

