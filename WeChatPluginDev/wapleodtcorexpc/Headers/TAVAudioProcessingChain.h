//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TAVAudioProcessingChain : NSObject
{
    NSArray *_nodes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyEffectToBufferListInOut:(struct AudioBufferList *)arg1 renderInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

