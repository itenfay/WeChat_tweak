//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "WCFinderLiveFeedGenericCdnCellDelegate-Protocol.h"

@class FinderWindowProductInfo, PAGFile, WCFinderContact, WCFinderLiveGenericFeedVM, WCFinderLiveTopicTemplateLargeCell;

@protocol WCFinderLiveTopicTemplateLargeCellDelegate <WCFinderLiveFeedGenericCdnCellDelegate>

@optional
- (PAGFile *)hotSalePAGFileForTopicTemplateCell:(WCFinderLiveTopicTemplateLargeCell *)arg1;
- (void)topicTemplateCell:(WCFinderLiveTopicTemplateLargeCell *)arg1 didClickProduct:(FinderWindowProductInfo *)arg2 feedVM:(WCFinderLiveGenericFeedVM *)arg3;
- (void)topicTemplateCell:(WCFinderLiveTopicTemplateLargeCell *)arg1 didClickContact:(WCFinderContact *)arg2 feedVM:(WCFinderLiveGenericFeedVM *)arg3;
@end

