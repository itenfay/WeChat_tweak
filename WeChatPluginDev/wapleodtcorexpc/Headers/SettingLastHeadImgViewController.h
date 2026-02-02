//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ImageScrollView, NSString, UIImage;
@protocol SettingLastHeadImgViewControllerDelegate;

@interface SettingLastHeadImgViewController
{
    id <SettingLastHeadImgViewControllerDelegate> _delegate;
    UIImage *_originalImage;
    ImageScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ImageScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) __weak id <SettingLastHeadImgViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveMemoryWarning;
- (void)onPhotoSave;
- (void)operate;
- (void)cancel;
- (void)use;
- (void)viewDidLayoutSubviews;
- (void)initButton;
- (void)initScrollViewAndImageView;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

