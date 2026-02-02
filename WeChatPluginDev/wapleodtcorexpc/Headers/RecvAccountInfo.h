//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, TipsInfo;

@interface RecvAccountInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TipsInfo *acctUsageTips; // @dynamic acctUsageTips;
@property(retain, nonatomic) NSString *defaultRecvChannelEventId; // @dynamic defaultRecvChannelEventId;
@property(nonatomic) unsigned int defaultRecvChannelType; // @dynamic defaultRecvChannelType;
@property(retain, nonatomic) NSString *listTitle; // @dynamic listTitle;
@property(retain, nonatomic) NSString *noAvailabelAccountWording; // @dynamic noAvailabelAccountWording;
@property(retain, nonatomic) NSMutableArray *recvChannel; // @dynamic recvChannel;
@property(retain, nonatomic) NSMutableArray *recvChannelGroupList; // @dynamic recvChannelGroupList;

@end

