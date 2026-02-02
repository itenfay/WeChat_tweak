//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMRedHeadLiner, MMWebImageView;

@interface EmoticonStoreDetailCoverImageView
{
    MMRedHeadLiner *m_tagImageView;
    MMWebImageView *m_webImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMWebImageView *m_webImageView; // @synthesize m_webImageView;
@property(retain, nonatomic) MMRedHeadLiner *m_tagImageView; // @synthesize m_tagImageView;
- (void)layoutSubviews;
- (void)setTagHidden:(_Bool)arg1;
- (void)setImageUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

