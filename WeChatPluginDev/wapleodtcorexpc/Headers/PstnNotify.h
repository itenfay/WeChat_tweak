//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray;

@interface PstnNotify : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int dtmfPayloadType; // @dynamic dtmfPayloadType;
@property(nonatomic) unsigned int roomId; // @dynamic roomId;
@property(nonatomic) unsigned long long roomKey; // @dynamic roomKey;
@property(retain, nonatomic) NSMutableArray *userStatusList; // @dynamic userStatusList;

@end

