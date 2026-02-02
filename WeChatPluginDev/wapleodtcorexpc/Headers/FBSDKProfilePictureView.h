//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class FBSDKProfilePictureViewState, NSString, UIImageView;

@interface FBSDKProfilePictureView : UIView
{
    _Bool _hasProfileImage;
    UIImageView *_imageView;
    FBSDKProfilePictureViewState *_lastState;
    _Bool _needsImageUpdate;
    _Bool _placeholderImageIsValid;
    unsigned long long _pictureMode;
    NSString *_profileID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(nonatomic) unsigned long long pictureMode; // @synthesize pictureMode=_pictureMode;
- (void)_updateImageWithData:(id)arg1 state:(id)arg2;
- (void)_setPlaceholderImage;
- (void)_needsImageUpdate;
- (struct CGSize)_imageSize:(_Bool)arg1 scale:(double)arg2;
- (_Bool)_imageShouldFit;
- (void)_configureProfilePictureView;
- (void)_accessTokenDidChangeNotification:(id)arg1;
- (void)setNeedsImageUpdate;
- (void)setMode:(unsigned long long)arg1;
- (void)setContentMode:(long long)arg1;
- (long long)contentMode;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

