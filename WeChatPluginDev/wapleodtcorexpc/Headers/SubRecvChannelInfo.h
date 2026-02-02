//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface SubRecvChannelInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long defaultSubRecvChannelId; // @dynamic defaultSubRecvChannelId;
@property(retain, nonatomic) NSMutableArray *subRecvChannelList; // @dynamic subRecvChannelList;
@property(retain, nonatomic) NSString *subRecvChannelListTitle; // @dynamic subRecvChannelListTitle;
@property(retain, nonatomic) NSString *subRecvChannelTitle; // @dynamic subRecvChannelTitle;

@end

