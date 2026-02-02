//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol MMMusicLyricsPanelDelegate <NSObject>
- (void)onLyricsDidSlideUp:(double)arg1;
- (void)onDragOrClickLyrics;
- (void)onClickUpBtn;
- (void)onWillCloseLyricsPanel;

@optional
- (void)onMusicLyricDidSeekToTime:(double)arg1;
@end

