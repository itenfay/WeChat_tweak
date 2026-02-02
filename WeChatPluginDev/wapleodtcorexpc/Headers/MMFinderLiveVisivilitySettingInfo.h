//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray;

@interface MMFinderLiveVisivilitySettingInfo : NSObject
{
    _Bool _isModified;
    int _currentLiveMode;
    long long _currentVisibilityMode;
    NSArray *_allVisibilityFileList;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isModified; // @synthesize isModified=_isModified;
@property(retain, nonatomic) NSArray *allVisibilityFileList; // @synthesize allVisibilityFileList=_allVisibilityFileList;
@property(nonatomic) long long currentVisibilityMode; // @synthesize currentVisibilityMode=_currentVisibilityMode;
@property(nonatomic) int currentLiveMode; // @synthesize currentLiveMode=_currentLiveMode;
- (id)audienceFileListWithFileLists:(id)arg1;
- (id)getDefaultDescription;
- (id)getDescriptionForCurrentSetting;
- (id)getSettingDescription;
- (_Bool)isSettingEnabled;
- (void)recoverInfosToInitParam:(id)arg1;
- (void)copyInfosFromSettingInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

