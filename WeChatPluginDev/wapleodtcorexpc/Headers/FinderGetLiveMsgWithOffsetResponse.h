//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, FinderLiveMicInfo, LiveRoomImg, NSData, NSMutableArray, NSString;

@interface FinderGetLiveMsgWithOffsetResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int continueFlag; // @dynamic continueFlag;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(nonatomic) unsigned int intervalInSecond; // @dynamic intervalInSecond;
@property(nonatomic) unsigned int isInvalid; // @dynamic isInvalid;
@property(retain, nonatomic) NSMutableArray *items; // @dynamic items;
@property(retain, nonatomic) NSData *lastBuffer; // @dynamic lastBuffer;
@property(retain, nonatomic) FinderLiveMicInfo *liveMicInfo; // @dynamic liveMicInfo;
@property(retain, nonatomic) LiveRoomImg *liveRoomImg; // @dynamic liveRoomImg;

@end

