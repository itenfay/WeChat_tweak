//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, EXTPKG_mmpayapplynfccardbo_DeviceInfo, NSString;

@interface NFCCardsQueryNFCCardInfoRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int actType; // @dynamic actType;
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardType; // @dynamic cardType;
@property(retain, nonatomic) EXTPKG_mmpayapplynfccardbo_DeviceInfo *deviceInfo; // @dynamic deviceInfo;

@end

