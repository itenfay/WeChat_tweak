//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString, PrivateInfo, StatusClusterPresentData, StatusInteractData, StatusRawData;

@interface StatusInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) StatusClusterPresentData *clusterData; // @dynamic clusterData;
@property(nonatomic) long long createTimeMs; // @dynamic createTimeMs;
@property(retain, nonatomic) NSString *iconId; // @dynamic iconId;
@property(nonatomic) unsigned int iconType; // @dynamic iconType;
@property(retain, nonatomic) StatusInteractData *interactData; // @dynamic interactData;
@property(nonatomic) _Bool isRead; // @dynamic isRead;
@property(retain, nonatomic) PrivateInfo *privateInfoData; // @dynamic privateInfoData;
@property(retain, nonatomic) StatusRawData *rawData; // @dynamic rawData;
@property(nonatomic) unsigned int sequence; // @dynamic sequence;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) NSString *statusId; // @dynamic statusId;
@property(retain, nonatomic) NSString *topicId; // @dynamic topicId;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

