//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString;

@interface GetWxaAppNearbyRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) double locationX; // @dynamic locationX;
@property(nonatomic) double locationY; // @dynamic locationY;
@property(retain, nonatomic) NSString *nearbyListId; // @dynamic nearbyListId;
@property(nonatomic) _Bool needSetNearbyState; // @dynamic needSetNearbyState;

@end

