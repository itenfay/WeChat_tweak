//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, ProtobufCGIProfile;

@interface WCFinderMoreLiveFluencyInfo : NSObject
{
    unsigned long long _enterTimestamp;
    unsigned long long _getLiveTabsFinishTimestamp;
    ProtobufCGIProfile *_cgiProfile;
    long long _startScene;
    unsigned long long _finishScene;
    unsigned long long _pullStreamCGITimestamp;
    unsigned long long _pullCGIFinishTimestamp;
    unsigned long long _uiStartLoadingTimestamp;
    unsigned long long _uiFinishLoadingTimestamp;
    NSData *_debugMessage;
    unsigned long long _localOperationFinishTimestamp;
    unsigned long long _showUIFinishTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long showUIFinishTimestamp; // @synthesize showUIFinishTimestamp=_showUIFinishTimestamp;
@property(nonatomic) unsigned long long localOperationFinishTimestamp; // @synthesize localOperationFinishTimestamp=_localOperationFinishTimestamp;
@property(copy, nonatomic) NSData *debugMessage; // @synthesize debugMessage=_debugMessage;
@property(nonatomic) unsigned long long uiFinishLoadingTimestamp; // @synthesize uiFinishLoadingTimestamp=_uiFinishLoadingTimestamp;
@property(nonatomic) unsigned long long uiStartLoadingTimestamp; // @synthesize uiStartLoadingTimestamp=_uiStartLoadingTimestamp;
@property(nonatomic) unsigned long long pullCGIFinishTimestamp; // @synthesize pullCGIFinishTimestamp=_pullCGIFinishTimestamp;
@property(nonatomic) unsigned long long pullStreamCGITimestamp; // @synthesize pullStreamCGITimestamp=_pullStreamCGITimestamp;
@property(nonatomic) unsigned long long finishScene; // @synthesize finishScene=_finishScene;
@property(nonatomic) long long startScene; // @synthesize startScene=_startScene;
@property(retain, nonatomic) ProtobufCGIProfile *cgiProfile; // @synthesize cgiProfile=_cgiProfile;
@property(nonatomic) unsigned long long getLiveTabsFinishTimestamp; // @synthesize getLiveTabsFinishTimestamp=_getLiveTabsFinishTimestamp;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
- (_Bool)setGetLiveTabCGIFinishTimeIfCan:(unsigned long long)arg1;
- (_Bool)setShowUIFinishTimeIfCan:(unsigned long long)arg1;
- (_Bool)setLocalOperationFinishTimeIfCan:(unsigned long long)arg1;
- (_Bool)setPullCGIFinishProfileIfCan:(id)arg1;
- (_Bool)setPullCGIFinishTimeIfCan:(unsigned long long)arg1;
- (_Bool)setPullStreamCGITimeIfCan:(unsigned long long)arg1;
- (_Bool)setEnterTimestampIfCan:(unsigned long long)arg1;
- (_Bool)setFinishSceneIfCan:(unsigned long long)arg1;
- (_Bool)setStartSceneIfCan:(long long)arg1;
- (unsigned long long)loadingTime;
- (unsigned long long)totalTime;
- (_Bool)setUIFinishLoadingTimeIfCan:(unsigned long long)arg1;
- (_Bool)setUIStartLoadingTimeIfCan:(unsigned long long)arg1;
- (unsigned long long)showUITime;
- (unsigned long long)localOperationTime;
- (_Bool)setDebugMessageIfCan:(id)arg1;
- (unsigned long long)pullCGITime;
- (unsigned long long)globalInitTime;
- (void)clear;
- (_Bool)isReadyForReporting;
- (id)genFluencyInfo;

@end

