//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderJustWatchContoller : NSObject
{
    _Bool _isLoading;
    _Bool _feedPageSelectTag;
    _Bool _showAnyBanner;
    _Bool _hiddenJustWatchBanner;
    NSString *_justWatchTid;
    NSString *_notifykey;
    long long _watchIndex;
    long long _state;
}

+ (id)controllerWithNotifyKey:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool hiddenJustWatchBanner; // @synthesize hiddenJustWatchBanner=_hiddenJustWatchBanner;
@property(nonatomic) long long watchIndex; // @synthesize watchIndex=_watchIndex;
@property(retain, nonatomic) NSString *notifykey; // @synthesize notifykey=_notifykey;
@property(nonatomic) _Bool showAnyBanner; // @synthesize showAnyBanner=_showAnyBanner;
@property(nonatomic) _Bool feedPageSelectTag; // @synthesize feedPageSelectTag=_feedPageSelectTag;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSString *justWatchTid; // @synthesize justWatchTid=_justWatchTid;
- (void)cleanJustWatch;
- (void)notifyJustWatchCellDisplayed;
- (void)onClickJumpToFeed;
- (_Bool)isJustWatchingFeed:(id)arg1;
- (void)onHalfJumpFullScreenTryPost;
- (void)_triggleJustWatchDisplay;
- (void)onProfileTabChangeTriggeJustWatch;
- (void)onFinishLoadShowAnyJustWatch:(id)arg1;
- (void)loadJustWtachRespCtrl:(id)arg1 tid:(id)arg2;

@end

