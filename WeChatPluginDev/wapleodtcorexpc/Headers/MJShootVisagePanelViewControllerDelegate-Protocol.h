//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootVisagePanelViewController;

@protocol MJShootVisagePanelViewControllerDelegate <NSObject>
- (void)shootVisagePanelViewController:(MJShootVisagePanelViewController *)arg1 didSelectItemWithType:(unsigned long long)arg2;
- (void)shootVisagePanelViewControllerWillClose:(_Bool)arg1;
@end

