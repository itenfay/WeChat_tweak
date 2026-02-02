//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMQuartz2DView, NSArray, NSDictionary, NSString, UIImage;

@protocol IMMQuartz2DDelegate <NSObject>

@optional
- (void)onNeedWaitImageDownloadWithUrl:(NSString *)arg1;
- (void)onCanvasDrawRectFinished:(MMQuartz2DView *)arg1;
- (void)onTouchDown:(MMQuartz2DView *)arg1;
- (void)onLongPress:(NSDictionary *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchCancel:(NSArray *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchEnd:(NSDictionary *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchMove:(NSArray *)arg1 canvas:(MMQuartz2DView *)arg2;
- (void)onTouchBegin:(NSDictionary *)arg1 canvas:(MMQuartz2DView *)arg2;
- (UIImage *)getImage:(NSString *)arg1;
@end

