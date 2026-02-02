//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, PicStats;

@interface WCFinderFeedContentReportModel : NSObject
{
    _Bool _hasShowInHotArea;
    NSMutableArray *_jumpInfoReportList;
    PicStats *_picStat;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PicStats *picStat; // @synthesize picStat=_picStat;
@property(retain, nonatomic) NSMutableArray *jumpInfoReportList; // @synthesize jumpInfoReportList=_jumpInfoReportList;
@property(nonatomic) _Bool hasShowInHotArea; // @synthesize hasShowInHotArea=_hasShowInHotArea;

@end

