//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIViewController;
@protocol WCSearchTransitionViewSource;

@interface _TtC6WeChat25WCSearchTransitionManager : NSObject
{
    MISSING_TYPE *viewSource;
    MISSING_TYPE *fromVC;
    MISSING_TYPE *useNoSnapshot;
    MISSING_TYPE *didSetTransition;
    MISSING_TYPE *navigationBarColorSameAsVC;
}

- (void).cxx_destruct;
- (id)init;
- (void)onEndInteractivePopTransitionWithIsFinished:(_Bool)arg1;
- (void)onStartNavPopTransitionFrom:(id)arg1;
- (void)onStartInteractivePopTransition;
- (void)setAppearTrasitionFromVC:(id)arg1 fromSearchBar:(id)arg2;
- (void)setUpAnimationWithSearchBarOffset:(double)arg1 fromVC:(id)arg2;
@property(nonatomic) _Bool navigationBarColorSameAsVC; // @synthesize navigationBarColorSameAsVC;
@property(nonatomic) _Bool useNoSnapshot; // @synthesize useNoSnapshot;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC;
@property(nonatomic) __weak id <WCSearchTransitionViewSource> viewSource; // @synthesize viewSource;

@end

