//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol IWCPaySelecBankItem;

@protocol WCPaySelectBankViewControllerDelegate <NSObject>
- (void)OnGetWCPaySelectBankViewControllerDataSorce;
- (void)OnWCPaySelectBankViewControllerDidSelectItem:(id <IWCPaySelecBankItem>)arg1;

@optional
- (_Bool)needPushSelectCardTypeViewController;
@end

