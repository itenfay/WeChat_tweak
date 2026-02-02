//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, TrackPOIItem, UserPositionItem;

@interface RefreshTrackRoomRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(nonatomic) unsigned int timeStamp; // @dynamic timeStamp;
@property(retain, nonatomic) NSString *trackRoomId; // @dynamic trackRoomId;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) TrackPOIItem *userPoi; // @dynamic userPoi;
@property(retain, nonatomic) UserPositionItem *userPosition; // @dynamic userPosition;

@end

