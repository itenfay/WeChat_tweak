//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MTKView;

@protocol MTKViewDelegate <NSObject>
- (void)drawInMTKView:(MTKView *)arg1;
- (void)mtkView:(MTKView *)arg1 drawableSizeWillChange:(struct CGSize)arg2;
@end

