//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderGetRecommendReasonParams, RecommendReasonWording, WCFinderFeedArray, WCFinderStreamLoadingState;
@protocol WCFinderRecommendCollectionViewModelDelegate;

@interface WCFinderRecommendCollectionViewModel : NSObject
{
    id <WCFinderRecommendCollectionViewModelDelegate> _delegate;
    FinderGetRecommendReasonParams *_recommendParams;
    RecommendReasonWording *_headInfo;
    WCFinderFeedArray *_feedArray;
    WCFinderStreamLoadingState *_loadingState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderStreamLoadingState *loadingState; // @synthesize loadingState=_loadingState;
@property(retain, nonatomic) WCFinderFeedArray *feedArray; // @synthesize feedArray=_feedArray;
@property(retain, nonatomic) RecommendReasonWording *headInfo; // @synthesize headInfo=_headInfo;
@property(retain, nonatomic) FinderGetRecommendReasonParams *recommendParams; // @synthesize recommendParams=_recommendParams;
@property(nonatomic) __weak id <WCFinderRecommendCollectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (int)commentScene;
- (void)requestDataWithPullType:(int)arg1 commentScene:(int)arg2;
- (void)requestNextPageData:(int)arg1;
- (void)requestFirstPageData:(int)arg1;
- (void)requestHeadInfo;
- (id)initWithParams:(id)arg1;

@end

