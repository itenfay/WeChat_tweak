//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMWebCanvasLayoutData, NSDictionary, NSString;

@protocol MMCanvasRenderClientContextDelegate <NSObject>
- (void)onCallbackWithId:(NSString *)arg1 params:(NSDictionary *)arg2;
- (void)onCanvasSetHeight:(double)arg1 forCanvasId:(NSString *)arg2;
- (void)onSaveLayoutData:(MMWebCanvasLayoutData *)arg1 forCanvasId:(NSString *)arg2;
- (MMWebCanvasLayoutData *)getLayoutDataForCanvasId:(NSString *)arg1;
@end

