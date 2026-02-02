//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface TransTextToSpeechRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int modelType; // @dynamic modelType;
@property(nonatomic) int sex; // @dynamic sex;
@property(nonatomic) float speed; // @dynamic speed;
@property(retain, nonatomic) NSString *text; // @dynamic text;
@property(retain, nonatomic) NSString *textUserName; // @dynamic textUserName;

@end

