//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSString;

@interface FinderLiveAppMsgAudienceMicInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *liveMicId; // @dynamic liveMicId;
@property(retain, nonatomic) FinderLiveContact *micContact; // @dynamic micContact;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(nonatomic) unsigned long long micSeq; // @dynamic micSeq;
@property(nonatomic) int micType; // @dynamic micType;
@property(nonatomic) unsigned int seatId; // @dynamic seatId;

@end

