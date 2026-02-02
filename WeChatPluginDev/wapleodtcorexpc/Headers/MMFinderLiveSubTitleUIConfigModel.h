//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TextStyleAttributeObj, UIFont;

@interface MMFinderLiveSubTitleUIConfigModel : NSObject
{
    double _maxContentWidth;
    unsigned long long _chnMaxLine;
    unsigned long long _engMaxLine;
    TextStyleAttributeObj *_chnTextAttributeObj;
    TextStyleAttributeObj *_engTextAttributeObj;
    UIFont *_chnSubTitleFont;
    UIFont *_engSubTitleFont;
    unsigned long long _chnDisplayMode;
    unsigned long long _engDisplayMode;
}

+ (unsigned long long)getFinalLinesWithMaxLine:(unsigned long long)arg1 supportStable:(_Bool)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long engDisplayMode; // @synthesize engDisplayMode=_engDisplayMode;
@property(nonatomic) unsigned long long chnDisplayMode; // @synthesize chnDisplayMode=_chnDisplayMode;
@property(retain, nonatomic) UIFont *engSubTitleFont; // @synthesize engSubTitleFont=_engSubTitleFont;
@property(retain, nonatomic) UIFont *chnSubTitleFont; // @synthesize chnSubTitleFont=_chnSubTitleFont;
@property(retain, nonatomic) TextStyleAttributeObj *engTextAttributeObj; // @synthesize engTextAttributeObj=_engTextAttributeObj;
@property(retain, nonatomic) TextStyleAttributeObj *chnTextAttributeObj; // @synthesize chnTextAttributeObj=_chnTextAttributeObj;
@property(nonatomic) unsigned long long engMaxLine; // @synthesize engMaxLine=_engMaxLine;
@property(nonatomic) unsigned long long chnMaxLine; // @synthesize chnMaxLine=_chnMaxLine;
@property(nonatomic) double maxContentWidth; // @synthesize maxContentWidth=_maxContentWidth;
@property(readonly, nonatomic) unsigned long long engTextLine;
@property(readonly, nonatomic) unsigned long long chnTextLine;
- (_Bool)isEqual:(id)arg1;

@end

