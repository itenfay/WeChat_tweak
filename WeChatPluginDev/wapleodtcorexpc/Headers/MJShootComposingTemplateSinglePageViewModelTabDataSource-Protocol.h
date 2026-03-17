//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingTemplateSinglePageViewModel, MJShootingTemplateTabInfo, NSArray;

@protocol MJShootComposingTemplateSinglePageViewModelTabDataSource <NSObject>

@optional
- (void)templateSinglePageViewModel:(MJShootComposingTemplateSinglePageViewModel *)arg1 didUpdateTemplateItems:(NSArray *)arg2;
- (void)templateSinglePageViewModel:(MJShootComposingTemplateSinglePageViewModel *)arg1 didFetchTabInfos:(NSArray *)arg2 currentTabInfo:(MJShootingTemplateTabInfo *)arg3 itemsForDefaultTab:(NSArray *)arg4;
@end

