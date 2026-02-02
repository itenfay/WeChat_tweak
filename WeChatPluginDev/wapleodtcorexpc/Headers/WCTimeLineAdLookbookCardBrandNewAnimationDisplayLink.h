//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol WCTimeLineAdLookbookCardBrandNewAnimationDisplayLinkDelegate;

@interface WCTimeLineAdLookbookCardBrandNewAnimationDisplayLink : NSObject
{
    id <WCTimeLineAdLookbookCardBrandNewAnimationDisplayLinkDelegate> _delegate;
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
@property(nonatomic) __weak id <WCTimeLineAdLookbookCardBrandNewAnimationDisplayLinkDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setMaskToView:(id)arg1 withSize:(struct CGSize)arg2 cornerRadius:(double)arg3;
- (void)persistAnimations;
- (void)terminateAnimations;
- (void)resetAnimations;
- (void)stopAnimations;
- (void)startAnimations;
- (void)addAnimationObject:(id)arg1;
- (void)getReady;
- (void)handleDisplayLinkEvent:(id)arg1;
- (void)onDidEnterBackground;
- (void)addNotifications;
- (void)dealloc;
- (id)init;

@end

