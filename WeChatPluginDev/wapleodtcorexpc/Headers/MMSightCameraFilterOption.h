//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveResourceFetcherFanoutFlowAction, MMUIButton, NSArray, NSMutableArray, NSString, WCElasticLayoutView;
@protocol MMSightCameraFilterOptionDelegate;

@interface MMSightCameraFilterOption : NSObject
{
    id <MMSightCameraFilterOptionDelegate> _delegate;
    WCElasticLayoutView *_elasticLayoutView;
    MMUIButton *_btnFilterIcon;
    NSMutableArray *_filterBtnArray;
    NSArray *_filterInfos;
    long long _currentSelectIndex;
    long long _currentOrientation;
    MMLiveResourceFetcherFanoutFlowAction *_resourceFetcher;
    struct CGRect _containerFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveResourceFetcherFanoutFlowAction *resourceFetcher; // @synthesize resourceFetcher=_resourceFetcher;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
@property(nonatomic) long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(retain, nonatomic) NSArray *filterInfos; // @synthesize filterInfos=_filterInfos;
@property(retain, nonatomic) NSMutableArray *filterBtnArray; // @synthesize filterBtnArray=_filterBtnArray;
@property(retain, nonatomic) MMUIButton *btnFilterIcon; // @synthesize btnFilterIcon=_btnFilterIcon;
@property(retain, nonatomic) WCElasticLayoutView *elasticLayoutView; // @synthesize elasticLayoutView=_elasticLayoutView;
@property(nonatomic) struct CGRect containerFrame; // @synthesize containerFrame=_containerFrame;
@property(nonatomic) __weak id <MMSightCameraFilterOptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)fetchFilterResourcesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_initViews;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_transformViewsToIdentityAnimated:(_Bool)arg1;
- (void)onClickFilterBtn:(id)arg1;
- (void)_onClickIconView;
- (id)currentSelectedFilterItem;
- (void)rotateToOrientation:(long long)arg1;
@property(readonly, nonatomic) WCElasticLayoutView *optionView;
@property(nonatomic) _Bool active;
- (id)initWithContainerFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

