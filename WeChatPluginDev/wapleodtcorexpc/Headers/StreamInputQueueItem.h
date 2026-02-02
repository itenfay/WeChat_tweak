//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface StreamInputQueueItem
{
    unsigned int _inputId;
    unsigned int _offset;
    unsigned int _length;
    unsigned int _endFlag;
    unsigned int _sequence;
    unsigned int _inputLanguageType;
    NSString *_sessionId;
    NSString *_voiceId;
    NSData *_voiceData;
    NSData *_pcmVoiceData;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int inputLanguageType; // @synthesize inputLanguageType=_inputLanguageType;
@property(copy, nonatomic) NSData *pcmVoiceData; // @synthesize pcmVoiceData=_pcmVoiceData;
@property(copy, nonatomic) NSData *voiceData; // @synthesize voiceData=_voiceData;
@property(nonatomic) unsigned int sequence; // @synthesize sequence=_sequence;
@property(nonatomic) unsigned int endFlag; // @synthesize endFlag=_endFlag;
@property(nonatomic) unsigned int length; // @synthesize length=_length;
@property(nonatomic) unsigned int offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *voiceId; // @synthesize voiceId=_voiceId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned int inputId; // @synthesize inputId=_inputId;
- (id)description;
- (id)initWithItem:(id)arg1;

@end

