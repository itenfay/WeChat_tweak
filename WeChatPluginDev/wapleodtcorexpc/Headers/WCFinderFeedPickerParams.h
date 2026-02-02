//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString, WCFinderFilePickLimiter;

@interface WCFinderFeedPickerParams : NSObject
{
    _Bool _hideSearchIcon;
    _Bool _hidePublishIcon;
    _Bool _hideTopBar;
    _Bool _isPlanePickerStyle;
    _Bool _isOverrideCellHeight;
    _Bool _isPreviewDisabled;
    _Bool _needFixNavHeight;
    _Bool _noEdgeInset;
    int _enterScene;
    NSString *_vcTitle;
    double _heightRatio;
    long long _minDurationLimit;
    NSString *_minDurationToast;
    NSString *_onlyAllowVideoFeedToast;
    WCFinderFilePickLimiter *_limiter;
    NSData *_enterExtBuf;
    NSString *_sessionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSData *enterExtBuf; // @synthesize enterExtBuf=_enterExtBuf;
@property(nonatomic) int enterScene; // @synthesize enterScene=_enterScene;
@property(retain, nonatomic) WCFinderFilePickLimiter *limiter; // @synthesize limiter=_limiter;
@property(retain, nonatomic) NSString *onlyAllowVideoFeedToast; // @synthesize onlyAllowVideoFeedToast=_onlyAllowVideoFeedToast;
@property(retain, nonatomic) NSString *minDurationToast; // @synthesize minDurationToast=_minDurationToast;
@property(nonatomic) long long minDurationLimit; // @synthesize minDurationLimit=_minDurationLimit;
@property(nonatomic) _Bool noEdgeInset; // @synthesize noEdgeInset=_noEdgeInset;
@property(nonatomic) _Bool needFixNavHeight; // @synthesize needFixNavHeight=_needFixNavHeight;
@property(nonatomic) _Bool isPreviewDisabled; // @synthesize isPreviewDisabled=_isPreviewDisabled;
@property(nonatomic) double heightRatio; // @synthesize heightRatio=_heightRatio;
@property(nonatomic) _Bool isOverrideCellHeight; // @synthesize isOverrideCellHeight=_isOverrideCellHeight;
@property(copy, nonatomic) NSString *vcTitle; // @synthesize vcTitle=_vcTitle;
@property(nonatomic) _Bool isPlanePickerStyle; // @synthesize isPlanePickerStyle=_isPlanePickerStyle;
@property(nonatomic) _Bool hideTopBar; // @synthesize hideTopBar=_hideTopBar;
@property(nonatomic) _Bool hidePublishIcon; // @synthesize hidePublishIcon=_hidePublishIcon;
@property(nonatomic) _Bool hideSearchIcon; // @synthesize hideSearchIcon=_hideSearchIcon;
- (id)init;

@end

