//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSArray, NewLifeImagePickViewController;

@protocol NewLifeImagePickViewControllerDelegate <NSObject>
- (void)onCancelSelectAssets:(NewLifeImagePickViewController *)arg1;
- (void)onFinishSelectAssets:(NewLifeImagePickViewController *)arg1 assets:(NSArray *)arg2;
@end

