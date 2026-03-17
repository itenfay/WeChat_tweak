//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicInfo, UIButton, WCMusicSearchCollectionViewCell;

@protocol WCMusicSearchCollectionViewCellDelegate <NSObject>
- (void)musicSearchCollectionCell:(WCMusicSearchCollectionViewCell *)arg1 didClickPlayOrPauseButton:(UIButton *)arg2 withMusicInfo:(MMMusicInfo *)arg3;
- (void)musicSearchCollectionCell:(WCMusicSearchCollectionViewCell *)arg1 didClickSendButton:(UIButton *)arg2 withMusicInfo:(MMMusicInfo *)arg3;
@end

