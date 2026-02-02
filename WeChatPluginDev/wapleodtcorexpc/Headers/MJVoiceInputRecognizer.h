//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MJVoiceInputRecognizerDelegate;

@interface MJVoiceInputRecognizer : NSObject
{
    _Bool _isRecognitionEnded;
    _Bool _isEndRequestSent;
    _Bool _isEndResponseReceived;
    id <MJVoiceInputRecognizerDelegate> _delegate;
    NSString *_identifier;
    unsigned long long _state;
    unsigned long long _numRequests;
    unsigned long long _numResponses;
    NSMutableArray *_captionItems;
    NSMutableDictionary *_requestStatesByIndex;
}

+ (_Bool)isResponseStable:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *requestStatesByIndex; // @synthesize requestStatesByIndex=_requestStatesByIndex;
@property(retain, nonatomic) NSMutableArray *captionItems; // @synthesize captionItems=_captionItems;
@property(nonatomic) unsigned long long numResponses; // @synthesize numResponses=_numResponses;
@property(nonatomic) unsigned long long numRequests; // @synthesize numRequests=_numRequests;
@property(nonatomic) _Bool isEndResponseReceived; // @synthesize isEndResponseReceived=_isEndResponseReceived;
@property(nonatomic) _Bool isEndRequestSent; // @synthesize isEndRequestSent=_isEndRequestSent;
@property(nonatomic) _Bool isRecognitionEnded; // @synthesize isRecognitionEnded=_isRecognitionEnded;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <MJVoiceInputRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)requestSpeechRecognitionByILinkWithAudioData:(id)arg1 sliceIndex:(long long)arg2 isEnd:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)requestSpeechResultFromData:(id)arg1 sliceIndex:(unsigned int)arg2 isEnd:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)appendRecognitionDataSlice:(id)arg1 index:(unsigned int)arg2 isEnd:(_Bool)arg3;
- (void)updateRequestAtIndex:(unsigned int)arg1 toState:(unsigned long long)arg2;
- (unsigned long long)updateRecognizerState;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

