//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCAdConventionalHalfScreenReportManager;

@protocol WCAdConventionalHalfScreenMediaViewDelegate <NSObject>

@optional
- (WCAdConventionalHalfScreenReportManager *)onMediaViewFetchReportManager;
- (_Bool)onMediaViewShouldVideoBePlaying;
- (void)onMediaViewContentBeClicked;
@end

