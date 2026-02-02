//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, OVCLTLayerSpecifier, OVCLTMutationKind;

@interface OVCLTMutationDesc : NSObject
{
    OVCLTMutationKind *_mutationKind;
    OVCLTLayerSpecifier *_ltLayerSpecifier;
    NSDictionary *_mutationOptions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *mutationOptions; // @synthesize mutationOptions=_mutationOptions;
@property(readonly, nonatomic) OVCLTLayerSpecifier *ltLayerSpecifier; // @synthesize ltLayerSpecifier=_ltLayerSpecifier;
@property(readonly, nonatomic) OVCLTMutationKind *mutationKind; // @synthesize mutationKind=_mutationKind;
- (id)initWithMutationKind:(id)arg1 ltLayerSpecifier:(id)arg2 mutationOptions:(id)arg3;

@end

