//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WABGAudioMinimizationViewModel;

@protocol WABGAudioMinimizationViewModelDelegate <NSObject>
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(WABGAudioMinimizationViewModel *)arg1 isToPlay:(_Bool)arg2;
- (void)onMiniAudioContentViewOuterContentClicked:(WABGAudioMinimizationViewModel *)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked:(WABGAudioMinimizationViewModel *)arg1;
@end

