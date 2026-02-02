//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class EmoticonBoardView, NSString, UIViewController;
@protocol ILiteAppJsApiPluginControllerProtocol, LiteAppLifeCycleCallbackDelegate;

@interface LiteAppEmoticonContext : NSObject
{
    unsigned int _appUuid;
    EmoticonBoardView *_emoticonBoardView;
    UIViewController<ILiteAppJsApiPluginControllerProtocol> *_liteAppVC;
    id <LiteAppLifeCycleCallbackDelegate> _preLifeCycleDelegate;
}

+ (id)getFlutterViewWithController:(id)arg1;
+ (id)getEmoticonPanelWithUIViewController:(id)arg1;
+ (id)liteAppEmoticonContextTag;
- (void).cxx_destruct;
@property(nonatomic) __weak id <LiteAppLifeCycleCallbackDelegate> preLifeCycleDelegate; // @synthesize preLifeCycleDelegate=_preLifeCycleDelegate;
@property(nonatomic) __weak UIViewController<ILiteAppJsApiPluginControllerProtocol> *liteAppVC; // @synthesize liteAppVC=_liteAppVC;
@property(retain, nonatomic) EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) unsigned int appUuid; // @synthesize appUuid=_appUuid;
- (void)onLiteAppClose:(id)arg1 appUuid:(unsigned int)arg2 extraData:(id)arg3;
- (void)onLiteAppViewLifeCycleEvent:(unsigned long long)arg1;
- (void)onSearchEmoticonViewControllerDidClose;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)arg1;
- (id)GetCurrentViewController;
- (void)onEmoticonSearchIconClicked;
- (void)onEmoticonBoardHeightChanged;
- (void)onSendButtonClicked;
- (void)deleteEmoticon;
- (void)didSelectorSelfDefinedEmotcion:(id)arg1;
- (void)didSelectorEmoticon:(id)arg1;
- (void)publishHeightAnimateChangeEventWithOriginHeight:(double)arg1 withNextHeight:(double)arg2 withAnimateDuration:(double)arg3;
- (void)publishEmoticonButtonClickEventWithType:(id)arg1;
- (void)publishEmoticonSelectEventWithType:(id)arg1 withData:(id)arg2;
- (void)removeEmoticonPanel;
- (void)detach;
- (void)showEmoticonPanel;
- (void)enableSendButton:(_Bool)arg1;
- (void)addEmoticonBoardView;
- (id)initWithEmoticonBoard:(id)arg1 withMMLiteAppViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

