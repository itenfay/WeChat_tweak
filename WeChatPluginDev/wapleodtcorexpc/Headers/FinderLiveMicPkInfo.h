//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveContact, NSMutableArray, NSString;

@interface FinderLiveMicPkInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long extFlag; // @dynamic extFlag;
@property(retain, nonatomic) NSString *liveMicId; // @dynamic liveMicId;
@property(retain, nonatomic) NSMutableArray *micAudienceList; // @dynamic micAudienceList;
@property(retain, nonatomic) FinderLiveContact *micContact; // @dynamic micContact;
@property(nonatomic) unsigned int micSdkLiveId; // @dynamic micSdkLiveId;
@property(retain, nonatomic) NSString *micSdkUserId; // @dynamic micSdkUserId;
@property(nonatomic) unsigned long long micSeq; // @dynamic micSeq;
@property(nonatomic) int status; // @dynamic status;

@end

