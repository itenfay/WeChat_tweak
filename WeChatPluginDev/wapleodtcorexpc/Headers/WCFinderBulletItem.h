//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderBulletCommentInfo, WCFinderBulletItemTextView;

@interface WCFinderBulletItem : NSObject
{
    _Bool _locale;
    NSString *_text;
    id _extension;
    WCFinderBulletCommentInfo *_commentInfo;
    double _appearPoint;
    double _length;
    double _showedPoint;
    double _disappearPoint;
    WCFinderBulletItemTextView *_textView;
}

+ (unsigned long long)timeRangeIndexInPoint:(double)arg1;
+ (double)timeRange;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderBulletItemTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool locale; // @synthesize locale=_locale;
@property(nonatomic) double disappearPoint; // @synthesize disappearPoint=_disappearPoint;
@property(nonatomic) double showedPoint; // @synthesize showedPoint=_showedPoint;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double appearPoint; // @synthesize appearPoint=_appearPoint;
@property(retain, nonatomic) WCFinderBulletCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) id extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (unsigned long long)timeRangeIndex;

@end

