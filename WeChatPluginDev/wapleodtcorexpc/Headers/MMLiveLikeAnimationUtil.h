//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMLiveLikeAnimationUtil : NSObject
{
    _Bool _isShow;
    _Bool _isShowAnimationView;
    _Bool _isPaused;
    _Bool _isEnterBackground;
    _Bool _isInClapMode;
    _Bool _isWebIconDisabled;
    double _finalLikeViewAlpha;
    NSString *_userName;
    NSString *_headImgUrl;
    NSMutableArray *_animationViewArr;
    NSMutableArray *_animationIconArr;
    NSMutableArray *_clapModeAnimationIconArr;
    NSMutableArray *_webIconArr;
    NSMutableArray *_animationRouteArr;
    NSMutableArray *_headerAnimationRouteArr;
    NSMutableArray *_animationRouteHistoryArray;
    long long _businessType;
}

+ (void)setAllow30FpsAnimation:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool isWebIconDisabled; // @synthesize isWebIconDisabled=_isWebIconDisabled;
@property(nonatomic) _Bool isInClapMode; // @synthesize isInClapMode=_isInClapMode;
@property(nonatomic) long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSMutableArray *animationRouteHistoryArray; // @synthesize animationRouteHistoryArray=_animationRouteHistoryArray;
@property(nonatomic) _Bool isEnterBackground; // @synthesize isEnterBackground=_isEnterBackground;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) _Bool isShowAnimationView; // @synthesize isShowAnimationView=_isShowAnimationView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) NSMutableArray *headerAnimationRouteArr; // @synthesize headerAnimationRouteArr=_headerAnimationRouteArr;
@property(retain, nonatomic) NSMutableArray *animationRouteArr; // @synthesize animationRouteArr=_animationRouteArr;
@property(retain, nonatomic) NSMutableArray *webIconArr; // @synthesize webIconArr=_webIconArr;
@property(retain, nonatomic) NSMutableArray *clapModeAnimationIconArr; // @synthesize clapModeAnimationIconArr=_clapModeAnimationIconArr;
@property(retain, nonatomic) NSMutableArray *animationIconArr; // @synthesize animationIconArr=_animationIconArr;
@property(retain, nonatomic) NSMutableArray *animationViewArr; // @synthesize animationViewArr=_animationViewArr;
@property(copy, nonatomic) NSString *headImgUrl; // @synthesize headImgUrl=_headImgUrl;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) double finalLikeViewAlpha; // @synthesize finalLikeViewAlpha=_finalLikeViewAlpha;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)exitClapMode;
- (void)enterClapMode;
- (void)pauseLiveLike;
- (void)continueLiveLike;
- (void)hideAnimationView;
- (void)showAnimationView;
- (void)startLiveLikeHeadImageAnimationAtCenter:(struct CGPoint)arg1 InSuperView:(id)arg2 fromContact:(id)arg3;
- (void)startLiveLikeHeadImageAtCenter:(struct CGPoint)arg1 inSuperView:(id)arg2 fromContact:(id)arg3;
- (void)startLiveSelfLikeHeadImageAtCenter:(struct CGPoint)arg1 inSuperView:(id)arg2;
- (void)startLiveLikeAnimationAtCenter:(struct CGPoint)arg1 inSuperView:(id)arg2;
- (void)onLoadImageOK:(id)arg1;
- (id)getSelfLiveHeaderAnimationRoute;
- (id)getRandHeaderAnimationRoute;
- (id)getAnotherRoute:(id)arg1;
- (id)getRandAnimationRoute;
- (id)createOtherLikeAnimationHeaderViewFromContact:(id)arg1;
- (id)createSelfLikeAnimationHeaderView;
- (id)createLikeAnimationView;
- (void)initHeaderAnimationRoutes;
- (void)initAnimationRoutes;
- (_Bool)webIconHasExits:(id)arg1;
- (void)resetIconToOrigin;
- (void)addIconFromWeb:(id)arg1 rate:(float)arg2;
- (id)getIconRandom;
- (void)resetIconsRate:(id)arg1;
- (void)initAnimationIcons;
- (void)initNotifications;
- (void)dealloc;
- (void)initData;
- (id)initWithBusinessType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

