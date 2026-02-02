//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface UploadEmojiInfoResp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *activityId; // @dynamic activityId;
@property(nonatomic) _Bool completed; // @dynamic completed;
@property(nonatomic) _Bool isTooLarge; // @dynamic isTooLarge;
@property(retain, nonatomic) NSString *md5; // @dynamic md5;
@property(nonatomic) int ret; // @dynamic ret;
@property(nonatomic) int startPos; // @dynamic startPos;
@property(nonatomic) int totalLen; // @dynamic totalLen;

@end

