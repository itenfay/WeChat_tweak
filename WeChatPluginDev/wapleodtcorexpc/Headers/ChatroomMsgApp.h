//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, JumpInfo, NSString;

@interface ChatroomMsgApp : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *bgPicUrl; // @dynamic bgPicUrl;
@property(retain, nonatomic) Color *buttonBgColor; // @dynamic buttonBgColor;
@property(retain, nonatomic) NSString *buttonDes; // @dynamic buttonDes;
@property(retain, nonatomic) NSString *des; // @dynamic des;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *secondDes; // @dynamic secondDes;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) unsigned int type; // @dynamic type;

@end

