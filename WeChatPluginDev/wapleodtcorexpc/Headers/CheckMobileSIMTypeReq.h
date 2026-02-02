//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CheckMobileSIMTypeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *idfa; // @dynamic idfa;
@property(retain, nonatomic) NSString *idfv; // @dynamic idfv;
@property(retain, nonatomic) NSString *imei; // @dynamic imei;
@property(retain, nonatomic) NSString *imsi; // @dynamic imsi;
@property(retain, nonatomic) NSString *ip; // @dynamic ip;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

