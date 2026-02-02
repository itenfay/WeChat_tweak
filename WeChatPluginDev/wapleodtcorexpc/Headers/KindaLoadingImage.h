//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIActivityIndicatorView, NSString;

@interface KindaLoadingImage
{
    MMUIActivityIndicatorView *_m_loadingImage;
    long long _m_loadingImageStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long m_loadingImageStyle; // @synthesize m_loadingImageStyle=_m_loadingImageStyle;
@property(retain, nonatomic) MMUIActivityIndicatorView *m_loadingImage; // @synthesize m_loadingImage=_m_loadingImage;
- (void)stopAnimating;
- (void)startAnimating;
- (long long)getStyle;
- (void)setStyle:(long long)arg1;
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

