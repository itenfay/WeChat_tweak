//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback, MMVoidStringCallback, NSString;
@protocol MMKImage, MMKView;

@protocol MMKAlertDialog <NSObject>
- (void)showImpl:(NSString *)arg1 contentView:(id <MMKView>)arg2 leftbutton:(NSString *)arg3 rightbutton:(NSString *)arg4 leftEvent:(MMVoidCallback *)arg5 rightEvent:(MMVoidCallback *)arg6;
- (void)showInputAlertImpl:(NSString *)arg1 content:(NSString *)arg2 tips:(NSString *)arg3 maxLength:(int)arg4 ok:(MMVoidStringCallback *)arg5 cancel:(MMVoidCallback *)arg6;
- (void)showTouchIdAuthViewImpl:(NSString *)arg1 successEvent:(MMVoidStringCallback *)arg2 failEvent:(MMVoidCallback *)arg3 cancelEvent:(MMVoidCallback *)arg4 forgetPwdEvent:(MMVoidCallback *)arg5;
- (void)showTipsImpl:(NSString *)arg1 kImage:(id <MMKImage>)arg2 content:(NSString *)arg3 leftbutton:(NSString *)arg4 rightbutton:(NSString *)arg5 leftEvent:(MMVoidCallback *)arg6 rightEvent:(MMVoidCallback *)arg7;
- (void)showTipsImpl:(NSString *)arg1 image:(NSString *)arg2 content:(NSString *)arg3 leftbutton:(NSString *)arg4 rightbutton:(NSString *)arg5 leftEvent:(MMVoidCallback *)arg6 rightEvent:(MMVoidCallback *)arg7;
- (void)showTipsImpl:(NSString *)arg1 kImage:(id <MMKImage>)arg2 content:(NSString *)arg3 button:(NSString *)arg4 event:(MMVoidCallback *)arg5;
- (void)showTipsImpl:(NSString *)arg1 image:(NSString *)arg2 content:(NSString *)arg3 button:(NSString *)arg4 event:(MMVoidCallback *)arg5;
- (void)showTipsImpl:(NSString *)arg1 content:(NSString *)arg2 leftbutton:(NSString *)arg3 middlebutton:(NSString *)arg4 rightbutton:(NSString *)arg5 leftEvent:(MMVoidCallback *)arg6 middleEvent:(MMVoidCallback *)arg7 rightEvent:(MMVoidCallback *)arg8;
- (void)showTipsImpl:(NSString *)arg1 content:(NSString *)arg2 leftbutton:(NSString *)arg3 rightbutton:(NSString *)arg4 leftEvent:(MMVoidCallback *)arg5 rightEvent:(MMVoidCallback *)arg6;
- (void)showTipsImpl:(NSString *)arg1 content:(NSString *)arg2 button:(NSString *)arg3 event:(MMVoidCallback *)arg4;
- (void)showImpl:(NSString *)arg1 content:(NSString *)arg2 leftbutton:(NSString *)arg3 middlebutton:(NSString *)arg4 rightbutton:(NSString *)arg5 leftEvent:(MMVoidCallback *)arg6 middleEvent:(MMVoidCallback *)arg7 rightEvent:(MMVoidCallback *)arg8;
- (void)showImpl:(NSString *)arg1 content:(NSString *)arg2 leftbutton:(NSString *)arg3 rightbutton:(NSString *)arg4 leftEvent:(MMVoidCallback *)arg5 rightEvent:(MMVoidCallback *)arg6;
- (void)showImpl:(NSString *)arg1 content:(NSString *)arg2 button:(NSString *)arg3 event:(MMVoidCallback *)arg4;
- (void)dismiss;
- (void)setContentAlign:(long long)arg1;
@end

