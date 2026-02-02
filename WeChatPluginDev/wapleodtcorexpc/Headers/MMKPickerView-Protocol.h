//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "MMKView-Protocol.h"

@class MMVoidListCallback, NSArray;

@protocol MMKPickerView <MMKView>
- (void)setSelectedRows:(NSArray *)arg1;
- (NSArray *)getCurrentSelectedRows;
- (void)setCallbackImpl:(MMVoidListCallback *)arg1;
- (void)setSyncData:(NSArray *)arg1 secondColumn:(NSArray *)arg2;
- (void)setNormalData:(NSArray *)arg1;
@end

