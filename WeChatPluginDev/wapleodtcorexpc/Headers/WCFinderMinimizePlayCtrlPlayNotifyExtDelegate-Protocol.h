//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderMinimizePlayCtrl;

@protocol WCFinderMinimizePlayCtrlPlayNotifyExtDelegate <NSObject>
- (void)onMinimizePlayStateChanged:(WCFinderMinimizePlayCtrl *)arg1;
- (void)onMinimizePlayStopPlayReport;
- (void)onMinimizePlayStartPlayReport;
- (void)onMinimizePlayPlayByResume;
- (void)onMinimizePlayPauseByInterrupt;
@end

