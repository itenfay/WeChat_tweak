//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@interface UIView (WCFCache)
- (void)wcfSetImageWithURL:(id)arg1 imageIdentifier:(id)arg2 scaleToSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;
- (void)wcfSetImageWithURL:(id)arg1 scaleToSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wcfSetImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wcfCancelCurrentImageLoad;
- (id)wcfImageURLKey;
- (void)wcfSetImageURLKey:(id)arg1;
- (id)wcfImageLoadOperation;
- (void)wcfSetImageLoadOperation:(id)arg1;
@end

