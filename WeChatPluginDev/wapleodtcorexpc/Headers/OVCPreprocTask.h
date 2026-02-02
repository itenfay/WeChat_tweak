//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface OVCPreprocTask : NSObject
{
    _Bool _isAudioAnalysisEnabled;
    int _priority;
    NSString *_localIdentifier;
    NSString *_filePath;
    long long _assetMediaType;
    unsigned long long _transcodePolicy;
    unsigned long long _transcodeDimensionLevel;
    NSString *_analysisParams;
}

+ (id)taskWithFilePath:(id)arg1 assetMediaType:(long long)arg2 priority:(int)arg3 transcodePolicy:(unsigned long long)arg4 analysisParams:(id)arg5;
+ (id)taskWithLocalIdentifier:(id)arg1 priority:(int)arg2 transcodePolicy:(unsigned long long)arg3 analysisParams:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *analysisParams; // @synthesize analysisParams=_analysisParams;
@property(nonatomic) _Bool isAudioAnalysisEnabled; // @synthesize isAudioAnalysisEnabled=_isAudioAnalysisEnabled;
@property(nonatomic) unsigned long long transcodeDimensionLevel; // @synthesize transcodeDimensionLevel=_transcodeDimensionLevel;
@property(readonly, nonatomic) unsigned long long transcodePolicy; // @synthesize transcodePolicy=_transcodePolicy;
@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) long long assetMediaType; // @synthesize assetMediaType=_assetMediaType;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
- (id)initWithFilePath:(id)arg1 assetMediaType:(long long)arg2 priority:(int)arg3 transcodePolicy:(unsigned long long)arg4 analysisParams:(id)arg5;
- (id)initWithLocalIdentifier:(id)arg1 priority:(int)arg2 transcodePolicy:(unsigned long long)arg3 analysisParams:(id)arg4;

@end

