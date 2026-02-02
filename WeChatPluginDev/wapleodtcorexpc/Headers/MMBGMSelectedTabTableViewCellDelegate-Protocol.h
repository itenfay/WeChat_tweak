//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectedTabTableBaseCell;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectedTabTableViewCellDelegate <NSObject>

@optional
- (void)bgmSelectedTabTableViewCell:(MMBGMSelectedTabTableBaseCell *)arg1 didClickLikeBtn:(_Bool)arg2 musicData:(id <MMBGMSelectedMusicDataProtocol>)arg3;
@end

