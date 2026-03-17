//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@protocol FlutterViewEngineDelegate <NSObject>
@property(readonly, nonatomic) _Bool isUsingImpeller;
- (void)flutterViewAccessibilityDidCall;
- (void *)platformViewsController;
- (struct Screenshot)takeScreenshot:(int)arg1 asBase64Encoded:(_Bool)arg2;
@end

