//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EditVideoBGMSelectedMusicInfo, NSMutableArray;

@protocol EditVideoBgmViewDelegate <NSObject>
- (void)EditVideoBGMViewMusicOnOffStateChange:(_Bool)arg1;
- (void)EditVideoBGMViewLyricUpdate:(NSMutableArray *)arg1 totalTime:(double)arg2;
- (void)EditVideoBGMViewLyricOnOffStateChange:(_Bool)arg1;
- (void)EditVideoBGMViewDidClickTurnOffMusicButton:(_Bool)arg1;
- (void)EditVideoBGMDone:(EditVideoBGMSelectedMusicInfo *)arg1;
@end

