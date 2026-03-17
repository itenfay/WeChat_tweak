//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIPanGestureRecognizer, VoiceTransInfo;

@protocol VoiceTranslateExt <NSObject>
- (void)OnVoiceTranslateEnd:(VoiceTransInfo *)arg1 StopReason:(int)arg2;
- (void)OnVoiceTranslateStart:(VoiceTransInfo *)arg1;
- (void)OnUserScrollView:(UIPanGestureRecognizer *)arg1;
- (void)OnStopAutoScrollUp;
@end

