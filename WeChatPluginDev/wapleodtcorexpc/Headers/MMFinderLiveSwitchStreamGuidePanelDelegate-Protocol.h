//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveSwitchStreamGuidePanel;

@protocol MMFinderLiveSwitchStreamGuidePanelDelegate <NSObject>

@optional
- (void)onMMFinderLiveSwitchStreamGuidePanelSwitchVideoStreamWithPanel:(MMFinderLiveSwitchStreamGuidePanel *)arg1;
- (void)onMMFinderLiveSwitchStreamGuidePanelSwitchToLocalAudioModeWithPanel:(MMFinderLiveSwitchStreamGuidePanel *)arg1;
@end

