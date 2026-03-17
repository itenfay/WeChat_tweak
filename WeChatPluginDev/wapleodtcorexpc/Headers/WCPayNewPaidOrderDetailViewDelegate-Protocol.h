//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"
#import "WCPayPaidOrderShowInfoViewDelegate-Protocol.h"

@class NSString, RouteInfo, WCPayPaidDetailLeadTailCmdData;

@protocol WCPayNewPaidOrderDetailViewDelegate <WCPayPaidOrderShowInfoViewDelegate, NSObject>
- (void)onNewDetailViewClickLeadTailViewWithCmdData:(WCPayPaidDetailLeadTailCmdData *)arg1;
- (void)onNewDetailViewClickLeadTailViewWithRouteInfo:(RouteInfo *)arg1;
- (void)onNewDetailViewClickFinderInfoViewWithRouteInfo:(RouteInfo *)arg1;
- (void)onNewDetailViewClickMchFav:(_Bool)arg1;
- (void)onNewDetailViewClickLotteryBtn:(id)arg1;
- (void)onNewDetailViewReturnWithoutDrawLottery;
- (void)onNewDetailViewDidFinishLottery;
- (void)onNewDetailViewStartDrawLottery:(unsigned int)arg1;
- (void)onNewDetailViewClickTinyAppActivityWithTinyAppUsername:(NSString *)arg1 tinyAppPath:(NSString *)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onNewDetailViewClickH5ActivityOpenWithTinyAppUsername:(NSString *)arg1 tinyAppPath:(NSString *)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onNewDetailViewClickH5Activity:(NSString *)arg1;
- (void)onNewDetailViewClickNativeActicity;
- (void)onNewDetailViewOpenTinyAppWithTinyAppUsername:(NSString *)arg1 tinyAppPath:(NSString *)arg2 tinyAppVersion:(unsigned int)arg3;
- (void)onNewDetailViewDoneBtnClickWithBrandUsername:(NSString *)arg1;
@end

