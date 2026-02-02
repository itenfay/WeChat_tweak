//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderLiveChooseLiveModeItem : NSObject
{
    _Bool _isSelect;
    unsigned long long _liveMode;
    unsigned long long _videoSubType;
    unsigned long long _audioSubType;
    NSString *_title;
    NSString *_subTitle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(nonatomic) unsigned long long audioSubType; // @synthesize audioSubType=_audioSubType;
@property(nonatomic) unsigned long long videoSubType; // @synthesize videoSubType=_videoSubType;
@property(nonatomic) unsigned long long liveMode; // @synthesize liveMode=_liveMode;

@end

