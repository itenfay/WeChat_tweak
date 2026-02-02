//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSString;

@class WXPBGeneratedMessage;

@interface PacketBackupDataTagResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bakChatName; // @dynamic bakChatName;
@property(nonatomic) long long endTime; // @dynamic endTime;
@property(retain, nonatomic) NSString *msgDataId; // @dynamic msgDataId;
@property(nonatomic) long long startTime; // @dynamic startTime;

@end

