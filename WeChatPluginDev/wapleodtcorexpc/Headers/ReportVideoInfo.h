//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface ReportVideoInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *aesKey; // @dynamic aesKey;
@property(nonatomic) float duration; // @dynamic duration;
@property(retain, nonatomic) NSString *fileId; // @dynamic fileId;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(retain, nonatomic) NSString *newMd5; // @dynamic newMd5;
@property(nonatomic) float originDuration; // @dynamic originDuration;
@property(retain, nonatomic) NSString *originMd5; // @dynamic originMd5;
@property(retain, nonatomic) NSString *originNewMd5; // @dynamic originNewMd5;
@property(retain, nonatomic) NSString *originThumbAesKey; // @dynamic originThumbAesKey;
@property(retain, nonatomic) NSString *originThumbFileId; // @dynamic originThumbFileId;
@property(retain, nonatomic) NSString *originThumbMd5; // @dynamic originThumbMd5;
@property(retain, nonatomic) NSString *thumbAesKey; // @dynamic thumbAesKey;
@property(retain, nonatomic) NSString *thumbFileId; // @dynamic thumbFileId;
@property(retain, nonatomic) NSString *thumbMd5; // @dynamic thumbMd5;

@end

