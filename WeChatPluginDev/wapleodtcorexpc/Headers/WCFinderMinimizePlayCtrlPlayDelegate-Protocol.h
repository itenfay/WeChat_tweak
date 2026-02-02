//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView, WCFinderMinimizePlayCtrl;
@protocol WCFinderMinimizeContentViewProtocol;

@protocol WCFinderMinimizePlayCtrlPlayDelegate <NSObject>
- (void)onMediaPlayContentViewUpdated:(UIView<WCFinderMinimizeContentViewProtocol> *)arg1;
- (void)onMediaPlayInfoUpdate:(WCFinderMinimizePlayCtrl *)arg1;
- (void)onMediaPlayStateChanged:(WCFinderMinimizePlayCtrl *)arg1;
@end

