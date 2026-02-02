//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol MMAssetPickerBrowserViewProtocol;

@protocol MMAssetPickerBrowserViewDelegate <NSObject>

@optional
- (void)onAssetBrowserViewPlayingStateChanged:(UIView<MMAssetPickerBrowserViewProtocol> *)arg1 isPlaying:(_Bool)arg2;
- (void)onAssetBrowserViewSingleTap:(UIView<MMAssetPickerBrowserViewProtocol> *)arg1;
- (void)onAssetBrowserViewLoadFinished:(UIView<MMAssetPickerBrowserViewProtocol> *)arg1;
- (void)onAssetBrowserViewWillLoad:(UIView<MMAssetPickerBrowserViewProtocol> *)arg1;
@end

