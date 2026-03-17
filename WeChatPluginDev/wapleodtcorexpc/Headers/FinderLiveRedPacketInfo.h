//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface FinderLiveRedPacketInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long beginTime; // @dynamic beginTime;
@property(nonatomic) unsigned long long endTime; // @dynamic endTime;
@property(retain, nonatomic) NSString *redpacketAppMsg; // @dynamic redpacketAppMsg;
@property(retain, nonatomic) NSString *referLiveMicId; // @dynamic referLiveMicId;
@property(nonatomic) unsigned int remainTime; // @dynamic remainTime;
@property(retain, nonatomic) NSString *sendId; // @dynamic sendId;
@property(nonatomic) int status; // @dynamic status;

@end

