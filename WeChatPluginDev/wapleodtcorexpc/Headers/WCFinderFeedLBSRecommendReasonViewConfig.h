//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIColor;

@interface WCFinderFeedLBSRecommendReasonViewConfig : NSObject
{
    _Bool _haveSplit;
    _Bool _forceUnbold;
    double _fontSize;
    UIColor *_textColor;
    unsigned long long _lineLimit;
}

+ (id)summaryConfig;
+ (id)titleConfig;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceUnbold; // @synthesize forceUnbold=_forceUnbold;
@property(nonatomic) unsigned long long lineLimit; // @synthesize lineLimit=_lineLimit;
@property(nonatomic) _Bool haveSplit; // @synthesize haveSplit=_haveSplit;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;

@end

