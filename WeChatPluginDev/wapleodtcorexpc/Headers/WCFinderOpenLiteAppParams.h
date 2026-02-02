//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UINavigationController;
@protocol WCFinderLiteAppInfoProvider;

@interface WCFinderOpenLiteAppParams : NSObject
{
    _Bool _animated;
    _Bool _withFallback;
    id <WCFinderLiteAppInfoProvider> _liteAppInfoProvider;
    NSString *_defaultURL;
    UINavigationController *_navVC;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _liteAppCloseBlock;
}

+ (id)paramsWithAppId:(id)arg1 page:(id)arg2 query:(id)arg3 defaultURL:(id)arg4 navVC:(id)arg5;
+ (id)paramsWithLiteAppInfoProvider:(id)arg1 defaultURL:(id)arg2 navVC:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType liteAppCloseBlock; // @synthesize liteAppCloseBlock=_liteAppCloseBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) _Bool withFallback; // @synthesize withFallback=_withFallback;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) UINavigationController *navVC; // @synthesize navVC=_navVC;
@property(copy, nonatomic) NSString *defaultURL; // @synthesize defaultURL=_defaultURL;
@property(retain, nonatomic) id <WCFinderLiteAppInfoProvider> liteAppInfoProvider; // @synthesize liteAppInfoProvider=_liteAppInfoProvider;
- (id)init;

@end

