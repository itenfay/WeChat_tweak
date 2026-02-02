//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, MinimizeTaskData, NSDictionary, NSString, WCFinderContextIdToken, WCFinderMinimizePlayCtrl, WCFinderMinimizePlayInfo;
@protocol WCFinderMinimizeDelegate;

@interface WCFinderMinimizeLogic : NSObject
{
    NSString *_bizKey;
    _Bool _floattingViewDisplaying;
    _Bool _pageVCDisplayed;
    _Bool _isPlayWhenEnter;
    _Bool _isNeedMinimizeAnim;
    MMUIViewController *_vc;
    id <WCFinderMinimizeDelegate> _vcDelegate;
    MinimizeTaskData *_taskData;
    unsigned long long _cacheTimePoint;
    WCFinderMinimizePlayCtrl *_playCtrl;
    WCFinderMinimizePlayInfo *_playInfo;
    MMUIViewController *_currentPageVC;
    id <WCFinderMinimizeDelegate> _currentPageVCDelegate;
    unsigned long long _createTime;
    unsigned long long _closeTime;
    unsigned long long _startPlayTime;
    NSString *_floatId;
    NSDictionary *_reportUDFKV;
    WCFinderContextIdToken *_contextToken;
    NSString *_extraInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) WCFinderContextIdToken *contextToken; // @synthesize contextToken=_contextToken;
@property(retain, nonatomic) NSDictionary *reportUDFKV; // @synthesize reportUDFKV=_reportUDFKV;
@property(retain, nonatomic) NSString *floatId; // @synthesize floatId=_floatId;
@property(nonatomic) unsigned long long startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(nonatomic) unsigned long long closeTime; // @synthesize closeTime=_closeTime;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) __weak id <WCFinderMinimizeDelegate> currentPageVCDelegate; // @synthesize currentPageVCDelegate=_currentPageVCDelegate;
@property(nonatomic) __weak MMUIViewController *currentPageVC; // @synthesize currentPageVC=_currentPageVC;
@property(nonatomic) _Bool isNeedMinimizeAnim; // @synthesize isNeedMinimizeAnim=_isNeedMinimizeAnim;
@property(retain, nonatomic) WCFinderMinimizePlayInfo *playInfo; // @synthesize playInfo=_playInfo;
@property(retain, nonatomic) WCFinderMinimizePlayCtrl *playCtrl; // @synthesize playCtrl=_playCtrl;
@property(nonatomic) _Bool isPlayWhenEnter; // @synthesize isPlayWhenEnter=_isPlayWhenEnter;
@property(nonatomic) _Bool pageVCDisplayed; // @synthesize pageVCDisplayed=_pageVCDisplayed;
@property(nonatomic) _Bool floattingViewDisplaying; // @synthesize floattingViewDisplaying=_floattingViewDisplaying;
@property(nonatomic) unsigned long long cacheTimePoint; // @synthesize cacheTimePoint=_cacheTimePoint;
@property(retain, nonatomic) MinimizeTaskData *taskData; // @synthesize taskData=_taskData;
@property(nonatomic) __weak id <WCFinderMinimizeDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
@property(retain, nonatomic) MMUIViewController *vc; // @synthesize vc=_vc;
- (void)onFinderFeedListFocusChanged:(id)arg1 contentVM:(id)arg2;
- (void)installPlayCtrl:(id)arg1;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *bizKey;
@property(readonly, nonatomic) NSString *bizName;
- (_Bool)hiddenFloatingView;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

