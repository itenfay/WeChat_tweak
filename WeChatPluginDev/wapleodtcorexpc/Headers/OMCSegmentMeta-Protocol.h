//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, OMJID;

@protocol OMCSegmentMeta <NSObject>
@property(readonly, nonatomic) _Bool isClipSegment;
@property(readonly, nonatomic) _Bool isTransitionSegment;
@property(readonly, nonatomic) _Bool isElementSegment;
@property(readonly, nonatomic) _Bool isAnchored;
@property(retain, nonatomic) NSString *segmentTitle;
@property(readonly, nonatomic) unsigned long long segmentType;
@property(readonly, nonatomic) OMJID *segmentID;
@end

