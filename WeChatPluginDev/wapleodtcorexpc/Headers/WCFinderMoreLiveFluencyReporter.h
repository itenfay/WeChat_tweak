//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface WCFinderMoreLiveFluencyReporter : NSObject
{
    NSMutableArray *_infoBuffer;
    NSMutableDictionary *_infoDict;
    NSMutableArray *_skipReportScenes;
}

+ (id)sharedReporter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *skipReportScenes; // @synthesize skipReportScenes=_skipReportScenes;
@property(retain, nonatomic) NSMutableDictionary *infoDict; // @synthesize infoDict=_infoDict;
@property(retain, nonatomic) NSMutableArray *infoBuffer; // @synthesize infoBuffer=_infoBuffer;
- (void)skipSpecificReport:(int)arg1;
- (void)clearFluencyReportData;
- (void)reportIfOkWithReportScene:(int)arg1;
- (id)getFluencyReportInfoWithReportScene:(int)arg1;
- (_Bool)setUIFinishLoadingTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (_Bool)setUIStartLoadingTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setShowUIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setDebugMessageIfCan:(id)arg1 reportScene:(int)arg2;
- (void)setLocalOperationFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setPullCGIFinishProfileIfCan:(id)arg1 reportScene:(int)arg2;
- (void)setPullLbsCGIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setPullLbsStreamCGITimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setGetLiveTabsCGIFinishTimeIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setEnterTimestampIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setFinishSceneIfCan:(unsigned long long)arg1 reportScene:(int)arg2;
- (void)setStartSceneIfCan:(long long)arg1 reportScene:(int)arg2;

@end

