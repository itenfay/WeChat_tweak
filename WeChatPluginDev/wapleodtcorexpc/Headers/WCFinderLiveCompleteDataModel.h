//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveCompleteDataModel : NSObject
{
    _Bool _showAudienceAvgSecondsSubTitle;
    double _totalHeight;
    double _basePageViewHeaderHeight;
    double _basePageViewHeight;
    double _basePageFooterHeight;
    double _incomePageViewHeaderHeight;
    double _incomePageViewHeight;
    double _incomeFooterHeight;
}

@property(nonatomic) double incomeFooterHeight; // @synthesize incomeFooterHeight=_incomeFooterHeight;
@property(nonatomic) double incomePageViewHeight; // @synthesize incomePageViewHeight=_incomePageViewHeight;
@property(nonatomic) double incomePageViewHeaderHeight; // @synthesize incomePageViewHeaderHeight=_incomePageViewHeaderHeight;
@property(nonatomic) double basePageFooterHeight; // @synthesize basePageFooterHeight=_basePageFooterHeight;
@property(nonatomic) double basePageViewHeight; // @synthesize basePageViewHeight=_basePageViewHeight;
@property(nonatomic) double basePageViewHeaderHeight; // @synthesize basePageViewHeaderHeight=_basePageViewHeaderHeight;
@property(nonatomic) _Bool showAudienceAvgSecondsSubTitle; // @synthesize showAudienceAvgSecondsSubTitle=_showAudienceAvgSecondsSubTitle;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;

@end

