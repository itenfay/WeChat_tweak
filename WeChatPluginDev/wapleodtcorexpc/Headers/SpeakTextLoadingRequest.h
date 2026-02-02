//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString;
@protocol SpeakTextLoadingRequestDelegate;

@interface SpeakTextLoadingRequest : NSObject
{
    unsigned int m_requestCount;
    unsigned int m_requestInterval;
    id <SpeakTextLoadingRequestDelegate> _delegate;
    NSString *_requestText;
    NSData *_contextBuff;
    NSMutableArray *_extInfos;
    unsigned long long _lastReceiveDataTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long lastReceiveDataTime; // @synthesize lastReceiveDataTime=_lastReceiveDataTime;
@property(retain, nonatomic) NSMutableArray *extInfos; // @synthesize extInfos=_extInfos;
@property(retain, nonatomic) NSData *contextBuff; // @synthesize contextBuff=_contextBuff;
@property(retain, nonatomic) NSString *requestText; // @synthesize requestText=_requestText;
@property(nonatomic) __weak id <SpeakTextLoadingRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateExtInfosFromResponse:(id)arg1;
- (void)handleRequestFail;
- (void)delayStartQueryTTS;
- (void)startQueryTTS;
- (void)startRequest;
- (id)initWithText:(id)arg1;

@end

