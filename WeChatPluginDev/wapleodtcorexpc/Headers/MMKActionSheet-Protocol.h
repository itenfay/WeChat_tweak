//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMVoidCallback, NSString;

@protocol MMKActionSheet <NSObject>
- (void)setDestructiveIndex:(int)arg1;
- (void)show;
- (void)addButtonImpl:(NSString *)arg1 callback:(MMVoidCallback *)arg2;
- (void)setCancelButtonTitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
@end

