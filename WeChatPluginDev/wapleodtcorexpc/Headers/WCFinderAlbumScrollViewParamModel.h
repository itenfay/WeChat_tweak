//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderAlbumScrollViewParamModel : NSObject
{
    _Bool _isMoreThanTimeLimit;
    _Bool _firstToEnterEditVideo;
    double _zoomScale;
    struct CGSize _contentSize;
    struct CGPoint _contentOffset;
    struct CGPoint _contentOffsetHistory;
    struct CGPoint _sliderContentOffset;
    struct CGRect _frame;
    CDStruct_e83c9415 _timeRange;
}

@property(nonatomic) struct CGPoint sliderContentOffset; // @synthesize sliderContentOffset=_sliderContentOffset;
@property(nonatomic) _Bool firstToEnterEditVideo; // @synthesize firstToEnterEditVideo=_firstToEnterEditVideo;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) _Bool isMoreThanTimeLimit; // @synthesize isMoreThanTimeLimit=_isMoreThanTimeLimit;
@property(nonatomic) struct CGPoint contentOffsetHistory; // @synthesize contentOffsetHistory=_contentOffsetHistory;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (id)init;

@end

