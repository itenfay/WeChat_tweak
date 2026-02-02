//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class HbEnvelopSource;

@protocol WCRedEnvelopesSelectSkinViewControllerDelegate <NSObject>
- (void)OnWCRedEnvelopesSelectSkinViewControllerClickExpiredEntry;
- (void)OnWCRedEnvelopesSelectSkinViewControllerDelete:(HbEnvelopSource *)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerConfirm:(HbEnvelopSource *)arg1;
- (void)OnWCRedEnvelopesSelectSkinViewControllerBack;
- (void)OnWCRedEnvelopesSelectSkinViewControllerNeedRefresh;
- (void)OnWCRedEnvelopesSelectSkinViewControllerCheckAndUseDone;
@end

