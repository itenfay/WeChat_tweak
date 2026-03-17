//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, NSString, UIButton, UICollectionView, UIView, WCFinderFeedContentVM, WCFinderMediaInfo;

@protocol WCFinderMemberShipZoneIntroduceHeaderDelegate <NSObject>
- (void)onFinderMemberShipZoneIntroduceHeaderSectionHeaderClickAll:(UIButton *)arg1;
- (void)onFinderMemberShipZoneIntroduceHeaderHeightChanged;
- (void)onActivityFeed:(WCFinderFeedContentVM *)arg1 clickVideo:(WCFinderMediaInfo *)arg2 originRect:(struct CGRect)arg3 originView:(UIView *)arg4;
- (void)onActivityFeed:(WCFinderFeedContentVM *)arg1 clickPhoto:(WCFinderMediaInfo *)arg2 photoIndex:(long long)arg3 originViewArr:(NSArray *)arg4;
- (void)onFinderMemberShipZoneIntroducePayNoticeOnLinkClicked:(NSString *)arg1;
- (void)onFinderMemberShipZoneIntroduceCollectionView:(UICollectionView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end

