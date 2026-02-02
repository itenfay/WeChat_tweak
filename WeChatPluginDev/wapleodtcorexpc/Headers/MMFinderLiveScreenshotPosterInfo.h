//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveScreenshotPosterImages, NSString, UIImage, WCFinderContact;

@interface MMFinderLiveScreenshotPosterInfo : NSObject
{
    MMFinderLiveScreenshotPosterImages *_images;
    double _expectedScreenshotAspectRatio;
    NSString *_brandLogoUri;
    NSString *_sponsorLogoUri;
    NSString *_artistSignatureImageUri;
    double _artistSignatureImageRightMargin;
    double _artistSignatureImageBottomMargin;
    UIImage *_holderAvatar;
    NSString *_holderNickname;
    NSString *_holderNicknameSuffix;
    NSString *_posterDescription;
    WCFinderContact *_anchorContact;
    UIImage *_qrCodeImage;
    NSString *_qrCodeImageUri;
    NSString *_qrCodeContent;
    NSString *_qrCodeCenterImageUri;
    struct CGPoint _topLeftCropPoint;
    struct CGPoint _bottomRightCropPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *qrCodeCenterImageUri; // @synthesize qrCodeCenterImageUri=_qrCodeCenterImageUri;
@property(retain, nonatomic) NSString *qrCodeContent; // @synthesize qrCodeContent=_qrCodeContent;
@property(retain, nonatomic) NSString *qrCodeImageUri; // @synthesize qrCodeImageUri=_qrCodeImageUri;
@property(retain, nonatomic) UIImage *qrCodeImage; // @synthesize qrCodeImage=_qrCodeImage;
@property(retain, nonatomic) WCFinderContact *anchorContact; // @synthesize anchorContact=_anchorContact;
@property(retain, nonatomic) NSString *posterDescription; // @synthesize posterDescription=_posterDescription;
@property(retain, nonatomic) NSString *holderNicknameSuffix; // @synthesize holderNicknameSuffix=_holderNicknameSuffix;
@property(retain, nonatomic) NSString *holderNickname; // @synthesize holderNickname=_holderNickname;
@property(retain, nonatomic) UIImage *holderAvatar; // @synthesize holderAvatar=_holderAvatar;
@property(nonatomic) double artistSignatureImageBottomMargin; // @synthesize artistSignatureImageBottomMargin=_artistSignatureImageBottomMargin;
@property(nonatomic) double artistSignatureImageRightMargin; // @synthesize artistSignatureImageRightMargin=_artistSignatureImageRightMargin;
@property(retain, nonatomic) NSString *artistSignatureImageUri; // @synthesize artistSignatureImageUri=_artistSignatureImageUri;
@property(retain, nonatomic) NSString *sponsorLogoUri; // @synthesize sponsorLogoUri=_sponsorLogoUri;
@property(retain, nonatomic) NSString *brandLogoUri; // @synthesize brandLogoUri=_brandLogoUri;
@property(nonatomic) double expectedScreenshotAspectRatio; // @synthesize expectedScreenshotAspectRatio=_expectedScreenshotAspectRatio;
@property(nonatomic) struct CGPoint bottomRightCropPoint; // @synthesize bottomRightCropPoint=_bottomRightCropPoint;
@property(nonatomic) struct CGPoint topLeftCropPoint; // @synthesize topLeftCropPoint=_topLeftCropPoint;
@property(retain, nonatomic) MMFinderLiveScreenshotPosterImages *images; // @synthesize images=_images;
@property(readonly, nonatomic) struct CGSize cropAreaSize;
@property(readonly, nonatomic) struct CGPoint cropAreaCenter;
@property(readonly, nonatomic) _Bool cropAreaValid;

@end

