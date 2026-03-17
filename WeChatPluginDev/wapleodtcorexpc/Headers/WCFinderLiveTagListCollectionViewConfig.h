//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCFinderLiveTagListCollectionViewConfig : NSObject
{
    _Bool _forceDarkMode;
    long long _limitCount;
    long long _maxCharecterCount;
    double _titleFontSize;
    unsigned long long _commentScene;
    struct CGSize _labelStretchSize;
}

+ (id)defaultConfig;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) struct CGSize labelStretchSize; // @synthesize labelStretchSize=_labelStretchSize;
@property(nonatomic) long long maxCharecterCount; // @synthesize maxCharecterCount=_maxCharecterCount;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;

@end

