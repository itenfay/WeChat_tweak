//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface VoiceTransCell : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned int endFlag; // @dynamic endFlag;
@property(nonatomic) int keywordTimeCount; // @dynamic keywordTimeCount;
@property(retain, nonatomic) NSMutableArray *keywordTimeList; // @dynamic keywordTimeList;
@property(nonatomic) unsigned int sequence; // @dynamic sequence;
@property(retain, nonatomic) SKBuiltinBuffer_t *text; // @dynamic text;
@property(retain, nonatomic) NSString *voiceId; // @dynamic voiceId;

@end

