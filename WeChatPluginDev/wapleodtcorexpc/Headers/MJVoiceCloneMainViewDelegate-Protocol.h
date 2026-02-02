//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJVoiceCloneMainView;

@protocol MJVoiceCloneMainViewDelegate <NSObject>
- (void)voiceCloneMainViewDidCancelRecording:(MJVoiceCloneMainView *)arg1;
- (void)voiceCloneMainViewDidStopRecording:(MJVoiceCloneMainView *)arg1;
- (void)voiceCloneMainViewDidStartRecording:(MJVoiceCloneMainView *)arg1;
- (void)voiceCloneMainViewDidTapOnCloseButton:(MJVoiceCloneMainView *)arg1;
@end

