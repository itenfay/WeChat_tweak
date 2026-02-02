//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveGetShopShelfResponse, MMFinderLiveShopContext, MMFinderLiveShopShelfHeaderViewModel, MMFinderLiveShopShelfView, MMFinderLiveTask, MMFinderLiveTaskId, NSArray, NSString, WCFinderLiveAudienceLogReporter;
@protocol MMFinderLiveShopShelfViewDelegate;

@interface MMFinderLiveShopShelfCoordinator : NSObject
{
    MMFinderLiveShopShelfHeaderViewModel *_headerViewModel;
    MMFinderLiveShopShelfView *_shopShelfView;
    NSArray *_coupons;
    MMFinderLiveTaskId *_taskID;
    FinderLiveGetShopShelfResponse *_shopShelfInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FinderLiveGetShopShelfResponse *shopShelfInfo; // @synthesize shopShelfInfo=_shopShelfInfo;
@property(retain, nonatomic) MMFinderLiveTaskId *taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSArray *coupons; // @synthesize coupons=_coupons;
@property(nonatomic) __weak MMFinderLiveShopShelfView *shopShelfView; // @synthesize shopShelfView=_shopShelfView;
@property(retain, nonatomic) MMFinderLiveShopShelfHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(id)arg1 shopInfo:(id)arg2;
@property(readonly, nonatomic) __weak id <MMFinderLiveShopShelfViewDelegate> delegate;
@property(readonly, nonatomic) WCFinderLiveAudienceLogReporter *audienceLogReporter;
- (id)orientationPortrait;
- (void)performBlockAfterOrientationPortrait:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isLocalLife;
@property(readonly, nonatomic) _Bool isNormalAudience;
@property(readonly, nonatomic) _Bool isAnchor;
@property(readonly, nonatomic) _Bool isAssistant;
@property(readonly, nonatomic) _Bool isAnchorOrAssistant;
@property(readonly, nonatomic) MMFinderLiveShopContext *shopContext;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
- (void)updateWithShopShelfInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

