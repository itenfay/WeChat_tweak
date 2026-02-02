//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAdDetermineHalfScreenInfo;

@protocol WCAdDetermineHalfScreenViewDelegate <NSObject>

@optional
- (void)onDetermineViewDidClose:(_Bool)arg1;
- (void)onDetermineViewDidDisappear;
- (void)onDetermineViewButtonClickedWithType:(long long)arg1 determineInfo:(WCAdDetermineHalfScreenInfo *)arg2;
@end

