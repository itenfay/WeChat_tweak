//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCFinderLiveTopicTemplateTabPageView
{
    CDUnknownBlockType _onWillSwitchToIndex;
}

@property(copy, nonatomic) CDUnknownBlockType onWillSwitchToIndex; // @synthesize onWillSwitchToIndex=_onWillSwitchToIndex;
- (void)preloadAllPages;
- (void)onWillSwitchPageWithType:(unsigned long long)arg1;
- (void)scrollToTop;

@end
