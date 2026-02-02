//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CADisplayLink, NSMutableArray;

@interface WCAdCardMultiProductsDisplayLink
{
    CADisplayLink *_animationLink;
    NSMutableArray *_animationObjects;
    double _timestamp;
    double _animationCurrentTime;
}

- (void).cxx_destruct;
@property(nonatomic) double animationCurrentTime; // @synthesize animationCurrentTime=_animationCurrentTime;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSMutableArray *animationObjects; // @synthesize animationObjects=_animationObjects;
@property(retain, nonatomic) CADisplayLink *animationLink; // @synthesize animationLink=_animationLink;
- (void)persistAnimations;
- (void)terminateAnimations;
- (void)resetAnimations;
- (void)stopAnimations;
- (void)startAnimations;
- (void)restorePrevioisCenterWith:(id)arg1;
- (void)saveCurrentCenterWith:(id)arg1;
- (void)appendAnimationObject:(id)arg1;
- (void)appendAnimationObjects:(id)arg1;
- (void)handleDisplayLinkEvent:(id)arg1;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)init;

@end

