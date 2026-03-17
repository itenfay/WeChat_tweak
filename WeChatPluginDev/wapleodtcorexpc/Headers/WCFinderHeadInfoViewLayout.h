//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderHeadInfoViewLayout : NSObject
{
    double _leftMargin;
    double _downOffset;
    double _upOffset;
    long long _fontSize;
    long long _smallFontSize;
    long long _currentFontSize;
    struct CGSize _size;
}

@property(nonatomic) long long currentFontSize; // @synthesize currentFontSize=_currentFontSize;
@property(nonatomic) long long smallFontSize; // @synthesize smallFontSize=_smallFontSize;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) double upOffset; // @synthesize upOffset=_upOffset;
@property(nonatomic) double downOffset; // @synthesize downOffset=_downOffset;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
- (id)initWithLeftMargin:(double)arg1 UpOffset:(double)arg2 DownOffset:(double)arg3;
- (id)initWithLeftMargin:(double)arg1 Size:(struct CGSize)arg2;
- (id)initWithLeftMargin:(double)arg1;
- (id)init;

@end

