//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString;

@interface QrCodeItem : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *cardId; // @dynamic cardId;
@property(nonatomic) unsigned int expireTimeInterval; // @dynamic expireTimeInterval;
@property(nonatomic) unsigned int lowerBound; // @dynamic lowerBound;
@property(nonatomic) _Bool needInsertShowTimestamp; // @dynamic needInsertShowTimestamp;
@property(retain, nonatomic) NSMutableArray *qrCodeDataList; // @dynamic qrCodeDataList;
@property(nonatomic) unsigned int showExpireInterval; // @dynamic showExpireInterval;
@property(retain, nonatomic) NSString *showTimestampEncryptKey; // @dynamic showTimestampEncryptKey;

@end

