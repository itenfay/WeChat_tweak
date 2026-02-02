//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//


@class NSMutableArray, NSString;

@class WXPBGeneratedMessage;

@interface BackupEmojiOperateRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *insertPositionMd5; // @dynamic insertPositionMd5;
@property(retain, nonatomic) NSMutableArray *md5List; // @dynamic md5List;
@property(nonatomic) unsigned int opcode; // @dynamic opcode;
@property(nonatomic) unsigned int panelType; // @dynamic panelType;
@property(retain, nonatomic) NSString *updateVersionKey; // @dynamic updateVersionKey;
@property(retain, nonatomic) NSString *versionKey; // @dynamic versionKey;

@end

