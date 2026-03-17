//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMUIViewController, NSDictionary;

@protocol MMLiveViewControllerDelegate <NSObject>

@optional
- (void)onMMLiveViewControllerCloseAndNavigateToCompleteVC:(MMUIViewController *)arg1;
- (void)onMMLiveViewControllerClose:(_Bool)arg1 navigate:(_Bool)arg2;
- (void)onMMLiveViewControllerCancel;
- (void)onMMLiveViewControllerMinimize:(void (^)(void))arg1;
- (void)onMMLiveViewControllerStarterFinished:(_Bool)arg1 extraInfo:(NSDictionary *)arg2;
- (void)onMMLiveViewControllerClose:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)onMMLiveViewControllerClose:(_Bool)arg1;
@end

