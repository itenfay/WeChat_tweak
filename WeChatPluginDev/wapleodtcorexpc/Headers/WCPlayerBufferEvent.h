//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPlayerBufferEvent : NSObject
{
    unsigned int _seq;
    float _playbackTime;
    float _bufferedLen;
    NSString *_mediaIdentify;
    unsigned long long _startTime;
    unsigned long long _endTime;
    unsigned long long _bufferStartDataLen;
    unsigned long long _bufferEndDataLen;
    unsigned long long _bufferType;
    unsigned long long _exitType;
}

- (void).cxx_destruct;
@property(nonatomic) float bufferedLen; // @synthesize bufferedLen=_bufferedLen;
@property(nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property(nonatomic) unsigned long long bufferType; // @synthesize bufferType=_bufferType;
@property(nonatomic) unsigned long long bufferEndDataLen; // @synthesize bufferEndDataLen=_bufferEndDataLen;
@property(nonatomic) unsigned long long bufferStartDataLen; // @synthesize bufferStartDataLen=_bufferStartDataLen;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) float playbackTime; // @synthesize playbackTime=_playbackTime;
@property(retain, nonatomic) NSString *mediaIdentify; // @synthesize mediaIdentify=_mediaIdentify;
@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
- (id)getBufferReportVal;
- (id)getBufferEventDesc;
- (unsigned long long)getBufferLen;
- (unsigned long long)getBufferedTime;
- (id)initWithBufferType:(unsigned long long)arg1;

@end

