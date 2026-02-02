//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectHalfScreenViewController, NSIndexPath, NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectHalfScreenViewControllerDelegate <NSObject>

@optional
- (void)onClickSecondCutPromotionButton:(id)arg1;
- (void)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 didChangeVisibleHeight:(double)arg2;
- (void)bgmSelectedViewControllerDidCloseSearchView:(MMBGMSelectHalfScreenViewController *)arg1 latestSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2;
- (void)bgmSelectedViewControllerDidClose:(MMBGMSelectHalfScreenViewController *)arg1;
- (void)bgmSelectedViewControllerWillClose:(MMBGMSelectHalfScreenViewController *)arg1;
- (void)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 didClickOSTOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 didClickLyricOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 didClickMusicOnBtn:(_Bool)arg2;
- (void)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 didSearchWithKey:(NSString *)arg2;
- (void)bgmSelectedViewControllerDidClickSearchBar:(MMBGMSelectHalfScreenViewController *)arg1;
- (void)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 willShowMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (NSIndexPath *)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 willSelectMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 indexPath:(NSIndexPath *)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedViewController:(MMBGMSelectHalfScreenViewController *)arg1 didSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 atTabIndex:(unsigned long long)arg3 index:(unsigned long long)arg4 isTriggerByTap:(_Bool)arg5;
@end

