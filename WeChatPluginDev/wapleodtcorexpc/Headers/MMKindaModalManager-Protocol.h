//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMIUIModal, MMVoidCallback;

@protocol MMKindaModalManager <NSObject>
- (void)removeAllModalViews;
- (void)removeModalViewImpl:(MMIUIModal *)arg1 completion:(MMVoidCallback *)arg2;
- (void)addModalView:(MMIUIModal *)arg1;
@end

