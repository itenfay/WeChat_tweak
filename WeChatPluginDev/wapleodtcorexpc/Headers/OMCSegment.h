//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, OMCTimeline, OMJID;

@interface OMCSegment : NSObject
{
    OMCTimeline *_timeline;
    OMJID *_segmentID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OMJID *segmentID; // @synthesize segmentID=_segmentID;
@property(readonly, nonatomic) __weak OMCTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)userInfoValueForKey:(id)arg1;
- (void)setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (void)removeUserInfoValueForKey:(id)arg1;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSString *tag;
@property(nonatomic) int layerID;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly, nonatomic) CDStruct_e83c9415 absoluteTimeRange;
@property(readonly, nonatomic) CDStruct_e83c9415 presentationTimeRange;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 presentationStartTime;
@property(readonly, nonatomic) _Bool isBelongingVisualGroup;
@property(readonly, nonatomic) _Bool isBelongingAudialGroup;
@property(readonly, nonatomic) unsigned long long belongingGroupType;
@property(readonly, nonatomic) _Bool isClipSegment;
@property(readonly, nonatomic) _Bool isTransitionSegment;
@property(readonly, nonatomic) _Bool isElementSegment;
@property(retain, nonatomic) NSString *segmentTitle;
@property(readonly, nonatomic) _Bool isAnchored;
@property(readonly, nonatomic) unsigned long long segmentType;
@property(readonly, nonatomic) SharedPtr_104d4a7a backingSegment;
- (id)initWithSegmentID:(id)arg1 timeline:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

