//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, NSMutableArray, NSString, TextInfo;

@interface OnlineUser : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *chatUserData; // @dynamic chatUserData;
@property(retain, nonatomic) Color *iconColor; // @dynamic iconColor;
@property(retain, nonatomic) NSString *leftIcon; // @dynamic leftIcon;
@property(nonatomic) _Bool needFold; // @dynamic needFold;
@property(nonatomic) unsigned long long status; // @dynamic status;
@property(retain, nonatomic) NSString *statusDesc; // @dynamic statusDesc;
@property(retain, nonatomic) NSString *statusIcon; // @dynamic statusIcon;
@property(retain, nonatomic) TextInfo *textDesc; // @dynamic textDesc;

@end

