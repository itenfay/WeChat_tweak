//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView, WCFinderTransitionUserInfo;

@interface WCFinderZoomAnimatingData : NSObject
{
    _Bool _closeDirectly;
    WCFinderTransitionUserInfo *_userInfo;
    UIView *_snapView;
    double _snapCornerRadius;
    UIView *_snapContainer;
    UIView *_maskView;
    struct CGRect _snapOriginFrame;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool closeDirectly; // @synthesize closeDirectly=_closeDirectly;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *snapContainer; // @synthesize snapContainer=_snapContainer;
@property(nonatomic) double snapCornerRadius; // @synthesize snapCornerRadius=_snapCornerRadius;
@property(nonatomic) struct CGRect snapOriginFrame; // @synthesize snapOriginFrame=_snapOriginFrame;
@property(retain, nonatomic) UIView *snapView; // @synthesize snapView=_snapView;
@property(retain, nonatomic) WCFinderTransitionUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void)dealloc;

@end

