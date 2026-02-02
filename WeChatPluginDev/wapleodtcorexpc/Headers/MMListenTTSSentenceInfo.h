//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface MMListenTTSSentenceInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int duration; // @dynamic duration;
@property(nonatomic) int format; // @dynamic format;
@property(nonatomic) unsigned int index; // @dynamic index;
@property(retain, nonatomic) NSString *playUrl; // @dynamic playUrl;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) unsigned int ttsStatus; // @dynamic ttsStatus;

@end

