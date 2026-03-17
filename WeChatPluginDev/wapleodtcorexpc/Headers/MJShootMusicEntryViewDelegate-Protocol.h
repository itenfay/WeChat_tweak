//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootMusicEntryView;

@protocol MJShootMusicEntryViewDelegate <NSObject>

@optional
- (void)musicEntryView:(MJShootMusicEntryView *)arg1 didUpdateWithIsMicMuted:(_Bool)arg2;
- (void)disableMusicInMusicEntryView:(MJShootMusicEntryView *)arg1;
- (void)shootMusicEntryViewDidClick:(MJShootMusicEntryView *)arg1;
@end

