//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMBGMSelectedTabManager, NSIndexPath;
@protocol MMBGMSelectedMusicDataProtocol;

@protocol MMBGMSelectedTabManagerDelegate <NSObject>
- (void)bgmSelectedTabManager:(MMBGMSelectedTabManager *)arg1 willShowMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 musicIndex:(unsigned long long)arg3;
- (NSIndexPath *)bgmSelectedTabManager:(MMBGMSelectedTabManager *)arg1 willSelectMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 indexPath:(NSIndexPath *)arg3;
- (void)bgmSelectedTabManager:(MMBGMSelectedTabManager *)arg1 didSelectedMusic:(id <MMBGMSelectedMusicDataProtocol>)arg2 atIndex:(unsigned long long)arg3 isTriggerByTap:(_Bool)arg4;

@optional
- (id <MMBGMSelectedMusicDataProtocol>)bgmSelectedTabManagerGetCurrentMusicData;
@end

