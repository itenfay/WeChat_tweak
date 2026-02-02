//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface QBPreferencesManager : NSObject
{
    NSMutableDictionary *_preferencesDic;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *preferencesDic; // @synthesize preferencesDic=_preferencesDic;
- (void).cxx_destruct;
- (id)getPreferencesContentMd5;
- (id)stringValueForPreference:(id)arg1 defaultValue:(id)arg2;
- (long long)intValueForPreference:(id)arg1 defaultValue:(long long)arg2;
- (_Bool)isPreferenceSwitcherOn:(id)arg1 nilIsOn:(_Bool)arg2;
- (void)saveTimeStamp:(long long)arg1 contentMd5:(id)arg2;
- (void)resetPreferencesDic:(id)arg1;
- (void)loadFromLocalFile;
- (id)init;

@end

