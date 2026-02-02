//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TemplateWebSearchOPWrap : NSObject
{
    _Bool _isHomePage;
    _Bool _hideSearchBar;
    unsigned long long _scene;
    NSString *_query;
    NSString *_extParams;
    NSString *_thirdExtParam;
    unsigned long long _bizType;
    NSString *_navBarTitle;
}

+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)opWrapWithJSON:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(nonatomic) _Bool hideSearchBar; // @synthesize hideSearchBar=_hideSearchBar;
@property(nonatomic) _Bool isHomePage; // @synthesize isHomePage=_isHomePage;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *thirdExtParam; // @synthesize thirdExtParam=_thirdExtParam;
@property(copy, nonatomic) NSString *extParams; // @synthesize extParams=_extParams;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;

@end

