//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, WCFinderBulletStyleConfig;

@interface WCFinderBulletConfig : NSObject
{
    _Bool _ignoreEmptyTouch;
    double _gap;
    unsigned long long _lines;
    double _runDuration;
    double _playRate;
    double _videoDuration;
    CDUnknownBlockType _touchAction;
    NSArray *_ignoreTouchAreas;
    double _lineSpacing;
    WCFinderBulletStyleConfig *_defaultStyle;
    CDUnknownBlockType _itemConfigs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType itemConfigs; // @synthesize itemConfigs=_itemConfigs;
@property(retain, nonatomic) WCFinderBulletStyleConfig *defaultStyle; // @synthesize defaultStyle=_defaultStyle;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(retain, nonatomic) NSArray *ignoreTouchAreas; // @synthesize ignoreTouchAreas=_ignoreTouchAreas;
@property(nonatomic) _Bool ignoreEmptyTouch; // @synthesize ignoreEmptyTouch=_ignoreEmptyTouch;
@property(copy, nonatomic) CDUnknownBlockType touchAction; // @synthesize touchAction=_touchAction;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) double playRate; // @synthesize playRate=_playRate;
@property(nonatomic) double runDuration; // @synthesize runDuration=_runDuration;
@property(nonatomic) unsigned long long lines; // @synthesize lines=_lines;
@property(nonatomic) double gap; // @synthesize gap=_gap;

@end

