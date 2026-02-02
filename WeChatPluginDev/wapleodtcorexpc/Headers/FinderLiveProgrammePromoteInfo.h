//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderJumpInfo, NSString;

@interface FinderLiveProgrammePromoteInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *programmeId; // @dynamic programmeId;
@property(retain, nonatomic) NSString *programmeName; // @dynamic programmeName;
@property(nonatomic) unsigned int startTime; // @dynamic startTime;
@property(nonatomic) unsigned long long subscribeCount; // @dynamic subscribeCount;
@property(nonatomic) unsigned int subscribeStatus; // @dynamic subscribeStatus;

@end

