//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat24WSFlowListLiteAppAdapter : NSObject
{
    MISSING_TYPE *liteAppView;
    MISSING_TYPE *dicQuery;
    MISSING_TYPE *currentLiteAppInfo;
    MISSING_TYPE *hasLiteAppStart;
    MISSING_TYPE *isLiteAppStarting;
    MISSING_TYPE *snapshotCache;
    MISSING_TYPE *reportExtraInfo;
}

- (void).cxx_destruct;
- (void)dispatchOnSwipePageWithModel:(id)arg1;
- (void)addLiteAppViewToCellWithCell:(id)arg1 liteAppInfo:(id)arg2 waitRenderFinish:(_Bool)arg3 renderFinishHandler:(CDUnknownBlockType)arg4;
- (void)clearCachedSnapshot;
- (void)setCachedSnapshotForCell:(id)arg1 index:(long long)arg2;
- (void)replaceCardWithSnapshotOfCellWithCell:(id)arg1;
- (void)createLiteAppViewWithCurrentCell:(id)arg1 renderFinishHandler:(CDUnknownBlockType)arg2;
- (id)init;
@property(nonatomic, copy) NSString *reportExtraInfo;

@end

