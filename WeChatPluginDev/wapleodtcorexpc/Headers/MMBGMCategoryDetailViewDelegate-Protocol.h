//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMCategoryDetailViewDelegate <NSObject>
- (id <MMBGMSelectedMusicDataProtocol>)bgmCategoryDetailGetCurrentSelectedMusicData;
- (void)bgmCategoryDetailViewDidSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg1 atIndex:(unsigned long long)arg2 isTriggerByTap:(_Bool)arg3;
- (void)bgmCategoryDetailViewDidClickCloseButton;
@end

