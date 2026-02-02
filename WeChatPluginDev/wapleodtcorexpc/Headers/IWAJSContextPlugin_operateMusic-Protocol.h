//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IWAJSContextPlugin_operateMusic <NSObject>
- (void)setMusicMinimizationViewVisibleIfOccupied:(_Bool)arg1;
- (_Bool)curPlayerIsPlaying;
- (_Bool)monopolizeMusicPlayer;
- (void)stopMusic;

@optional
- (_Bool)curPlayerTaskActive;
@end

