//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class EmoticonStoreReportInfo;

@protocol MMEmoticonStoreDownloadLogicDelegate <NSObject>

@optional
- (double)downloadViewMaxWidth;
- (void)onStoreDownloadLogicDisplayViewChanged;
- (_Bool)shouldShowWeCoinLongType;
- (EmoticonStoreReportInfo *)downloadLogicReportInfo;
- (void)handleUse;
- (void)handleReward;
- (void)onUninstall;
- (void)onDownloadCancel;
- (void)onDownloadFinished;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)arg1;
@end

