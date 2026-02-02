//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface MJTemplateActivity : NSObject
{
    _Bool _hasAppeared;
    _Bool _isUserActionManuallyCheckedOnTipsShow;
    _Bool _shouldRemoveOnPickerAppear;
    _Bool _isValid;
    NSDictionary *_activityInfo;
    long long _beginTime;
    long long _endTime;
    double _maxDisplayDuration;
    long long _maxDisplayTimesPerDay;
    long long _minDisplayInterval;
    NSString *_tips;
    long long _maasEventType;
    NSString *_sessionID;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) _Bool shouldRemoveOnPickerAppear; // @synthesize shouldRemoveOnPickerAppear=_shouldRemoveOnPickerAppear;
@property(nonatomic) _Bool isUserActionManuallyCheckedOnTipsShow; // @synthesize isUserActionManuallyCheckedOnTipsShow=_isUserActionManuallyCheckedOnTipsShow;
@property(nonatomic) _Bool hasAppeared; // @synthesize hasAppeared=_hasAppeared;
@property(nonatomic) long long maasEventType; // @synthesize maasEventType=_maasEventType;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) long long minDisplayInterval; // @synthesize minDisplayInterval=_minDisplayInterval;
@property(nonatomic) long long maxDisplayTimesPerDay; // @synthesize maxDisplayTimesPerDay=_maxDisplayTimesPerDay;
@property(nonatomic) double maxDisplayDuration; // @synthesize maxDisplayDuration=_maxDisplayDuration;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSDictionary *activityInfo; // @synthesize activityInfo=_activityInfo;
- (void)doActivityReport:(unsigned long long)arg1;
- (_Bool)isTipsMeetExpectations;
- (double)tipsDisplayDuration;
- (id)displayTips;
- (_Bool)canShowTips;
- (void)didClickCloseTipsButton;
- (void)didClickTips;
- (void)didShowTips;
@property(readonly, copy) NSString *description;
- (void)reloadData;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

