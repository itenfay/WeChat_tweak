//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FinderLiveQoSInfo, MISSING_TYPE;

@interface _TtC6WeChat36MMFinderLiveTaskKaraQualityStepState : NSObject
{
    MISSING_TYPE *QoS;
    MISSING_TYPE *videoQualityLevel;
    MISSING_TYPE *isH265;
    MISSING_TYPE *isEnhanceEnabled;
    MISSING_TYPE *isAutoSwitchStreamConfigEnabled;
    MISSING_TYPE *autoSwitchStreamMinInterval;
    MISSING_TYPE *autoSwitchStreamMaxCount;
    MISSING_TYPE *useSmoothSwitchStreamMode;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithQoS:(id)arg1 videoQualityLevel:(int)arg2 isH265:(_Bool)arg3 isEnhanceEnabled:(_Bool)arg4 isAutoSwitchStreamConfigEnabled:(_Bool)arg5 autoSwitchStreamMinInterval:(long long)arg6 autoSwitchStreamMaxCount:(long long)arg7 useSmoothSwitchStreamMode:(_Bool)arg8;
@property(nonatomic) _Bool useSmoothSwitchStreamMode; // @synthesize useSmoothSwitchStreamMode;
@property(nonatomic) long long autoSwitchStreamMaxCount; // @synthesize autoSwitchStreamMaxCount;
@property(nonatomic) long long autoSwitchStreamMinInterval; // @synthesize autoSwitchStreamMinInterval;
@property(nonatomic) _Bool isAutoSwitchStreamConfigEnabled; // @synthesize isAutoSwitchStreamConfigEnabled;
@property(nonatomic) _Bool isEnhanceEnabled; // @synthesize isEnhanceEnabled;
@property(nonatomic) _Bool isH265; // @synthesize isH265;
@property(nonatomic) int videoQualityLevel; // @synthesize videoQualityLevel;
@property(nonatomic, retain) FinderLiveQoSInfo *QoS; // @synthesize QoS;

@end

