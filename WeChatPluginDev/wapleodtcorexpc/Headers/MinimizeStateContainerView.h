//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, UIImageView;

@interface MinimizeStateContainerView : UIView
{
    _Bool _useLargeStyle;
    NSMutableDictionary *_dicPassiveState2CacheView;
    NSArray *_stateViewList;
    UIImageView *_moreView;
    struct CGSize _calculatedSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) NSArray *stateViewList; // @synthesize stateViewList=_stateViewList;
@property(retain, nonatomic) NSMutableDictionary *dicPassiveState2CacheView; // @synthesize dicPassiveState2CacheView=_dicPassiveState2CacheView;
@property(nonatomic) struct CGSize calculatedSize; // @synthesize calculatedSize=_calculatedSize;
@property(nonatomic) _Bool useLargeStyle; // @synthesize useLargeStyle=_useLargeStyle;
- (id)passiveStateCacheKey:(unsigned int)arg1;
- (id)getPassiveStateView:(unsigned int)arg1;
- (id)genStateViewList:(id)arg1;
- (void)animateUpdateWithStateList:(id)arg1 duration:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateWithStateList:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

