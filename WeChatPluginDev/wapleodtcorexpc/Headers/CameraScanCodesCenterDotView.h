//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class CABasicAnimation, NSString, UIImageView;

@interface CameraScanCodesCenterDotView : UIView
{
    UIImageView *_loadingDotView;
    UIImageView *_netDisconnectView;
    UIImageView *_scanGoodsGuideView;
    CABasicAnimation *_loadingDotAnimation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CABasicAnimation *loadingDotAnimation; // @synthesize loadingDotAnimation=_loadingDotAnimation;
@property(retain, nonatomic) UIImageView *scanGoodsGuideView; // @synthesize scanGoodsGuideView=_scanGoodsGuideView;
@property(retain, nonatomic) UIImageView *netDisconnectView; // @synthesize netDisconnectView=_netDisconnectView;
@property(retain, nonatomic) UIImageView *loadingDotView; // @synthesize loadingDotView=_loadingDotView;
- (void)stopLoadingDotAnimation;
- (void)startLoadingDotAnimation;
- (void)layoutSubviews;
- (void)setupAnimations;
- (void)setupSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

