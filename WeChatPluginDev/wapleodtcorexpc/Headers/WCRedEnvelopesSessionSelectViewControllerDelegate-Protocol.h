//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CBaseContact, NSArray, WCRedEnvelopesSessionSelectViewController;

@protocol WCRedEnvelopesSessionSelectViewControllerDelegate <NSObject>
- (void)OnSelectSessionReturn:(NSArray *)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionCancel:(WCRedEnvelopesSessionSelectViewController *)arg1;
- (void)OnSelectSession:(CBaseContact *)arg1 SessionSelectController:(WCRedEnvelopesSessionSelectViewController *)arg2;
@end

