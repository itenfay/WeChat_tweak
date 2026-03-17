//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMMusicLiveMusicOperationViewDelegate <NSObject>
- (void)onMusicResume:(double)arg1;
- (void)onMusicPause:(double)arg1;
- (void)onMusicSliderProgressDidClick:(double)arg1;
- (void)onMusicSliderProgressDidSeek:(double)arg1;
- (void)onMusicSliderProgressChanged:(double)arg1 isSliding:(_Bool)arg2;
- (void)onMusicSliderProgressBeginSeeking;
@end

