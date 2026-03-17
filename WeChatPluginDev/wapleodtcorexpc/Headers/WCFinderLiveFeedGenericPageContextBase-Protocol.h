//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class FinderLiveEcGetLiveConfigResponse;

@protocol WCFinderLiveFeedGenericPageContextBase <NSObject>
@property(readonly, nonatomic) double skeletonAnimationDelay;
@property(readonly, nonatomic) _Bool enableAvatarSkeleton;
@property(readonly, nonatomic) _Bool enableSkeleton;
@property(readonly, nonatomic) FinderLiveEcGetLiveConfigResponse *ecConfigResp;
@property(readonly, nonatomic) _Bool isViewAppearing;
@end

