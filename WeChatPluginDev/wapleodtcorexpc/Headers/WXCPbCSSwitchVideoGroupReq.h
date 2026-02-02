//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface WXCPbCSSwitchVideoGroupReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int action; // @dynamic action;
@property(retain, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) int roomId; // @dynamic roomId;
@property(nonatomic) long long roomKey; // @dynamic roomKey;
@property(nonatomic) unsigned int roomSdkmode; // @dynamic roomSdkmode;
@property(retain, nonatomic) NSString *screenSharingFileId; // @dynamic screenSharingFileId;
@property(retain, nonatomic) NSString *screenSharingFileMd5; // @dynamic screenSharingFileMd5;
@property(nonatomic) unsigned long long timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSString *wxGroupId; // @dynamic wxGroupId;

@end

