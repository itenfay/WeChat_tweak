//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SpeakTextReporter : NSObject
{
    int _speakType;
    int _contentLength;
    NSString *_contentMd5;
    long long _prepareSpeakTime;
    long long _requestDataTime;
    long long _receiveDataTime;
    long long _startSpeakTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long startSpeakTime; // @synthesize startSpeakTime=_startSpeakTime;
@property(nonatomic) long long receiveDataTime; // @synthesize receiveDataTime=_receiveDataTime;
@property(nonatomic) long long requestDataTime; // @synthesize requestDataTime=_requestDataTime;
@property(nonatomic) long long prepareSpeakTime; // @synthesize prepareSpeakTime=_prepareSpeakTime;
@property(nonatomic) int contentLength; // @synthesize contentLength=_contentLength;
@property(retain, nonatomic) NSString *contentMd5; // @synthesize contentMd5=_contentMd5;
@property(nonatomic) int speakType; // @synthesize speakType=_speakType;
- (void)report;

@end

