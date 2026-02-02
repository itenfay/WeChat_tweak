//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingTemplatePanelViewModel, MMCameraTemplateItem, NSArray;

@protocol MJShootComposingTemplatePanelViewModelDelegate <NSObject>

@optional
- (void)templatePanelViewModel:(MJShootComposingTemplatePanelViewModel *)arg1 didFetchItemsForDefaultTab:(NSArray *)arg2 firstTime:(_Bool)arg3;
- (void)templatePanelViewModelDidFetchItemsForDefaultTabFailed:(MJShootComposingTemplatePanelViewModel *)arg1;
- (void)templatePanelViewModelDidFetchItemSucceed:(MJShootComposingTemplatePanelViewModel *)arg1 item:(MMCameraTemplateItem *)arg2;
- (void)templatePanelViewModelDidFetchItemFailed:(MJShootComposingTemplatePanelViewModel *)arg1;
@end

