//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, LbsLocation, NSString;

@interface GetPoiCityRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *administrativeAreaLevel1; // @dynamic administrativeAreaLevel1;
@property(retain, nonatomic) NSString *administrativeAreaLevel2; // @dynamic administrativeAreaLevel2;
@property(retain, nonatomic) NSString *administrativeAreaLevel3; // @dynamic administrativeAreaLevel3;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) LbsLocation *loc; // @dynamic loc;
@property(retain, nonatomic) NSString *locality; // @dynamic locality;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) NSString *srcCity; // @dynamic srcCity;
@property(retain, nonatomic) NSString *sublocality; // @dynamic sublocality;

@end

