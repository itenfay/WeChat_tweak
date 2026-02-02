//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveLotteryInfo;

@protocol MMLiveLotteryDetailCardViewDelegate <NSObject>

@optional
- (void)handleClaimMethodFreeGameTeamUp:(MMFinderLiveLotteryInfo *)arg1;
- (void)onMMLiveLotteryDetailCardViewGoPackageGift:(MMFinderLiveLotteryInfo *)arg1;
- (void)onMMLiveLotteryDetailCardViewAnchorCancel;
- (void)onMMLiveLotteryDetailCardViewUserParticipate;
- (void)onMMLiveLotteryDetailCardViewClose;
@end

