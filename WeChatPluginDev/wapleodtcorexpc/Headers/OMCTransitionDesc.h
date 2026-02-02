//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OMCTransitionDesc : NSObject
{
    SharedPtr_6bdad1cb _backingTransitionDesc;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) SharedPtr_6bdad1cb backingTransitionDesc; // @synthesize backingTransitionDesc=_backingTransitionDesc;
@property(readonly, nonatomic) CDStruct_1b6d18a9 suggestedTransOutDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 suggestedTransInDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 suggestedTotalDuration;
@property(readonly, nonatomic) _Bool isBlankTransition;
@property(readonly, nonatomic) _Bool isOverlapped;
@property(readonly, nonatomic) NSString *transitionID;
- (id)initWithBackingTransitionDesc:(const void *)arg1;
- (id)initWithTransitionID:(id)arg1;

@end

