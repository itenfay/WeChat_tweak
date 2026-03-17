//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, NSString, WCTopicSearchContext;

@protocol WCTopicSearchViewControllerDelegate <NSObject>
- (void)onTopicSearchQuerySelected:(NSString *)arg1 context:(WCTopicSearchContext *)arg2;
- (void)onTopicSearchResultSended:(WCTopicSearchContext *)arg1;

@optional
- (void)onTopicSearchCancel:(WCTopicSearchContext *)arg1;
- (CContact *)baseContactToForwardSearchResult;
@end

