//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface PstnCheckNumberRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *clientCountry; // @dynamic clientCountry;
@property(nonatomic) unsigned int dialScene; // @dynamic dialScene;
@property(retain, nonatomic) NSString *lastCountry; // @dynamic lastCountry;
@property(retain, nonatomic) NSString *osCountry; // @dynamic osCountry;
@property(retain, nonatomic) NSString *pureNumber; // @dynamic pureNumber;
@property(retain, nonatomic) NSString *simCountry; // @dynamic simCountry;

@end

