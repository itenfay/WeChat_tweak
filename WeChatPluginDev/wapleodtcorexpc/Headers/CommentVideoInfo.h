//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface CommentVideoInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *coverToken; // @dynamic coverToken;
@property(retain, nonatomic) NSString *coverUrl; // @dynamic coverUrl;
@property(nonatomic) unsigned int durationSecond; // @dynamic durationSecond;
@property(nonatomic) unsigned int fileSize; // @dynamic fileSize;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(nonatomic) unsigned int heightPercentage; // @dynamic heightPercentage;
@property(nonatomic) unsigned int minArea; // @dynamic minArea;
@property(retain, nonatomic) NSString *videoToken; // @dynamic videoToken;
@property(retain, nonatomic) NSString *videoUrl; // @dynamic videoUrl;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

