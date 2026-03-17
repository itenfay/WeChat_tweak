//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary, NSString, WCFinderJumpInfo, WCFinderPoiDescView, WCFinderPoiHeadView;

@protocol WCFinderPoiHeadViewDelegate <NSObject>
- (NSMutableDictionary *)dataReportParamDict;
- (void)onTapMoreGroupBuyEnrance;
- (void)onTapGroupBuyButton:(WCFinderJumpInfo *)arg1;
- (void)onTapGroupBuyView:(WCFinderJumpInfo *)arg1;
- (void)onTapRecommendDishes;
- (void)onTapAddressEntrance;
- (void)onTapTakeCarBtn;
- (void)onNavigateToPOI:(id)arg1;
- (void)onTapPoiHeadView:(WCFinderPoiHeadView *)arg1 descViewExpandButton:(WCFinderPoiDescView *)arg2;
- (void)onTapPhoneNumberLink:(NSString *)arg1;
- (void)onUpdateFavSelected:(_Bool)arg1;
- (_Bool)isCurrentPOIFavorite;
- (void)onTapForwardBtn:(id)arg1;
@end

