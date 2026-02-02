//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class TorchCert;

@interface TorchCertInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long fromFinderUin; // @dynamic fromFinderUin;
@property(nonatomic) unsigned int fromWxUin; // @dynamic fromWxUin;
@property(nonatomic) _Bool isLightTorch; // @dynamic isLightTorch;
@property(retain, nonatomic) TorchCert *torchCert; // @dynamic torchCert;

@end

