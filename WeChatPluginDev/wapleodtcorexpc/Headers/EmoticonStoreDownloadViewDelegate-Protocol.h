//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol EmoticonStoreDownloadViewDelegate <NSObject>

@optional
- (double)staticBtnWidth;
- (_Bool)isLongWeCoinType;
- (void)onTapReward;
- (void)onTapUninstall;
- (void)onTapUse;
- (void)onTapCancelDownload;
- (void)onTapDownloadActivity;
- (void)onTapDownload;
- (void)onTapPurchase;
@end

