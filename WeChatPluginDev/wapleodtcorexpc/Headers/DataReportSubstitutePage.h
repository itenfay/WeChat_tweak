//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface DataReportSubstitutePage : NSObject
{
    _Bool _is4TabOfLauncherUI;
    _Bool _isFullSubPage;
    _Bool _isSubPage;
    _Bool _isParentPage;
    _Bool _isFlutterPage;
    unsigned long long _pageHash;
    NSString *_pageHashStr;
    NSString *_pageName;
    long long _stackDeep;
}

- (void).cxx_destruct;
@property(nonatomic) long long stackDeep; // @synthesize stackDeep=_stackDeep;
@property(nonatomic) _Bool isFlutterPage; // @synthesize isFlutterPage=_isFlutterPage;
@property(nonatomic) _Bool isParentPage; // @synthesize isParentPage=_isParentPage;
@property(nonatomic) _Bool isSubPage; // @synthesize isSubPage=_isSubPage;
@property(nonatomic) _Bool isFullSubPage; // @synthesize isFullSubPage=_isFullSubPage;
@property(nonatomic) _Bool is4TabOfLauncherUI; // @synthesize is4TabOfLauncherUI=_is4TabOfLauncherUI;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *pageHashStr; // @synthesize pageHashStr=_pageHashStr;
@property(nonatomic) unsigned long long pageHash; // @synthesize pageHash=_pageHash;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)toString;
- (_Bool)isEqualHash:(unsigned long long)arg1 pageName:(id)arg2;
- (_Bool)isEqualHash:(unsigned long long)arg1;
- (_Bool)isEqualSubstitutePage:(id)arg1;
- (_Bool)isEqualObject:(id)arg1;
- (id)initWithPageHash:(unsigned long long)arg1 withPageName:(id)arg2;
- (id)initWithObj:(id)arg1;
- (id)init;

@end

