//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMLiveDisplayLink, MMLiveTaskId, NSMutableArray;

@interface MMLiveLikePlayUtil : NSObject
{
    _Bool _showHeadImage;
    _Bool _likeAnimating;
    _Bool _likeHeadImageAnimating;
    CDUnknownBlockType _invokeLikeBlock;
    CDUnknownBlockType _invokeHeadImageBlock;
    CDUnknownBlockType _showLikeBlock;
    CDUnknownBlockType _hideLikeBlock;
    double _likeAnimateLimitFrequence;
    MMLiveTaskId *_taskId;
    unsigned long long _lastLikeCount;
    unsigned long long _allAnimatedLikeCount;
    unsigned long long _animatedLikeCount;
    double _animatedLikeFrequence;
    unsigned long long _allAnimatedHeadImageCount;
    unsigned long long _animatedHeadImageCount;
    double _animatedHeadImageFrequence;
    NSMutableArray *_headImageContactList;
    unsigned long long _scene;
    MMLiveDisplayLink *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveDisplayLink *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSMutableArray *headImageContactList; // @synthesize headImageContactList=_headImageContactList;
@property(nonatomic) _Bool likeHeadImageAnimating; // @synthesize likeHeadImageAnimating=_likeHeadImageAnimating;
@property(nonatomic) _Bool likeAnimating; // @synthesize likeAnimating=_likeAnimating;
@property(nonatomic) double animatedHeadImageFrequence; // @synthesize animatedHeadImageFrequence=_animatedHeadImageFrequence;
@property(nonatomic) unsigned long long animatedHeadImageCount; // @synthesize animatedHeadImageCount=_animatedHeadImageCount;
@property(nonatomic) unsigned long long allAnimatedHeadImageCount; // @synthesize allAnimatedHeadImageCount=_allAnimatedHeadImageCount;
@property(nonatomic) double animatedLikeFrequence; // @synthesize animatedLikeFrequence=_animatedLikeFrequence;
@property(nonatomic) unsigned long long animatedLikeCount; // @synthesize animatedLikeCount=_animatedLikeCount;
@property(nonatomic) unsigned long long allAnimatedLikeCount; // @synthesize allAnimatedLikeCount=_allAnimatedLikeCount;
@property(nonatomic) unsigned long long lastLikeCount; // @synthesize lastLikeCount=_lastLikeCount;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) _Bool showHeadImage; // @synthesize showHeadImage=_showHeadImage;
@property(nonatomic) double likeAnimateLimitFrequence; // @synthesize likeAnimateLimitFrequence=_likeAnimateLimitFrequence;
@property(copy, nonatomic) CDUnknownBlockType hideLikeBlock; // @synthesize hideLikeBlock=_hideLikeBlock;
@property(copy, nonatomic) CDUnknownBlockType showLikeBlock; // @synthesize showLikeBlock=_showLikeBlock;
@property(copy, nonatomic) CDUnknownBlockType invokeHeadImageBlock; // @synthesize invokeHeadImageBlock=_invokeHeadImageBlock;
@property(copy, nonatomic) CDUnknownBlockType invokeLikeBlock; // @synthesize invokeLikeBlock=_invokeLikeBlock;
- (void)endPlayLike;
- (void)updateLikeHeadImageAnimation:(id)arg1;
- (void)startLikeHeadImageAnimation;
- (void)startLikeAnimation;
- (void)updateLikeCountWithoutAnimation:(unsigned long long)arg1;
- (void)updateLikeCount:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithScene:(unsigned long long)arg1;
- (id)initWithTaskId:(id)arg1;

@end

