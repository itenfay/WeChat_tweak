//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIViewController.h>

@class NSString, UIImage, UIImageView, UIView;

@interface MMBasePeekImageViewController : UIViewController
{
    UIImage *_image;
    id _delegate;
    UIImageView *_imageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)commitViewController;
- (_Bool)canPop;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)reloadImage:(id)arg1;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak UIViewController *previewFromController;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIViewController",?,W,N

@property(nonatomic) __weak UIView *previewSourceView;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIView",?,W,N

@property(readonly) Class superclass;

@end

