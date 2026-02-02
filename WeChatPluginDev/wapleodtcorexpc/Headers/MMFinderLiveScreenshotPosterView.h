//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveScreenshotPosterInfo, MMWebImageView, NSMutableDictionary, NSString, UIImage, UIImageView, UILabel;

@interface MMFinderLiveScreenshotPosterView : UIView
{
    MMFinderLiveScreenshotPosterInfo *_posterInfo;
    UIView *_masterContainerView;
    UIView *_roundedCornerContainerView;
    UIView *_screenshotImageContainerView;
    UIView *_screenshotImageStackingView;
    UIImageView *_screenshotImageView;
    NSMutableDictionary *_associatedImagesViews;
    UIImageView *_brandLogoImageView;
    UIImageView *_sponsorLogoImageView;
    UIImageView *_artistSignatureImageView;
    UIImageView *_holderAvatarView;
    UILabel *_holderLabel;
    UILabel *_descriptionLabel;
    MMWebImageView *_anchorVerificationStatusView;
    UIImageView *_qrCodeImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
@property(retain, nonatomic) MMWebImageView *anchorVerificationStatusView; // @synthesize anchorVerificationStatusView=_anchorVerificationStatusView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *holderLabel; // @synthesize holderLabel=_holderLabel;
@property(retain, nonatomic) UIImageView *holderAvatarView; // @synthesize holderAvatarView=_holderAvatarView;
@property(retain, nonatomic) UIImageView *artistSignatureImageView; // @synthesize artistSignatureImageView=_artistSignatureImageView;
@property(retain, nonatomic) UIImageView *sponsorLogoImageView; // @synthesize sponsorLogoImageView=_sponsorLogoImageView;
@property(retain, nonatomic) UIImageView *brandLogoImageView; // @synthesize brandLogoImageView=_brandLogoImageView;
@property(retain, nonatomic) NSMutableDictionary *associatedImagesViews; // @synthesize associatedImagesViews=_associatedImagesViews;
@property(retain, nonatomic) UIImageView *screenshotImageView; // @synthesize screenshotImageView=_screenshotImageView;
@property(retain, nonatomic) UIView *screenshotImageStackingView; // @synthesize screenshotImageStackingView=_screenshotImageStackingView;
@property(retain, nonatomic) UIView *screenshotImageContainerView; // @synthesize screenshotImageContainerView=_screenshotImageContainerView;
@property(retain, nonatomic) UIView *roundedCornerContainerView; // @synthesize roundedCornerContainerView=_roundedCornerContainerView;
@property(retain, nonatomic) UIView *masterContainerView; // @synthesize masterContainerView=_masterContainerView;
@property(retain, nonatomic) MMFinderLiveScreenshotPosterInfo *posterInfo; // @synthesize posterInfo=_posterInfo;
- (void)updatePrimaryImageViewMaskingWithMaskingDescriptors:(id)arg1;
- (void)layoutAssociatedImageViewsWithAssociatedImages:(id)arg1;
- (void)updateAssociatedImageViewsWithAssociatedImages:(id)arg1;
- (struct CGSize)screenshotImageContainerViewSize;
- (struct CGSize)masterContainerViewSize;
- (void)initializeComponents;
- (void)layoutSubviews;
- (void)updateWithScreenshotPosterInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) double aspectRatio;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,R,N

@property(readonly, nonatomic) UIImage *snapshotContainerImage;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

