//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSIndexPath, OMJID;

@interface MJTimelineMutationEntry : NSObject
{
    _Bool _isVisualClipChanged;
    OMJID *_segmentID;
    NSIndexPath *_indexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isVisualClipChanged; // @synthesize isVisualClipChanged=_isVisualClipChanged;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) OMJID *segmentID; // @synthesize segmentID=_segmentID;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSegmentID:(id)arg1 indexPath:(id)arg2 isVisualClipChanged:(_Bool)arg3;

@end

