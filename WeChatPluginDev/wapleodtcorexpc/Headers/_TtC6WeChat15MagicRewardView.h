//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

@interface _TtC6WeChat15MagicRewardView : UIView
{
    MISSING_TYPE *viewId;
    MISSING_TYPE *_giftName;
    MISSING_TYPE *_qualityLevel;
    MISSING_TYPE *_pixelRatio;
    MISSING_TYPE *repeatCount;
    MISSING_TYPE *attributes;
    MISSING_TYPE *$__lazy_storage_$_listeners;
    MISSING_TYPE *$__lazy_storage_$_resListeners;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)removeResListener:(id)arg1;
- (id)addResListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (id)addListener:(id)arg1;
- (void)fetchStats:(CDUnknownBlockType)arg1;
- (void)fetchIsPlaying:(CDUnknownBlockType)arg1;
- (void)unload;
- (void)updateObjectWithKey:(id)arg1 value:(id)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)playWithGiftParam:(id)arg1;
- (id)initWithAttributes:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 attributes:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) long long usage;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount;
@property(nonatomic, readonly) float designAspectRatio;
@property(nonatomic, readonly) float duration;
@property(nonatomic) float pixelRatio;
@property(nonatomic) long long qualityLevel;
@property(nonatomic, copy) NSString *giftName;

@end

