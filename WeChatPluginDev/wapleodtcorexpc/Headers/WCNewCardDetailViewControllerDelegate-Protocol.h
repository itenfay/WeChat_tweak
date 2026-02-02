//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, WCCardData, WCNewCardDetailViewController, WCShareCardData;

@protocol WCNewCardDetailViewControllerDelegate <NSObject>

@optional
- (void)onDeleteShareCard:(WCShareCardData *)arg1;
- (void)onShareCardConsumed:(NSArray *)arg1 isGetReward:(_Bool)arg2;
- (void)onWCCardDetailViewControllerCancel:(WCNewCardDetailViewController *)arg1;
- (void)onDetailDidBeCleared;
- (void)onAcceptCardCancel;
- (void)onAcceptCardFail:(NSString *)arg1;
- (void)onAcceptCardSuccess:(NSString *)arg1;
- (void)onShareCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2;
- (void)onUseCard:(WCCardData *)arg1;
- (void)onUseCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2 delayTime:(double)arg3;
- (void)onGiftCard:(WCCardData *)arg1 lastIndex:(NSIndexPath *)arg2;
- (void)onDeleteCard:(WCCardData *)arg1;
@end

