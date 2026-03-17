//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class WCRedEnvelopesControlData;

@protocol WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate <NSObject>

@optional
- (void)onClickSelectMemberView;
- (_Bool)canShowExclusiveHbModeEntry;
- (void)OnClickSelectSkin;
- (void)OnClickViewHBHistory;
- (void)OnClickNotReceivedButton;
- (void)OnMakeWCRedEnvelopesButtonClick:(WCRedEnvelopesControlData *)arg1;
- (void)OnWCRedEnvelopesMakeRedEnvelopesViewControllerBack;
@end

