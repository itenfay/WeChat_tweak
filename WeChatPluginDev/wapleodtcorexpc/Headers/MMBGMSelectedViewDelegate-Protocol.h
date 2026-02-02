//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectedView, NSIndexPath, NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectedViewDelegate <NSObject>

@optional
- (void)bgmSelectedViewDidCloseSearchView:(MMBGMSelectedView *)arg1 latestSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2;
- (void)bgmSelectedView:(MMBGMSelectedView *)arg1 didSearchWithKey:(NSString *)arg2;
- (void)bgmSelectedViewDidClickSearchBar:(MMBGMSelectedView *)arg1;
- (void)bgmSelectedView:(MMBGMSelectedView *)arg1 willShowMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (NSIndexPath *)bgmSelectedView:(MMBGMSelectedView *)arg1 willSelectMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 indexPath:(NSIndexPath *)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedViewDidClickOstOnBtn:(_Bool)arg1;
- (void)bgmSelectedViewDidClickLyricOnBtn:(_Bool)arg1;
- (void)bgmSelectedViewDidClickMusicOnBtn:(_Bool)arg1;
- (void)bgmSelectedViewDidSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
@end

