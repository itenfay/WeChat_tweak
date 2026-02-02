//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveEcGetLiveConfigResponse, FinderLiveSquareStyleInfo, NSData, NSString, WCFinderLiveHomePageInitialParams;

@interface WCFinderLiveHomePageCtx : NSObject
{
    _Bool enableAvatarSkeleton;
    _Bool _isViewAppearing;
    _Bool _canScrollParent;
    _Bool _canScrollChild;
    _Bool _isTabStreamStyle;
    _Bool _childScrollsToTop;
    _Bool _hasFetchedLocation;
    _Bool _enableSkeleton;
    NSData *_lastBuffer;
    FinderLiveSquareStyleInfo *_globalStyleInfo;
    WCFinderLiveHomePageInitialParams *_params;
    unsigned long long _autoPlayFlag;
    FinderLiveEcGetLiveConfigResponse *_ecConfigResp;
    CDUnknownBlockType _containerContextBlock;
    double _skeletonAnimationDelay;
}

- (void).cxx_destruct;
@property(nonatomic) double skeletonAnimationDelay; // @synthesize skeletonAnimationDelay=_skeletonAnimationDelay;
@property(nonatomic) _Bool enableSkeleton; // @synthesize enableSkeleton=_enableSkeleton;
@property(copy, nonatomic) CDUnknownBlockType containerContextBlock; // @synthesize containerContextBlock=_containerContextBlock;
@property(nonatomic) _Bool hasFetchedLocation; // @synthesize hasFetchedLocation=_hasFetchedLocation;
@property(nonatomic) _Bool childScrollsToTop; // @synthesize childScrollsToTop=_childScrollsToTop;
@property(nonatomic) _Bool isTabStreamStyle; // @synthesize isTabStreamStyle=_isTabStreamStyle;
@property(nonatomic) _Bool canScrollChild; // @synthesize canScrollChild=_canScrollChild;
@property(nonatomic) _Bool canScrollParent; // @synthesize canScrollParent=_canScrollParent;
@property(retain, nonatomic) FinderLiveEcGetLiveConfigResponse *ecConfigResp; // @synthesize ecConfigResp=_ecConfigResp;
@property(nonatomic) unsigned long long autoPlayFlag; // @synthesize autoPlayFlag=_autoPlayFlag;
@property(retain, nonatomic) WCFinderLiveHomePageInitialParams *params; // @synthesize params=_params;
@property(retain, nonatomic) FinderLiveSquareStyleInfo *globalStyleInfo; // @synthesize globalStyleInfo=_globalStyleInfo;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool isViewAppearing; // @synthesize isViewAppearing=_isViewAppearing;
@property(readonly, nonatomic) _Bool enableAvatarSkeleton; // @synthesize enableAvatarSkeleton;
- (_Bool)autoPlayFirstRow;
- (id)containerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

