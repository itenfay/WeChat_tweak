//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMCTransitionDesc;

@interface OMCTransitionSegment
{
}

@property(readonly, nonatomic) SharedPtr_a0f5f6c2 backingTransitionSegment;
@property(readonly, nonatomic) CDStruct_e83c9415 usableDurationRange;
@property(readonly, nonatomic) _Bool isBlankTransition;
@property(readonly, nonatomic) _Bool isTransitionEnabled;
@property(nonatomic) CDStruct_1b6d18a9 duration;
@property(retain, nonatomic) OMCTransitionDesc *transitionDesc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

