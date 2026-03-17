//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCADVideoPlayInfo;

@protocol WCAdAlphaVideoViewDelegate <NSObject>

@optional
- (WCADVideoPlayInfo *)fetchVideoPlayInfo;
- (void)onPlayerSeekComplete:(double)arg1;
- (void)onPlayEnd:(_Bool)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
@end

