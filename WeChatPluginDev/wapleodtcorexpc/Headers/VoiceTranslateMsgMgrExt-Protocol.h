//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CMessageWrap;

@protocol VoiceTranslateMsgMgrExt <NSObject>
- (void)OnVoiceTranslateFail:(CMessageWrap *)arg1;
- (void)OnVoiceTranslateSuccess:(CMessageWrap *)arg1;
- (void)OnVoiceTranslateResultChange:(CMessageWrap *)arg1;
- (void)OnVoiceTranslateBegin:(CMessageWrap *)arg1;
@end

