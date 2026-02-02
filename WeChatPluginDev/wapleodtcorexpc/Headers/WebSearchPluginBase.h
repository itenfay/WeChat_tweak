//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIViewController, WCSearchPageState, WCWebSearchViewControllerNewH5;
@protocol WCWebSearchPageInterface;

@interface WebSearchPluginBase
{
}

@property(readonly, nonatomic) WCSearchPageState *pageState;
@property(readonly, nonatomic) MMUIViewController<WCWebSearchPageInterface> *searchPage;
@property(readonly, nonatomic) WCWebSearchViewControllerNewH5 *searchVC;

@end

