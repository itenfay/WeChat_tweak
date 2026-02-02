//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCFinderFeedContentVM, WCFinderPlayerReport;

@protocol WCFinderFullShareListViewControllerDelegate <NSObject>

@optional
- (void)onFullScreenDidEndPlayContentVM:(WCFinderFeedContentVM *)arg1 finderPlayerReport:(WCFinderPlayerReport *)arg2;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenItemDragToClose;
- (_Bool)shareListViewShouldBeginPullingDown;
@end

