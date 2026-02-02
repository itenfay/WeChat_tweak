//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class UIImage;

@protocol MagicBrushCanvasCaptureTrait <NSObject>
- (void)fetchCanvasContentAsync:(int)arg1 callback:(void (^)(UIImage *))arg2;
- (UIImage *)fetchCanvasContent:(int)arg1;
@end

