//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLocationPoiDetailModel, NSString, WCFinderPOIParamsModel, WCFinderPOIRelatedStreamViewModel;

@interface MMLocatingPoiDataLogic : NSObject
{
    WCFinderPOIRelatedStreamViewModel *_streamModel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
    int _commentScene;
    MMLocationPoiDetailModel *_detailModel;
    WCFinderPOIParamsModel *_paramsModel;
    double _lastStreamRequestTime;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double lastStreamRequestTime; // @synthesize lastStreamRequestTime=_lastStreamRequestTime;
@property(retain, nonatomic) WCFinderPOIParamsModel *paramsModel; // @synthesize paramsModel=_paramsModel;
@property(readonly, nonatomic) MMLocationPoiDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(readonly, nonatomic) WCFinderPOIRelatedStreamViewModel *streamModel; // @synthesize streamModel=_streamModel;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
- (int)feedViewControllerScene;
- (void)onFinderPoiTabListError;
- (void)onFinderPoiHeaderViewNeedRefresh;
- (void)requestPoiStream:(id)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)requestPoiBasicInfo:(id)arg1 fromTid:(id)arg2 fromCommentScene:(int)arg3 groupBuyBypassData:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (void)requestPoiDetail:(id)arg1 allowCache:(_Bool)arg2 success:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

