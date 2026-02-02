//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PayGenActionLocation : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *city; // @dynamic city;
@property(retain, nonatomic) NSString *encryptKey; // @dynamic encryptKey;
@property(retain, nonatomic) NSString *encryptLatitude; // @dynamic encryptLatitude;
@property(retain, nonatomic) NSString *encryptLongitude; // @dynamic encryptLongitude;
@property(retain, nonatomic) NSString *encryptUserinfo; // @dynamic encryptUserinfo;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) unsigned long long locationTimestamp; // @dynamic locationTimestamp;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *province; // @dynamic province;

@end

