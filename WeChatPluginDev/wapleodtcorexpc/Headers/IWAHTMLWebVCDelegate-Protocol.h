//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol IWAHTMLWebVCDelegate <NSObject>
- (void)onTranslateRevertFinish:(_Bool)arg1;
- (void)onTranslateFinish:(_Bool)arg1;
- (void)webviewDidFinish:(NSDictionary *)arg1;
@end

