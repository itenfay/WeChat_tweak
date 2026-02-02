//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface LiteAppPageConfig : NSObject
{
    _Bool _useCoreText;
    unsigned long long _backgroundColor;
    unsigned long long _darkBackgroundColor;
    unsigned long long _titleBackgroundColor;
    unsigned long long _darkTitleBackgroundColor;
    long long _pageOrientation;
    NSString *_backgroundImagePath;
    NSString *_globalPkgAppId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *globalPkgAppId; // @synthesize globalPkgAppId=_globalPkgAppId;
@property(retain, nonatomic) NSString *backgroundImagePath; // @synthesize backgroundImagePath=_backgroundImagePath;
@property(nonatomic) _Bool useCoreText; // @synthesize useCoreText=_useCoreText;
@property(nonatomic) long long pageOrientation; // @synthesize pageOrientation=_pageOrientation;
@property(nonatomic) unsigned long long darkTitleBackgroundColor; // @synthesize darkTitleBackgroundColor=_darkTitleBackgroundColor;
@property(nonatomic) unsigned long long titleBackgroundColor; // @synthesize titleBackgroundColor=_titleBackgroundColor;
@property(nonatomic) unsigned long long darkBackgroundColor; // @synthesize darkBackgroundColor=_darkBackgroundColor;
@property(nonatomic) unsigned long long backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)currentBackgroundImage:(id)arg1;
- (id)currentTitleBackgroundColor;
- (id)currentBackgroundColor;
- (_Bool)darkMode;
- (_Bool)boolForKey:(id)arg1 key:(id)arg2;
- (unsigned long long)uintForKey:(id)arg1 key:(id)arg2 defaultValue:(unsigned long long)arg3;
- (long long)intForKey:(id)arg1 key:(id)arg2 defaultValue:(long long)arg3;
- (id)stringForKey:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (id)initWithJson:(id)arg1;

@end

