//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, WCMomentsPrivacyViewController;

@protocol WCMomentsPrivacyViewControllerDelegate <NSObject>
- (void)onClickCell:(unsigned long long)arg1;
- (void)privacyViewControllerDidClickCancel:(WCMomentsPrivacyViewController *)arg1;
- (void)privacyViewController:(WCMomentsPrivacyViewController *)arg1 didSelectPrivacy:(long long)arg2 Contacts:(NSArray *)arg3 contactTags:(NSArray *)arg4 isAllContactsSelected:(_Bool)arg5;
- (_Bool)privacyViewController:(WCMomentsPrivacyViewController *)arg1 canSelectPrivacySetting:(long long)arg2;

@optional
- (void)privacyViewControllerDidSelectExpandableCell:(WCMomentsPrivacyViewController *)arg1;
- (_Bool)privacyViewController:(WCMomentsPrivacyViewController *)arg1 multiSelectContactReturn:(NSArray *)arg2 finished:(_Bool)arg3;
@end

