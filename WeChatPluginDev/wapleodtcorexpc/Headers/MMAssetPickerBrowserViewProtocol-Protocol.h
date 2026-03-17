//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMAssetInfo, MMAssetPickerBrowserStateInfo;
@protocol MMAssetPickerBrowserViewDelegate, MMImagePickerControlCenter;

@protocol MMAssetPickerBrowserViewProtocol <NSObject>
@property(readonly, nonatomic) MMAssetPickerBrowserStateInfo *stateInfo;
@property(nonatomic) __weak id <MMAssetPickerBrowserViewDelegate> browserDelegate;
@property(nonatomic) __weak id <MMImagePickerControlCenter> controlCenter;
@property(nonatomic) _Bool shouldPlayWithEditAttr;
@property(nonatomic) _Bool requestUneditedAsset;
@property(retain, nonatomic) MMAssetInfo *assetInfo;
- (void)loadAsset;

@optional
- (void)onBeginToChangePage;
@end

