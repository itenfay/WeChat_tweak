//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol WCPaySynthesizeSpeechCgiDelegate;

@interface WCPaySynthesizeSpeechCgi : NSObject
{
    id <WCPaySynthesizeSpeechCgiDelegate> _m_delegate;
    NSMutableDictionary *_m_dictSpeechMsg;
    NSMutableDictionary *_m_dictCGIRequestBeginTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *m_dictCGIRequestBeginTime; // @synthesize m_dictCGIRequestBeginTime=_m_dictCGIRequestBeginTime;
@property(retain, nonatomic) NSMutableDictionary *m_dictSpeechMsg; // @synthesize m_dictSpeechMsg=_m_dictSpeechMsg;
@property(nonatomic) __weak id <WCPaySynthesizeSpeechCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequestWithSynthesizeSpeechMsg:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

@end

