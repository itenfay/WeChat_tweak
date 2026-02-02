//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface OMJCamTemplateInfo : NSObject
{
    _Bool _isUseFrontCamera;
    _Bool _isOSTEnabled;
    _Bool _hasAIGCFeature;
    unsigned long long _supportedImportedAssetCount;
    NSArray *_musicInfos;
    CDStruct_1b6d18a9 _minRecordingDuration;
    CDStruct_1b6d18a9 _maxRecordingDuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *musicInfos; // @synthesize musicInfos=_musicInfos;
@property(readonly, nonatomic) _Bool hasAIGCFeature; // @synthesize hasAIGCFeature=_hasAIGCFeature;
@property(readonly, nonatomic) unsigned long long supportedImportedAssetCount; // @synthesize supportedImportedAssetCount=_supportedImportedAssetCount;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxRecordingDuration; // @synthesize maxRecordingDuration=_maxRecordingDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minRecordingDuration; // @synthesize minRecordingDuration=_minRecordingDuration;
@property(readonly, nonatomic) _Bool isOSTEnabled; // @synthesize isOSTEnabled=_isOSTEnabled;
@property(readonly, nonatomic) _Bool isUseFrontCamera; // @synthesize isUseFrontCamera=_isUseFrontCamera;
- (id)initWithBackingTemplateInfo:(struct XMJCamTemplateInfo)arg1;

@end

