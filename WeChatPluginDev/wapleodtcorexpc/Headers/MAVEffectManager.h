//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAVEffectManager : NSObject
{
    NSMutableArray *_effectArray;
}

+ (id)createEffect:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *effectArray; // @synthesize effectArray=_effectArray;
- (_Bool)isEffectArrayEmpty;
- (void)reset;
- (long long)getVLogEffectDuration:(long long)arg1;
- (struct CGSize)getVLogEffectSize:(long long)arg1;
- (int)getVLogEffectReplacementImages:(long long)arg1;
- (_Bool)bringToFront:(long long)arg1;
- (void)setEffectRangeParams:(long long)arg1 params:(id)arg2;
- (void)setEffectParams:(long long)arg1 params:(id)arg2;
- (void)clearStickers;
- (void)clearEffects;
- (void)removeEffectOfType:(long long)arg1;
- (void)removeEffect:(id)arg1;
- (id)addGradientBlurEffect;
- (id)addBlurEffect;
- (unsigned long long)addEffect:(id)arg1;
- (id)createEffect:(long long)arg1 path:(id)arg2;
- (id)createEffect:(long long)arg1;
- (id)init;

@end

