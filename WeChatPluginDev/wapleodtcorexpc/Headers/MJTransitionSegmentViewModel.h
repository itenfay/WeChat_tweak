//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, OMCTransitionDesc, OMCTransitionSegment;

@interface MJTransitionSegmentViewModel
{
    OMCTransitionSegment *_transitionSegment;
    _Bool _isBlankTransition;
    _Bool _isOverlapped;
    _Bool _isTransitionEnabled;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isTransitionEnabled; // @synthesize isTransitionEnabled=_isTransitionEnabled;
@property(readonly, nonatomic) _Bool isOverlapped; // @synthesize isOverlapped=_isOverlapped;
@property(nonatomic) _Bool isBlankTransition; // @synthesize isBlankTransition=_isBlankTransition;
- (id)description;
@property(retain, nonatomic) OMCTransitionDesc *transitionDesc;
@property(readonly, nonatomic) NSString *transitionID;
- (void)syncWithMutationEntry:(id)arg1;
- (void)syncWithTransitionSegmentImpl;
- (_Bool)syncWithSegment:(id)arg1;
- (id)initWithTransitionSegment:(id)arg1;

@end

