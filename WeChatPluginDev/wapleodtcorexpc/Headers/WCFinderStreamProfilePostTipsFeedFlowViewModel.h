//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCFinderFeedArray, WCFinderProfilePostTipsInfo, WCFinderStreamLoadingState;
@protocol WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate;

@interface WCFinderStreamProfilePostTipsFeedFlowViewModel : NSObject
{
    id <WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate> _delegate;
    WCFinderProfilePostTipsInfo *_postTipsInfo;
    WCFinderFeedArray *_feedArray;
    WCFinderStreamLoadingState *_loadingState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamLoadingState *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) WCFinderProfilePostTipsInfo *postTipsInfo; // @synthesize postTipsInfo=_postTipsInfo;
@property(nonatomic) __weak id <WCFinderStreamProfilePostTipsFeedFlowViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (int)commentScene;
- (void)_fetchDataWithIsFirstPage:(_Bool)arg1;
- (_Bool)hasMore;
- (_Bool)isLoading;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (id)initWithPostTipsInfo:(id)arg1;

@end

