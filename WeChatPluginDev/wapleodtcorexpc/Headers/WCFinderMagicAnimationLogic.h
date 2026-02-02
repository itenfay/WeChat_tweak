//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIView;

@interface WCFinderMagicAnimationLogic : NSObject
{
    UIView *_containerView;
    NSMutableDictionary *_magicAnimationMetaDict;
    CDUnknownBlockType _visibleMetaFilter;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType visibleMetaFilter; // @synthesize visibleMetaFilter=_visibleMetaFilter;
@property(retain, nonatomic) NSMutableDictionary *magicAnimationMetaDict; // @synthesize magicAnimationMetaDict=_magicAnimationMetaDict;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (id)onGetMetaWithId:(id)arg1 needFrame:(_Bool)arg2;
- (void)shakeAllVisiableViews:(_Bool)arg1;
- (id)getVisibleMetaDict:(_Bool)arg1;
- (id)getMagicEmojiBackgroudParentView;
- (id)getMetaByID:(id)arg1 needFrame:(_Bool)arg2;
- (id)getMagicEmojiViewHolder;
- (void)dealloc;
- (id)emojiKeyWithAnimStyle:(unsigned long long)arg1;
- (void)emitMagicAnimationWithEmojiID:(id)arg1 animStyle:(unsigned long long)arg2 frame:(struct CGRect)arg3;
- (void)destroyMagicAnimationBiz;
- (void)setupMagicAnimationBizIfNeed;
- (void)preloadMagicAnimationBiz;
- (id)initWithContainerView:(id)arg1;

@end

