//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class KindaImage, MMDynamicColor, NSData, NSString, WCPayWebImageView;

@interface KindaImageView
{
    WCPayWebImageView *_m_imageView;
    long long _m_scaleType;
    KindaImage *_m_image;
    KindaImage *_m_defaultImage;
    MMDynamicColor *_tintColor;
    NSData *_imageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) MMDynamicColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) KindaImage *m_defaultImage; // @synthesize m_defaultImage=_m_defaultImage;
@property(retain, nonatomic) KindaImage *m_image; // @synthesize m_image=_m_image;
@property(nonatomic) long long m_scaleType; // @synthesize m_scaleType=_m_scaleType;
@property(retain, nonatomic) WCPayWebImageView *m_imageView; // @synthesize m_imageView=_m_imageView;
- (void)onLoadWCPayWebImageOK:(id)arg1;
- (void)mm_onColorAppearanceDidChange;
- (void)updateImageStyle;
- (void)updateImage;
- (id)getTintColor;
- (id)getImageData;
- (long long)getScaleType;
- (void)setScaleType:(long long)arg1;
- (id)getImage;
- (void)setImage:(id)arg1;
- (id)getDefaultUrl;
- (void)setDefaultUrl:(id)arg1;
- (id)getUrl;
- (id)getDarkModeUrl;
- (void)setDarkModeUrl:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)getView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

