//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootSideToolbar;

@protocol MJShootSideToolbarDelegate <NSObject>

@optional
- (void)shootSideToolBarDidShowCaptionButton:(MJShootSideToolbar *)arg1;
- (void)shootSideToolBarDidHideRecordingTimerButton:(MJShootSideToolbar *)arg1;
- (void)shootSideToolBarDidHideCountdownTimerButton:(MJShootSideToolbar *)arg1;
- (void)shootSideToolBarDidHideFaceGenderButton:(MJShootSideToolbar *)arg1;
- (void)didTapOnReplayInShootSideToolBar:(MJShootSideToolbar *)arg1;
- (void)didTapOnSwitchRecordingTimerInShootSideToolBar:(MJShootSideToolbar *)arg1;
- (void)didTapOnSwitchCountdownTimerInShootSideToolBar:(MJShootSideToolbar *)arg1;
- (void)didTapOnSwitchGenderInShootSideToolBar:(MJShootSideToolbar *)arg1;
- (void)didTapOnVisageInShootSideToolBar:(MJShootSideToolbar *)arg1;
- (void)didTapOnSwitchCameraInShootSideToolBar:(MJShootSideToolbar *)arg1;
- (void)shootSideToolBar:(MJShootSideToolbar *)arg1 didUpdateWithIsDuetShootOn:(_Bool)arg2;
- (void)shootSideToolBar:(MJShootSideToolbar *)arg1 didUpdateWithIsFlashModeOn:(_Bool)arg2;
- (void)shootSideToolBar:(MJShootSideToolbar *)arg1 didUpdateWithIsCaptionOn:(_Bool)arg2;
@end

