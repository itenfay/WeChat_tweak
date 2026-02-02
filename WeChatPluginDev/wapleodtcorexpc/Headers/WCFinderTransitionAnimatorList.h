//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, WCFinderTransitionUserInfo;

@interface WCFinderTransitionAnimatorList : NSObject
{
    long long _animateType;
    WCFinderTransitionUserInfo *_userInfo;
    NSMutableArray *_animators;
}

+ (id)newWithCount:(long long)arg1 animators:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *animators; // @synthesize animators=_animators;
@property(retain, nonatomic) WCFinderTransitionUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long animateType; // @synthesize animateType=_animateType;
- (id)_fetchPerformAnimator:(id)arg1;
- (id)fetchPerformAnimator;
- (void)onAnimationCleanUp:(_Bool)arg1;
- (_Bool)hasAnimator;
@property(readonly, nonatomic) _Bool pinBackView;
@property(readonly, nonatomic) _Bool dragDownClose;
@property(readonly, nonatomic) _Bool closeAsCard;
- (void)onAnimationPrepare;

@end

