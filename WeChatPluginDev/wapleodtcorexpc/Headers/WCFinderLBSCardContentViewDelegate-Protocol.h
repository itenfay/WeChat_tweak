//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIButton;

@protocol WCFinderLBSCardContentViewDelegate <NSObject>

@optional
- (void)lbsCardSetupFavButtonReport:(UIButton *)arg1;
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardDidClickCard;
- (void)lbsCardChangeFavState:(_Bool)arg1;
@end

