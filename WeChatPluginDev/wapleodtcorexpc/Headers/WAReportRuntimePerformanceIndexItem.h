//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WAReportRuntimePerformanceIndexItem
{
    _Bool _isGame;
    _Bool _enableSkyline;
    _Bool _bytecodeEnabled;
    unsigned int _reportScene;
    unsigned int _reportSceneCurrentCount;
    unsigned int _indexType;
    unsigned int _sampleCount;
    unsigned int _runtimeCount;
    unsigned int _skylineCount;
    unsigned int _webViewCount;
    unsigned long long _indexNumBeforeLaunch;
    unsigned long long _indexNumInCurrentScene;
    unsigned long long _indexAvgSampleNumInCurrentLifeSpan;
    unsigned long long _indexMaxSampleNumInCurrentLifeSpan;
}

@property(nonatomic) _Bool bytecodeEnabled; // @synthesize bytecodeEnabled=_bytecodeEnabled;
@property(nonatomic) unsigned int webViewCount; // @synthesize webViewCount=_webViewCount;
@property(nonatomic) unsigned int skylineCount; // @synthesize skylineCount=_skylineCount;
@property(nonatomic) _Bool enableSkyline; // @synthesize enableSkyline=_enableSkyline;
@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(nonatomic) unsigned int runtimeCount; // @synthesize runtimeCount=_runtimeCount;
@property(nonatomic) unsigned int sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long indexMaxSampleNumInCurrentLifeSpan; // @synthesize indexMaxSampleNumInCurrentLifeSpan=_indexMaxSampleNumInCurrentLifeSpan;
@property(nonatomic) unsigned long long indexAvgSampleNumInCurrentLifeSpan; // @synthesize indexAvgSampleNumInCurrentLifeSpan=_indexAvgSampleNumInCurrentLifeSpan;
@property(nonatomic) unsigned long long indexNumInCurrentScene; // @synthesize indexNumInCurrentScene=_indexNumInCurrentScene;
@property(nonatomic) unsigned long long indexNumBeforeLaunch; // @synthesize indexNumBeforeLaunch=_indexNumBeforeLaunch;
@property(nonatomic) unsigned int indexType; // @synthesize indexType=_indexType;
@property(nonatomic) unsigned int reportSceneCurrentCount; // @synthesize reportSceneCurrentCount=_reportSceneCurrentCount;
@property(nonatomic) unsigned int reportScene; // @synthesize reportScene=_reportScene;
- (id)reportString;
- (int)reportID;

// Remaining properties
@property(nonatomic) unsigned int engineType;

@end

