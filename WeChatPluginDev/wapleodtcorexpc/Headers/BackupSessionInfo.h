//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface BackupSessionInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int sessionTime; // @dynamic sessionTime;
@property(nonatomic) unsigned int unReadCount; // @dynamic unReadCount;
@property(retain, nonatomic) NSString *userName; // @dynamic userName;

@end

