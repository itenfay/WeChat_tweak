//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, OMJHandleBoxBorderStyle, OMJID;

@interface OMJDecorationBoxConfig : NSObject
{
    OMJID *_segmentID;
    NSArray *_boxItems;
    NSArray *_titles;
    OMJHandleBoxBorderStyle *_borderStyle;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OMJHandleBoxBorderStyle *borderStyle; // @synthesize borderStyle=_borderStyle;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(readonly, nonatomic) NSArray *boxItems; // @synthesize boxItems=_boxItems;
@property(readonly, nonatomic) OMJID *segmentID; // @synthesize segmentID=_segmentID;
- (id)initWithSegmentID:(id)arg1 boxItems:(id)arg2 titles:(id)arg3 edgeInsets:(struct UIEdgeInsets)arg4 borderStyle:(id)arg5;
- (id)initWithSegmentID:(id)arg1 edgeInsets:(struct UIEdgeInsets)arg2 borderStyle:(id)arg3;

@end

