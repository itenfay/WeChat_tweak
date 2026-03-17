//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSString, UIScrollView;
@protocol WCFinderFeedBaseViewControllerProtocol;

@protocol WCFinderMusicEventViewDelegate <NSObject>
- (double)topInsetOfFinderTabPageView;
- (void)onFinderMusicTopicHeaderViewRefresh;
- (void)initMusicNaviItems;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(NSString *)arg2;
- (MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *)currentViewController;

@optional
- (void)onFinderMusicTopicSwitchTab:(UIScrollView *)arg1;
@end

