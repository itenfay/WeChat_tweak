//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class TingTapePlayingInfo;

@protocol ITingPlayCenterMgrExt <NSObject>

@optional
- (void)onTingTaskBarShowingStatusChanged:(_Bool)arg1 success:(_Bool)arg2;
- (void)onTingTaskBarSyncInfoChanged;
- (void)onTingTapeInfoClearFromPlayer;
- (void)onTingPlayingInfoUpdate:(TingTapePlayingInfo *)arg1;
@end

