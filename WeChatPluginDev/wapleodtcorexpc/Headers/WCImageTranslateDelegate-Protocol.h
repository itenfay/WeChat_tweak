//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol WCImageTranslateDelegate <NSObject>
- (void)onShowTranslateImage:(UIImage *)arg1;
- (NSString *)getTranslateImgIdentifier:(id)arg1;

@optional
- (void)onPreDetectWordSuccess:(id)arg1;
- (void)onCancelTranslateImage:(id)arg1;
- (void)onFinishAnimateTranslateImage:(id)arg1;
- (void)onStartAnimateTranslateImage:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
@end

