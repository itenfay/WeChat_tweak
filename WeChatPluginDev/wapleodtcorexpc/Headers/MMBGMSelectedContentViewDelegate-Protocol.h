//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectedContentView, NSIndexPath, NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectedContentViewDelegate <NSObject>

@optional
- (_Bool)bgmSelectedContentViewGetMusicState:(MMBGMSelectedContentView *)arg1;
- (void)bgmSelectedContentViewDidCloseSearchView:(MMBGMSelectedContentView *)arg1 latestSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2;
- (void)bgmSelectedContentView:(MMBGMSelectedContentView *)arg1 didSearchWithKey:(NSString *)arg2;
- (void)bgmSelectedContentViewDidClickSearchBar:(MMBGMSelectedContentView *)arg1;
- (void)bgmSelectedContentView:(MMBGMSelectedContentView *)arg1 willShowMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 tabIndex:(unsigned long long)arg3 musicIndex:(unsigned long long)arg4;
- (NSIndexPath *)bgmSelectedContentView:(MMBGMSelectedContentView *)arg1 willSelectMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 indexPath:(NSIndexPath *)arg3 tabIndex:(unsigned long long)arg4;
- (void)bgmSelectedContentViewDidSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg1 atTabIndex:(unsigned long long)arg2 index:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
@end

