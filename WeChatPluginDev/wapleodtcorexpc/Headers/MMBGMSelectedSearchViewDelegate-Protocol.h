//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMCategoryItem, MMBGMSelectedSearchView, NSIndexPath, NSString;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectedSearchViewDelegate <NSObject>

@optional
- (void)onBgmSelectedSearchViewDidClickCancel:(MMBGMSelectedSearchView *)arg1;
- (void)onBgmSelectedSearchView:(MMBGMSelectedSearchView *)arg1 didClickSelectedMusicCategory:(MMBGMCategoryItem *)arg2;
- (void)onBgmSelectedSearchView:(MMBGMSelectedSearchView *)arg1 didSearchWithKey:(NSString *)arg2;
- (void)onBgmSelectedSearchView:(MMBGMSelectedSearchView *)arg1 willShowMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 musicIndex:(unsigned long long)arg3;
- (NSIndexPath *)onBgmSelectedSearchView:(MMBGMSelectedSearchView *)arg1 willSelectMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 indexPath:(NSIndexPath *)arg3;
- (void)onBgmSelectedSearchView:(MMBGMSelectedSearchView *)arg1 didSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;
@end

