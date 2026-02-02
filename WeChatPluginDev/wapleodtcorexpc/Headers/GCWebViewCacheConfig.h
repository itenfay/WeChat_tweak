//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIViewController;

@interface GCWebViewCacheConfig : NSObject
{
    _Bool _isHalfScreen;
    _Bool _reCreateAfterUsed;
    NSString *_url;
    NSString *_customDataStr;
    UIViewController *_viewController;
    CDUnknownBlockType _onCloseBlock;
    double _webviewHeight;
    NSString *_reuseIndentifier;
    UIColor *_backGroundColor;
    NSString *_preinjectData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *preinjectData; // @synthesize preinjectData=_preinjectData;
@property(retain, nonatomic) UIColor *backGroundColor; // @synthesize backGroundColor=_backGroundColor;
@property(nonatomic) _Bool reCreateAfterUsed; // @synthesize reCreateAfterUsed=_reCreateAfterUsed;
@property(retain, nonatomic) NSString *reuseIndentifier; // @synthesize reuseIndentifier=_reuseIndentifier;
@property(nonatomic) _Bool isHalfScreen; // @synthesize isHalfScreen=_isHalfScreen;
@property(nonatomic) double webviewHeight; // @synthesize webviewHeight=_webviewHeight;
@property(copy, nonatomic) CDUnknownBlockType onCloseBlock; // @synthesize onCloseBlock=_onCloseBlock;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSString *customDataStr; // @synthesize customDataStr=_customDataStr;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;

@end

