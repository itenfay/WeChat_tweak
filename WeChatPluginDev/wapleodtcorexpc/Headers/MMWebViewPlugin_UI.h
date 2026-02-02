//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface MMWebViewPlugin_UI
{
    _Bool _hasLongPress;
    _Bool _hasAppear;
    _Bool _isAnimate;
    double _lastScrollOffset;
    double _fullHeight;
    double _webBottomBarHeight;
    long long _didStartLoadTime;
    UIView *_navigationBarView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *navigationBarView; // @synthesize navigationBarView=_navigationBarView;
@property(nonatomic) _Bool isAnimate; // @synthesize isAnimate=_isAnimate;
@property(nonatomic) long long didStartLoadTime; // @synthesize didStartLoadTime=_didStartLoadTime;
@property(nonatomic) _Bool hasAppear; // @synthesize hasAppear=_hasAppear;
@property(nonatomic) double webBottomBarHeight; // @synthesize webBottomBarHeight=_webBottomBarHeight;
@property(nonatomic) double fullHeight; // @synthesize fullHeight=_fullHeight;
@property(nonatomic) double lastScrollOffset; // @synthesize lastScrollOffset=_lastScrollOffset;
@property(nonatomic) _Bool hasLongPress; // @synthesize hasLongPress=_hasLongPress;
- (void)handleTopBarAlphaByEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (_Bool)handleNewWebBarBottomEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)clearScrollBackgroundColor;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;

@end

