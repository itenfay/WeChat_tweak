//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class BizAppMsgDetailInfo, MMLiveBizArticleListViewController, MMLiveBizArticleSearchViewController;

@protocol MMLiveBizArticleListViewControllerDelegate <NSObject>
- (void)brandArticleListViewController:(MMLiveBizArticleListViewController *)arg1 searchViewController:(MMLiveBizArticleSearchViewController *)arg2 didSelectWithArticle:(BizAppMsgDetailInfo *)arg3;
- (void)brandArticleListViewController:(MMLiveBizArticleListViewController *)arg1 didSelectWithArticle:(BizAppMsgDetailInfo *)arg2;
@end

