//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveSquareStyleInfo, NSData, PAGFile, UIViewController, WCFinderDataItem, WCFinderLiveTopicTemplatePageManager;

@protocol WCFinderLiveTopicTemplatePageManagerDelegate <NSObject>
- (NSData *)getNavLastBufferForPageManager:(WCFinderLiveTopicTemplatePageManager *)arg1;
- (void)feedFlowViewDidScrollInPageManager:(WCFinderLiveTopicTemplatePageManager *)arg1;
- (FinderLiveSquareStyleInfo *)styleInfoForPageManager:(WCFinderLiveTopicTemplatePageManager *)arg1;
- (PAGFile *)getHotSalePAGFileForPageManager:(WCFinderLiveTopicTemplatePageManager *)arg1;
- (void)pageManager:(WCFinderLiveTopicTemplatePageManager *)arg1 onDataItemExposed:(WCFinderDataItem *)arg2;
- (void)fetchDataForPageManager:(WCFinderLiveTopicTemplatePageManager *)arg1 fromTop:(_Bool)arg2 completion:(void (^)(_Bool, WCFinderLiveStreamContainerModel *))arg3;
- (UIViewController *)getViewControllerForPageManager:(WCFinderLiveTopicTemplatePageManager *)arg1;
- (_Bool)pageManagerCanAutoPlayLive:(WCFinderLiveTopicTemplatePageManager *)arg1;
@end

