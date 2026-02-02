//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSMutableArray, NSString;

@interface MMQQShakeMusicResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appid; // @dynamic appid;
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int endflag; // @dynamic endflag;
@property(retain, nonatomic) NSString *id; // @dynamic id;
@property(nonatomic) unsigned int interval; // @dynamic interval;
@property(nonatomic) unsigned int maxPacketSize; // @dynamic maxPacketSize;
@property(retain, nonatomic) NSMutableArray *music; // @dynamic music;

@end

