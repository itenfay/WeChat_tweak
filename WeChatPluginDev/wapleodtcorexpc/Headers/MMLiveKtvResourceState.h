//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, MMLiveKtvThemeItem, MMLiveStorageCleanupPinningToken, NSArray;

@interface MMLiveKtvResourceState : NSObject
{
    NSArray *_themes;
    NSArray *_reverbs;
    MMLiveKtvThemeItem *_currentTheme;
    MMFinderLiveTaskId *_taskId;
    MMLiveStorageCleanupPinningToken *_themeResourcesPinToken;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveStorageCleanupPinningToken *themeResourcesPinToken; // @synthesize themeResourcesPinToken=_themeResourcesPinToken;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) MMLiveKtvThemeItem *currentTheme; // @synthesize currentTheme=_currentTheme;
@property(retain, nonatomic) NSArray *reverbs; // @synthesize reverbs=_reverbs;
@property(retain, nonatomic) NSArray *themes; // @synthesize themes=_themes;
- (id)liveTask;
- (id)initWithTaskId:(id)arg1;

@end

