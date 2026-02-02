//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMTableView, MMUIViewController, WCCardData;

@protocol WCCardDataControllerDelegate <NSObject>
- (void)scrollToShareCard;
- (MMTableView *)getMyCardTableView;
- (void)stopLoadMoreAnimation;
- (void)onLoadMoreMyCardData;
- (void)onCardPackageViewSelectCardItem:(WCCardData *)arg1;
- (double)getViewHeight;
- (_Bool)isFromAddEntrance;
- (_Bool)hasUnreadMessage;
- (_Bool)hasEnterCardListBefore;
- (void)showLoadingView;
- (void)showTableView;
- (MMUIViewController *)getViewController;
@end

