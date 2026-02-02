//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface PacketBackupDataResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *dataId; // @dynamic dataId;
@property(nonatomic) int dataType; // @dynamic dataType;
@property(nonatomic) int endOffset; // @dynamic endOffset;
@property(nonatomic) int startOffset; // @dynamic startOffset;
@property(nonatomic) int status; // @dynamic status;

@end

