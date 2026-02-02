//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class Color, JumpInfo, NSString;

@interface Notification : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Color *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool clickAfterClose; // @dynamic clickAfterClose;
@property(nonatomic) unsigned int disappearSecond; // @dynamic disappearSecond;
@property(nonatomic) unsigned int id; // @dynamic id;
@property(retain, nonatomic) JumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) NSString *leftIconUrl; // @dynamic leftIconUrl;
@property(nonatomic) unsigned int priority; // @dynamic priority;
@property(nonatomic) _Bool rightIconCanClose; // @dynamic rightIconCanClose;
@property(retain, nonatomic) NSString *rightIconUrl; // @dynamic rightIconUrl;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) Color *wordColor; // @dynamic wordColor;
@property(retain, nonatomic) NSString *wording; // @dynamic wording;

@end

