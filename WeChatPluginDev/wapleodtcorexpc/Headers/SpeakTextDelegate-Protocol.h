//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol SpeakTextDelegate <NSObject>

@optional
- (void)onSpeakFail;
- (void)onSpeakStop;
- (void)onSpeakLoading;
- (void)onSpeakStart:(struct _NSRange)arg1 costTimeMs:(unsigned int)arg2;
@end

