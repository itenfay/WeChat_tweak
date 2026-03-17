//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class ShakeMusicInfo;

@protocol IMusicSearchExt <NSObject>

@optional
- (void)OnMusicError:(int)arg1 andSessionId:(unsigned int)arg2;
- (void)OnGetMusicItem:(ShakeMusicInfo *)arg1 andSessionId:(unsigned int)arg2;
- (void)OnPeakPowerChange:(float)arg1;
@end

