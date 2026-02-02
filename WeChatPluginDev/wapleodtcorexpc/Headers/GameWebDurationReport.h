//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableDictionary, NSMutableString, NSNumber, NSString, UIViewController;

@interface GameWebDurationReport
{
    _Bool _visible;
    _Bool _gcReportIsVisible;
    _Bool _gcReportIsViewDidAppear;
    _Bool _hasEndReport;
    _Bool _hasBeenVisible;
    _Bool _beLiteApp;
    UIViewController *_reportVc;
    NSNumber *_ssIdNum;
    unsigned long long _durationInterval;
    unsigned long long _lastVisibleTime;
    NSString *_reportVcDesc;
    NSMutableString *_durationReportStr;
    NSString *_url;
    NSMutableDictionary *_externInfoDict;
    unsigned long long _clientDurationGap;
}

+ (unsigned long long)getMonotonicTimeInMillseconds;
- (void).cxx_destruct;
@property(nonatomic) _Bool beLiteApp; // @synthesize beLiteApp=_beLiteApp;
@property(nonatomic) unsigned long long clientDurationGap; // @synthesize clientDurationGap=_clientDurationGap;
@property(retain, nonatomic) NSMutableDictionary *externInfoDict; // @synthesize externInfoDict=_externInfoDict;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSMutableString *durationReportStr; // @synthesize durationReportStr=_durationReportStr;
@property(retain, nonatomic) NSString *reportVcDesc; // @synthesize reportVcDesc=_reportVcDesc;
@property(nonatomic) _Bool hasBeenVisible; // @synthesize hasBeenVisible=_hasBeenVisible;
@property(nonatomic) _Bool hasEndReport; // @synthesize hasEndReport=_hasEndReport;
@property(nonatomic) _Bool gcReportIsViewDidAppear; // @synthesize gcReportIsViewDidAppear=_gcReportIsViewDidAppear;
@property(nonatomic) _Bool gcReportIsVisible; // @synthesize gcReportIsVisible=_gcReportIsVisible;
@property(nonatomic) unsigned long long lastVisibleTime; // @synthesize lastVisibleTime=_lastVisibleTime;
@property(nonatomic) unsigned long long durationInterval; // @synthesize durationInterval=_durationInterval;
@property(retain, nonatomic) NSNumber *ssIdNum; // @synthesize ssIdNum=_ssIdNum;
@property(nonatomic) __weak UIViewController *reportVc; // @synthesize reportVc=_reportVc;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)dealloc;
- (void)report27743Data:(id)arg1 duration:(unsigned long long)arg2 externInfoDict:(id)arg3;
- (_Bool)checkFinderEntryLiteApp:(id)arg1;
- (void)report27743WithUrl:(id)arg1 duration:(unsigned long long)arg2 externInfoDict:(id)arg3;
- (void)addAdditionReportDurationInfo:(id)arg1;
- (void)handleExit:(_Bool)arg1;
- (void)onDealloc;
- (void)viewDidBePoped;
- (void)reportOnVisibleChange:(_Bool)arg1 reason:(id)arg2;
- (void)markVisibleEnd:(id)arg1 fromDealloc:(_Bool)arg2;
- (void)markVisibleEnd:(id)arg1;
- (void)markVisibleBegin:(id)arg1;
- (_Bool)isVc:(id)arg1 childViewControllOfVc:(id)arg2;
- (_Bool)checkShouldBeInStack;
- (_Bool)checkShouldHandleBackgroundChange:(_Bool)arg1;
- (void)reportApplicationDidEnterBackground;
- (void)reportApplicationWillEnterForeground;
- (void)onViewDidDisappear;
- (void)onViewDidAppear;
- (id)description;
- (id)initWithReportVc:(id)arg1 url:(id)arg2;
- (id)initWithReportVc:(id)arg1 url:(id)arg2 fromLite:(_Bool)arg3;

@end

