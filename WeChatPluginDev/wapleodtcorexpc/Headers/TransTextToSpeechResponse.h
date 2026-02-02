//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseResponse, NSData;

@interface TransTextToSpeechResponse : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseResponse *baseResponse; // @dynamic baseResponse;
@property(nonatomic) unsigned int format; // @dynamic format;
@property(nonatomic) _Bool hasUnknowCharacter; // @dynamic hasUnknowCharacter;
@property(retain, nonatomic) NSData *speech; // @dynamic speech;
@property(nonatomic) unsigned int textPosition; // @dynamic textPosition;

@end

