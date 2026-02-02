//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol IWAFlutterService, IWASkylineRuntime, IWASkylineView><YYWebViewInterface, YYWebViewDelegate;

@protocol IWAFlutterService <NSObject>
+ (id <IWAFlutterService>)sharedService;
- (UIView<IWASkylineView><YYWebViewInterface> *)makeSkylineViewWithFrame:(struct CGRect)arg1 delegate:(id <YYWebViewDelegate>)arg2;
- (id <IWASkylineRuntime>)makeSkylineRuntime;
- (NSString *)getVersionString;
- (_Bool)isSupportFlutter;
@end

