//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface TAVKeyframeVideoConfiguration : NSObject
{
    NSMutableArray *_keyframes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *keyframes; // @synthesize keyframes=_keyframes;
- (void)removeKeyframesInTimeRange:(CDStruct_e83c9415)arg1;
- (void)removeAllKeyframes;
- (void)removeKeyframe:(id)arg1;
- (void)insertKeyframe:(id)arg1;
- (id)applyEffectToSourceImage:(id)arg1 renderInfo:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

