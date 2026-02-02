//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class ActiveSessionContext, NSString, TingEntranceReddotInfo, TingItem, TingLaunchOptionsNextPage, TingLaunchOptionsOpenPlayerTab, TingListSourceContext, UIViewController;

@interface TingLaunchOptions : NSObject
{
    _Bool _disableAutoTabSwitch;
    _Bool _realFocusOnLateListen;
    _Bool _playManually;
    _Bool _isFromFinderProfileAuthor;
    _Bool _refreshMusicSquarePreload;
    _Bool _skipRefreshIfCreate;
    _Bool _hasSquare;
    _Bool _forceObliterateOther;
    int _scene;
    int _displayMode;
    unsigned long long _bizType;
    TingLaunchOptionsNextPage *_nextPage;
    UIViewController *_fromViewController;
    ActiveSessionContext *_sessionContext;
    TingLaunchOptionsOpenPlayerTab *_openPlayerTab;
    NSString *_categoryCommentId;
    unsigned long long _resetOptions;
    NSString *_focusListId;
    TingListSourceContext *_focusListContext;
    TingItem *_tingItem;
    unsigned long long _launchType;
    TingEntranceReddotInfo *_entranceReddotInfo;
}

+ (id)unsafeLaunchOptionsWithLaunchOptions:(id)arg1 scene:(int)arg2;
+ (id)launchOptionsWithScene:(int)arg1;
+ (int)tingProfileScene:(int)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool forceObliterateOther; // @synthesize forceObliterateOther=_forceObliterateOther;
@property(nonatomic) _Bool hasSquare; // @synthesize hasSquare=_hasSquare;
@property(nonatomic) _Bool skipRefreshIfCreate; // @synthesize skipRefreshIfCreate=_skipRefreshIfCreate;
@property(retain, nonatomic) TingEntranceReddotInfo *entranceReddotInfo; // @synthesize entranceReddotInfo=_entranceReddotInfo;
@property(nonatomic) _Bool refreshMusicSquarePreload; // @synthesize refreshMusicSquarePreload=_refreshMusicSquarePreload;
@property(nonatomic) _Bool isFromFinderProfileAuthor; // @synthesize isFromFinderProfileAuthor=_isFromFinderProfileAuthor;
@property(nonatomic) _Bool playManually; // @synthesize playManually=_playManually;
@property(nonatomic) unsigned long long launchType; // @synthesize launchType=_launchType;
@property(retain, nonatomic) TingItem *tingItem; // @synthesize tingItem=_tingItem;
@property(retain, nonatomic) TingListSourceContext *focusListContext; // @synthesize focusListContext=_focusListContext;
@property(retain, nonatomic) NSString *focusListId; // @synthesize focusListId=_focusListId;
@property(nonatomic) _Bool realFocusOnLateListen; // @synthesize realFocusOnLateListen=_realFocusOnLateListen;
@property(nonatomic) _Bool disableAutoTabSwitch; // @synthesize disableAutoTabSwitch=_disableAutoTabSwitch;
@property(nonatomic) unsigned long long resetOptions; // @synthesize resetOptions=_resetOptions;
@property(copy, nonatomic) NSString *categoryCommentId; // @synthesize categoryCommentId=_categoryCommentId;
@property(retain, nonatomic) TingLaunchOptionsOpenPlayerTab *openPlayerTab; // @synthesize openPlayerTab=_openPlayerTab;
@property(retain, nonatomic) ActiveSessionContext *sessionContext; // @synthesize sessionContext=_sessionContext;
@property(nonatomic) __weak UIViewController *fromViewController; // @synthesize fromViewController=_fromViewController;
@property(retain, nonatomic) TingLaunchOptionsNextPage *nextPage; // @synthesize nextPage=_nextPage;
@property(nonatomic) unsigned long long bizType; // @synthesize bizType=_bizType;
@property(nonatomic) int displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool enterPlayer;
- (id)initWithScene:(int)arg1;
- (id)flutterRouterName;
- (id)flutterInitRouterName;
- (id)flutterRouterParams;

@end

