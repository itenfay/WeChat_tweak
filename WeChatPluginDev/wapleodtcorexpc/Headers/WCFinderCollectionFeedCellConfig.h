//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderCollectionFeedCellConfig : NSObject
{
    _Bool _isPlaying;
    _Bool _forceCompleteCourseWatch;
    _Bool _forceShowNeedPayTag;
    unsigned long long _style;
    double _cellHorizontalPadding;
}

+ (id)configWithPlaying:(_Bool)arg1 style:(unsigned long long)arg2;
@property(nonatomic) double cellHorizontalPadding; // @synthesize cellHorizontalPadding=_cellHorizontalPadding;
@property(nonatomic) _Bool forceShowNeedPayTag; // @synthesize forceShowNeedPayTag=_forceShowNeedPayTag;
@property(nonatomic) _Bool forceCompleteCourseWatch; // @synthesize forceCompleteCourseWatch=_forceCompleteCourseWatch;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;

@end

