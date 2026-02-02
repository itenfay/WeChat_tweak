//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBadgeView, MMWebImageView, NSString;

@interface EmoticonTabItemView
{
    _Bool _needConvertToGrayImage;
    _Bool _hasRedPoint;
    MMWebImageView *_m_webImageView;
    MMBadgeView *_badgeView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MMWebImageView *m_webImageView; // @synthesize m_webImageView=_m_webImageView;
@property(nonatomic) _Bool hasRedPoint; // @synthesize hasRedPoint=_hasRedPoint;
@property(nonatomic) _Bool needConvertToGrayImage; // @synthesize needConvertToGrayImage=_needConvertToGrayImage;
- (void)onLoadImageOK:(id)arg1;
- (void)setAlwaysTemplateRenderingMode:(_Bool)arg1;
- (void)setNormalImage:(id)arg1;
- (void)setNormalImageUrl:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

