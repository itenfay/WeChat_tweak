//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMMusicPlayerErrInfo, NSString;

@protocol ICanvasMusicMgrExt <NSObject>

@optional
- (void)onMusicPlayError:(NSString *)arg1 errorInfo:(MMMusicPlayerErrInfo *)arg2;
- (void)onMusicPlayTimeChanged:(NSString *)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (void)onMusicPlayStatusChanged:(NSString *)arg1 playState:(long long)arg2;
@end

