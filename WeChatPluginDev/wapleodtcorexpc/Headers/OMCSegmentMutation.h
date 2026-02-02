//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class OMJID;

@interface OMCSegmentMutation : NSObject
{
    _Bool _isVisualClipChanged;
    OMJID *_segmentID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isVisualClipChanged; // @synthesize isVisualClipChanged=_isVisualClipChanged;
@property(readonly, nonatomic) OMJID *segmentID; // @synthesize segmentID=_segmentID;
- (id)description;
- (id)initWithBackingMutationInfo:(const void *)arg1;

@end

