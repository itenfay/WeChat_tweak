//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class JumpInfo, NSString;

@interface ChatroomMsgImgLink : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(nonatomic) unsigned int picHeight; // @dynamic picHeight;
@property(retain, nonatomic) NSString *picUrl; // @dynamic picUrl;
@property(nonatomic) unsigned int picWidth; // @dynamic picWidth;
@property(nonatomic) unsigned int playtime; // @dynamic playtime;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

