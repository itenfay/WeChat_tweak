//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface FinderLiveAppMsgPromoteStatusInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *customId; // @dynamic customId;
@property(nonatomic) unsigned long long promoteId; // @dynamic promoteId;
@property(nonatomic) unsigned int promoteType; // @dynamic promoteType;
@property(nonatomic) unsigned int status; // @dynamic status;
@property(retain, nonatomic) NSString *statusTips; // @dynamic statusTips;

@end

