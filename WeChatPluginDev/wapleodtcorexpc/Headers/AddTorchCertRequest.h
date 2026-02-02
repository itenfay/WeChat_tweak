//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderEventBaseRequest, NSString;

@interface AddTorchCertRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderEventBaseRequest *baseReq; // @dynamic baseReq;
@property(retain, nonatomic) NSString *fromFinderUsername; // @dynamic fromFinderUsername;
@property(retain, nonatomic) NSString *fromWxUsername; // @dynamic fromWxUsername;
@property(nonatomic) _Bool isAutoAdd; // @dynamic isAutoAdd;
@property(nonatomic) _Bool isLightTorch; // @dynamic isLightTorch;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *name; // @dynamic name;

@end

