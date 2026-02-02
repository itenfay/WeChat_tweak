//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSData, NSString;

@interface PacketBackupDataPush : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int checkSum; // @dynamic checkSum;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *dataId; // @dynamic dataId;
@property(nonatomic) int dataSize; // @dynamic dataSize;
@property(nonatomic) int dataType; // @dynamic dataType;
@property(nonatomic) int endOffset; // @dynamic endOffset;
@property(nonatomic) int progress; // @dynamic progress;
@property(nonatomic) int startOffset; // @dynamic startOffset;

@end

