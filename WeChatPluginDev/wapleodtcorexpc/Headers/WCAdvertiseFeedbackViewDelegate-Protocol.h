//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableArray, NSString, WCDataItem;

@protocol WCAdvertiseFeedbackViewDelegate <NSObject>
- (void)onClickGuideAdManageBtn:(NSString *)arg1 dataItem:(WCDataItem *)arg2;
- (void)onClickNegativeReasonBtn:(NSMutableArray *)arg1 dataItem:(WCDataItem *)arg2;
- (void)onClickNegativeBtn:(_Bool)arg1 dataItem:(WCDataItem *)arg2;
- (void)onClickPositiveBtn:(WCDataItem *)arg1;
- (void)onClickComplainBtn:(NSString *)arg1 dataItem:(WCDataItem *)arg2;
- (void)onAdFeedbackDisappear:(NSString *)arg1;
@end

