//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString, TrackPOIItem;

@interface RefreshTrackRoomResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int count; // @dynamic count;
@property(retain, nonatomic) NSMutableArray *positions; // @dynamic positions;
@property(nonatomic) unsigned int refreshTime; // @dynamic refreshTime;
@property(retain, nonatomic) NSString *retMsg; // @dynamic retMsg;
@property(retain, nonatomic) TrackPOIItem *roomPoi; // @dynamic roomPoi;

@end

