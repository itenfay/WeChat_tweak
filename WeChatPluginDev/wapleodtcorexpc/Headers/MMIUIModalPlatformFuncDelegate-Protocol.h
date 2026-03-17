//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidBoolI32Callback, MMVoidCallback;

@protocol MMIUIModalPlatformFuncDelegate <NSObject>
- (void)endEditing;
- (void)setKeyBoardShowCallbackImpl:(MMVoidBoolI32Callback *)arg1;
- (void)refreshNavigationBar;
- (void)fragmentShow:(_Bool)arg1;
- (void)genSnapshotImpl:(_Bool)arg1 callback:(MMVoidCallback *)arg2;
@end

