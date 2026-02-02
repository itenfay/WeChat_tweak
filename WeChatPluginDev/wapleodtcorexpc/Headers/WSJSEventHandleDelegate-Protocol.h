//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIView;
@protocol YYWebViewInterface;

@protocol WSJSEventHandleDelegate <NSObject>

@optional
- (void)onAppendSearchTagQuery:(NSDictionary *)arg1;
- (void)onSetSearchTagResult:(NSDictionary *)arg1;
- (void)activeWebPage:(NSDictionary *)arg1;
- (void)onPlayVideoFlowWithParams:(NSDictionary *)arg1;
- (void)onOperateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onUpdateVideoPlayerWithParams:(NSDictionary *)arg1;
- (void)onRemoveVideoPlayerWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertVideoPlayerWithParams:(NSDictionary *)arg1;
- (NSDictionary *)onGetWidgetCaptureImgUrl:(NSDictionary *)arg1;
- (void)onSearchUxOplogDataReady:(NSDictionary *)arg1;
- (void)onRequestLocalSuggestion:(NSDictionary *)arg1;
- (void)onDeleteBrowsingSnsItemOnH5;
- (void)onBrowsingSnsItem:(NSString *)arg1;
- (_Bool)checkBrowsingSnsItem:(NSString *)arg1;
- (void)onWillJumpUrl:(NSString *)arg1;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)onWebViewTerminal:(UIView<YYWebViewInterface> *)arg1;
- (void)onJsbridgeReady:(id <YYWebViewInterface>)arg1;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)onSwitchSearchContext:(NSDictionary *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)enableSearchBar;
- (void)hideSearchKeyboard;
@end

