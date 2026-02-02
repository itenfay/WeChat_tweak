//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderLiveAppMsgSyncEventInfo_InfoValue;

@interface FinderLiveAppMsgSyncEventInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int eventId; // @dynamic eventId;
@property(nonatomic) unsigned int infoType; // @dynamic infoType;
@property(retain, nonatomic) FinderLiveAppMsgSyncEventInfo_InfoValue *infoValue; // @dynamic infoValue;
@property(nonatomic) unsigned int subInfoType; // @dynamic subInfoType;

@end

