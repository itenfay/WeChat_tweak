//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSMutableArray, NSString;

@interface FinderLiveAppMsgPkStatusInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *audienceMicList; // @dynamic audienceMicList;
@property(nonatomic) _Bool disableBattle; // @dynamic disableBattle;
@property(retain, nonatomic) FinderLiveContact *micContact; // @dynamic micContact;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(nonatomic) int scene; // @dynamic scene;
@property(nonatomic) unsigned long long seq; // @dynamic seq;

@end

