//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMLiveBizArticleListViewModel;

@protocol MMLiveBizArticleListViewModelDelegate <NSObject>
- (void)liveBrandArticleListViewModelDidUpdateLoadStatus:(MMLiveBizArticleListViewModel *)arg1;
- (void)liveBrandArticleListViewModelDidUpdateArticleList:(MMLiveBizArticleListViewModel *)arg1;
@end

