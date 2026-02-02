//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TPLock;
@protocol ITPReportWrapper;

@interface TPRichMediaSynchronizerReportPlugin : NSObject
{
    id <ITPReportWrapper> _beaconReporter;
    TPLock *_lock;
    NSString *_flowId;
    NSString *_url;
    NSArray *_features;
    long long _selectSeq;
    long long _callbackDataSeq;
    long long _currentPositionMs;
    long long _prepareStartTimeMs;
    NSMutableArray *_selectFeatureParams;
    NSMutableDictionary *_callbackDataParams;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *callbackDataParams; // @synthesize callbackDataParams=_callbackDataParams;
@property(retain, nonatomic) NSMutableArray *selectFeatureParams; // @synthesize selectFeatureParams=_selectFeatureParams;
@property(nonatomic) long long prepareStartTimeMs; // @synthesize prepareStartTimeMs=_prepareStartTimeMs;
@property(nonatomic) long long currentPositionMs; // @synthesize currentPositionMs=_currentPositionMs;
@property(nonatomic) long long callbackDataSeq; // @synthesize callbackDataSeq=_callbackDataSeq;
@property(nonatomic) long long selectSeq; // @synthesize selectSeq=_selectSeq;
@property(copy, nonatomic) NSArray *features; // @synthesize features=_features;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(retain, nonatomic) TPLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) id <ITPReportWrapper> beaconReporter; // @synthesize beaconReporter=_beaconReporter;
- (void)reportEvent:(id)arg1 withParams:(id)arg2;
- (id)commonReportParams;
- (void)reportFeatureDataCallback:(id)arg1 featureType:(id)arg2 code:(int)arg3;
- (void)reportFeatureSelect:(id)arg1 featureType:(id)arg2 code:(int)arg3;
- (void)reportRichMediaPreparedWithCode:(int)arg1;
- (id)featureTypeWithFeatureIndex:(int)arg1;
- (void)featureDataCallbackDone:(int)arg1 code:(int)arg2;
- (void)featureSelectDoneWithFeatureIndex:(int)arg1 code:(int)arg2;
- (void)allFeatureDataCallbackDoneWithCode:(int)arg1;
- (void)allFeatureSelectDoneWithCode:(int)arg1;
- (void)clearResource;
- (void)finishReportWithCode:(int)arg1;
- (void)finishReportAndClearResourceWithCode:(int)arg1;
- (void)onUpdatePosition:(id)arg1;
- (void)onFeatureFailure:(id)arg1;
- (void)onError:(id)arg1;
- (void)onRelease;
- (void)onReset;
- (void)onDeselectDone:(id)arg1;
- (void)onStartDeselect:(id)arg1;
- (void)onSelectDone:(id)arg1;
- (void)onStartSelect:(id)arg1;
- (void)onPrepared:(id)arg1;
- (void)onStartPrepare;
- (void)onSetUrl:(id)arg1;
- (void)onEvent:(unsigned long long)arg1 withUserInfo:(id)arg2;
- (void)onDetach;
- (void)onAttatch;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

