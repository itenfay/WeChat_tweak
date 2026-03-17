//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MJShootComposingTemplateSinglePageViewModel, NSArray;

@protocol MJShootComposingTemplateSinglePageViewModelDelegate <NSObject>

@optional
- (void)templateSinglePageViewModel:(MJShootComposingTemplateSinglePageViewModel *)arg1 didFetchTemplateItems:(NSArray *)arg2;
- (void)templateSinglePageViewModelDidFetchTemplateItemsFailed:(MJShootComposingTemplateSinglePageViewModel *)arg1;
@end

