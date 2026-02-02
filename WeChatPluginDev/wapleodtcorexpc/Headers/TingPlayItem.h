//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class MMListenTTSSentenceInfo, NSData, NSString;

@interface TingPlayItem : WXPBGeneratedMessage
{
}

+ (void)initialize;
- (_Bool)isPlayable;

// Remaining properties
@property(nonatomic) _Bool ableVoicePlay; // @dynamic ableVoicePlay;
@property(retain, nonatomic) NSString *cacheKey; // @dynamic cacheKey;
@property(retain, nonatomic) NSString *encryptKey; // @dynamic encryptKey;
@property(nonatomic) int estimatedDuration; // @dynamic estimatedDuration;
@property(retain, nonatomic) NSData *finderInfo; // @dynamic finderInfo;
@property(nonatomic) _Bool isHls; // @dynamic isHls;
@property(nonatomic) _Bool isStreamMp3; // @dynamic isStreamMp3;
@property(nonatomic) _Bool isTry; // @dynamic isTry;
@property(nonatomic) int qualityType; // @dynamic qualityType;
@property(retain, nonatomic) NSString *refer; // @dynamic refer;
@property(nonatomic) _Bool shouldVoicePlay; // @dynamic shouldVoicePlay;
@property(retain, nonatomic) MMListenTTSSentenceInfo *ttsSentenceInfo; // @dynamic ttsSentenceInfo;
@property(nonatomic) unsigned int type; // @dynamic type;
@property(retain, nonatomic) NSString *url; // @dynamic url;

@end

