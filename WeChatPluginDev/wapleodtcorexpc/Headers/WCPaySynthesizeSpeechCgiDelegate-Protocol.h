//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCPaySynthesizeSpeechMsg;

@protocol WCPaySynthesizeSpeechCgiDelegate <NSObject>
- (void)OnGetWCPayVoiceRespErrorWithSpeechMsg:(WCPaySynthesizeSpeechMsg *)arg1;
- (void)OnGetWCPayVoiceRespOK:(WCPaySynthesizeSpeechMsg *)arg1;
@end

