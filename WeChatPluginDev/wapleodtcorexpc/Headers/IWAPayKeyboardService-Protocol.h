//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UITextField;
@protocol IWAPayKeyboardServiceDelegate;

@protocol IWAPayKeyboardService <NSObject>
+ (id)createService;
- (void)attachKeyboardTo:(UITextField *)arg1 delegate:(id <IWAPayKeyboardServiceDelegate>)arg2;
@end

