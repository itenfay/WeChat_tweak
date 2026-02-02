//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TAVVideoComposition;

@interface TAVVideoConfiguration : NSObject
{
    unsigned long long _contentMode;
    id <TAVVideoComposition> _effect;
    struct CGRect _frame;
    struct CGAffineTransform _transform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <TAVVideoComposition> effect; // @synthesize effect=_effect;
@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long contentMode; // @synthesize contentMode=_contentMode;
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

