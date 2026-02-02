//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiveChooseClarityCacheInfo : NSObject
{
    unsigned int _settingTime;
    unsigned int _cdnQualityTag;
    unsigned int _currentUin;
    unsigned int _mediaType;
    unsigned int _videoQualityLevel;
    unsigned long long _liveTaskId;
    NSString *_tagName;
    NSString *_videoQualityLevelDesc;
}

+ (void)initialize;
+ (void)PBArrayAdd_videoQualityLevel;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_currentUin;
+ (void)PBArrayAdd_cdnQualityTag;
+ (void)PBArrayAdd_settingTime;
+ (void)PBArrayAdd_videoQualityLevelDesc;
+ (void)PBArrayAdd_tagName;
+ (void)PBArrayAdd_liveTaskId;
- (void).cxx_destruct;
@property(nonatomic) unsigned int videoQualityLevel; // @synthesize videoQualityLevel=_videoQualityLevel;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) unsigned int currentUin; // @synthesize currentUin=_currentUin;
@property(nonatomic) unsigned int cdnQualityTag; // @synthesize cdnQualityTag=_cdnQualityTag;
@property(nonatomic) unsigned int settingTime; // @synthesize settingTime=_settingTime;
@property(retain, nonatomic) NSString *videoQualityLevelDesc; // @synthesize videoQualityLevelDesc=_videoQualityLevelDesc;
@property(retain, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) unsigned long long liveTaskId; // @synthesize liveTaskId=_liveTaskId;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

