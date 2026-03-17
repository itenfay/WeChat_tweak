//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebCanvasView, NSData, NSString;

@protocol MMWebCanvasViewDataDelegate <NSObject>
- (void)cancelAllFileTaskFromCanvasView:(MMWebCanvasView *)arg1;
- (NSData *)getFileDataWithUrl:(NSString *)arg1 canvasView:(MMWebCanvasView *)arg2;
- (NSData *)getFileData:(NSString *)arg1 canvasView:(MMWebCanvasView *)arg2;
- (_Bool)isFileExist:(NSString *)arg1 canvasView:(MMWebCanvasView *)arg2;
@end

