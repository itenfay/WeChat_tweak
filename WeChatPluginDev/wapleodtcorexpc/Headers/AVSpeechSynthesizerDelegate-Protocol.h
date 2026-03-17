//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class AVSpeechSynthesisMarker, AVSpeechSynthesizer, AVSpeechUtterance;

@protocol AVSpeechSynthesizerDelegate <NSObject>

@optional
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 willSpeakMarker:(AVSpeechSynthesisMarker *)arg2 utterance:(AVSpeechUtterance *)arg3;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(AVSpeechUtterance *)arg3;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didCancelSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didContinueSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didPauseSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didFinishSpeechUtterance:(AVSpeechUtterance *)arg2;
- (void)speechSynthesizer:(AVSpeechSynthesizer *)arg1 didStartSpeechUtterance:(AVSpeechUtterance *)arg2;
@end

