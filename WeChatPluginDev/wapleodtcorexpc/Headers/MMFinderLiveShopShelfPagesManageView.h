//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol MMFinderLiveShopShelfPageCornerCropper, MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate;

@interface MMFinderLiveShopShelfPagesManageView : UIView
{
    id <MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate> _edgeEventDelegate;
    id <MMFinderLiveShopShelfPageCornerCropper> _cornerCropper;
    NSArray *_pages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *pages; // @synthesize pages=_pages;
@property(nonatomic) __weak id <MMFinderLiveShopShelfPageCornerCropper> cornerCropper; // @synthesize cornerCropper=_cornerCropper;
@property(nonatomic) __weak id <MMFinderLiveShopShelfPagesManageViewEdgeEventDelegate> edgeEventDelegate; // @synthesize edgeEventDelegate=_edgeEventDelegate;
- (void)cleanMiddlePages;
- (void)popCurrentPageAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushPage:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)edgePanGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

