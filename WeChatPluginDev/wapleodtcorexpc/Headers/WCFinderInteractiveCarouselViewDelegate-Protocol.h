//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderJumpInfo_Style, UIView, WCFinderComment, WCFinderJumpInfo;
@protocol WCFinderJumpInfoViewProtocol;

@protocol WCFinderInteractiveCarouselViewDelegate <NSObject>
- (void)onCarouselView:(UIView *)arg1 hidden:(_Bool)arg2;
- (void)onCarouselClickBannerJumpInfo:(UIView<WCFinderJumpInfoViewProtocol> *)arg1;
- (void)onCarouselClickButtonJumpInfo:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
- (void)onCarouselClickBannerJumpInfo:(WCFinderJumpInfo *)arg1 style:(FinderJumpInfo_Style *)arg2;
- (void)onCarouselClickHotComment:(WCFinderComment *)arg1;
- (void)onCarouselClickSetRingToneButton;
- (void)onCarouselJumpCarouselViewWillShow;
@end

