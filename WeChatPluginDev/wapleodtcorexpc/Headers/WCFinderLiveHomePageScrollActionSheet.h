//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString, WCFinderFeedContentVM;

@interface WCFinderLiveHomePageScrollActionSheet
{
    _Bool _forceDarkMode;
    unsigned long long _containerId;
    WCFinderFeedContentVM *_contentVM;
    NSArray *_itemArrayConfig;
    long long _liveShareScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool forceDarkMode; // @synthesize forceDarkMode=_forceDarkMode;
@property(nonatomic) long long liveShareScene; // @synthesize liveShareScene=_liveShareScene;
@property(retain, nonatomic) NSArray *itemArrayConfig; // @synthesize itemArrayConfig=_itemArrayConfig;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) unsigned long long containerId; // @synthesize containerId=_containerId;
- (id)seperatorBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)cancelButtonTitleColor;
- (id)titleLabelColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)transparentViewBackgroundColor;
- (void)configScrollActionSheet:(id)arg1 rowIndex:(unsigned long long)arg2;
- (_Bool)_itemEnable:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)getRowItems:(unsigned long long)arg1 contentVM:(id)arg2;
- (id)genMenuIconArray:(id)arg1 contentVM:(id)arg2;
- (_Bool)hasItem:(unsigned long long)arg1;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)arg1 screenWid:(double)arg2 scene:(unsigned long long)arg3 msgType:(unsigned int)arg4 innerAppMsgType:(unsigned int)arg5;
- (id)_getFinderDisableColor;
- (id)initWithContentVM:(id)arg1 containerId:(unsigned long long)arg2 forceDarkMode:(_Bool)arg3;
- (id)initWithContentVM:(id)arg1 containerId:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

