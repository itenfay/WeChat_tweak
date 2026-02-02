//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSArray, WCFinderFeedContentVM, WCFinderLandScapeVideoView, WCFinderRefreshTableFooterView;
@protocol WCFinderFeedBaseViewControllerProtocol;

@protocol WCFinderLandScapeVideoViewDelegate <NSObject>
- (MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *)finderLandScapeVideoViewGetCurrentViewController;

@optional
- (void)finderLandScapeVideoViewPlayNextListFeed:(WCFinderFeedContentVM *)arg1;
- (void)finderLandScapeVideoViewVideoUpdatePosition:(double)arg1 videoDuration:(double)arg2 maxPlayVideoTime:(double)arg3;
- (long long)autoMinimizeCtrlFlagForFinderLandScapeVideoView:(WCFinderLandScapeVideoView *)arg1;
- (NSArray *)finderLandScapeVideoView:(WCFinderLandScapeVideoView *)arg1 actionConfigureWithContentVM:(WCFinderFeedContentVM *)arg2;
- (void)finderLandScapeListFooterDidTriggerRefresh:(WCFinderRefreshTableFooterView *)arg1;
- (_Bool)finderLandScapeListFooteIsEnableTriggerRefreshAtScroll:(WCFinderRefreshTableFooterView *)arg1;
- (void)finderLandScapeVideoView:(WCFinderLandScapeVideoView *)arg1 didSelectContentVM:(WCFinderFeedContentVM *)arg2 refreshRelatedRecommentList:(_Bool)arg3;
- (void)finderLandScapeVideoView:(WCFinderLandScapeVideoView *)arg1 didSelectRowAtIndex:(long long)arg2;
@end

