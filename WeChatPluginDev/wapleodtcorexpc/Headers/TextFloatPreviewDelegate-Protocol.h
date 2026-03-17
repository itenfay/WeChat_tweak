//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSObject, NSString, UIViewController;

@protocol TextFloatPreviewDelegate <NSObject>
- (UIViewController *)getViewController;
- (void)onWindowHide;

@optional
- (void)onFloatPreviewMenuSearch:(NSString *)arg1;
- (void)onFloatPreviewMenuForward;
- (void)onFloatPreviewMenuSelectAll;
- (void)onFloatPreviewMenuCopy:(NSString *)arg1;
- (void)onFloatPreviewMenuHidden;
- (void)onFloatPreviewLongPress;
- (NSObject *)getMediaWrap;
@end

