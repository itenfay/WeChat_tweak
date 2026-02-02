//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface VoIPMtBannerMsg : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *createUserName; // @dynamic createUserName;
@property(nonatomic) unsigned long long msgSeq; // @dynamic msgSeq;
@property(nonatomic) unsigned long long roomid; // @dynamic roomid;
@property(retain, nonatomic) NSString *sdkGroupid; // @dynamic sdkGroupid;
@property(nonatomic) unsigned int talkingStatus; // @dynamic talkingStatus;
@property(retain, nonatomic) NSMutableArray *userStatusList; // @dynamic userStatusList;
@property(retain, nonatomic) NSString *wxGroupid; // @dynamic wxGroupid;

@end

