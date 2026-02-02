//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSData, NSString;

@interface ReportLotionOrBluetoothInfoReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) _Bool authorizeLocation; // @dynamic authorizeLocation;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(retain, nonatomic) NSData *customManuFacturerData; // @dynamic customManuFacturerData;
@property(nonatomic) _Bool hasTurnedOnBluetooth; // @dynamic hasTurnedOnBluetooth;
@property(nonatomic) float latitude; // @dynamic latitude;
@property(nonatomic) float longitude; // @dynamic longitude;
@property(nonatomic) float rssi; // @dynamic rssi;

@end

