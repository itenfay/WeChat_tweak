//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, WCPayBindCardInfo, WCPayControlData;

@protocol WCPaySaveViewControllerDelegate <NSObject>
- (void)WCPaySaveViewControllerClickLQTEntryViewWithAmount:(NSString *)arg1 selectCardInfo:(WCPayBindCardInfo *)arg2;
- (void)WCPaySaveViewControllerBackFromPop;
- (_Bool)WCPaySaveIsCurrentLogicTop;
- (void)WCPaySaveViewControllerNext:(WCPayControlData *)arg1;
- (void)WCPaySaveViewControllerCancel:(_Bool)arg1;
@end

