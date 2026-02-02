//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EXTPKG_mmpayapplynfccardbo_DeviceInfo, NSData, NSMutableArray, NSString;

@interface ApplyNFCCardRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) NSMutableArray *certificates; // @dynamic certificates;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(retain, nonatomic) NSData *nonce; // @dynamic nonce;
@property(retain, nonatomic) NSString *outTradeNo; // @dynamic outTradeNo;
@property(retain, nonatomic) NSData *signNonce; // @dynamic signNonce;

@end

