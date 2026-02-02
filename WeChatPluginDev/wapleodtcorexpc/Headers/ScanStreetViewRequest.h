//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class BaseRequest, PositionInfo;

@class WXPBGeneratedMessage;

@interface ScanStreetViewRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) float heading; // @dynamic heading;
@property(nonatomic) float pitch; // @dynamic pitch;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(retain, nonatomic) PositionInfo *userPos; // @dynamic userPos;

@end

