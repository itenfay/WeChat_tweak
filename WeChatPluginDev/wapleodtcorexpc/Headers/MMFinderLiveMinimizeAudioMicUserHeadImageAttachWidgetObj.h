//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIImageView;

@interface MMFinderLiveMinimizeAudioMicUserHeadImageAttachWidgetObj
{
    UIImageView *_contentImageView;
    struct CGRect _normalizedFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (id)contentView;
- (unsigned long long)currentViewType;
@property(readonly, nonatomic) unsigned long long currentUIType;
- (double)leftForContentViewWithNormalizedContainerSize:(struct CGSize)arg1;
- (double)topForContentViewWithNormalizedContainerSize:(struct CGSize)arg1;
- (struct CGSize)sizeForContentViewWithNormalizedContainerSize:(struct CGSize)arg1;
- (id)getSnapshotUserInfoImage;
- (void)createContentImageView;
- (void)layoutUI;
- (_Bool)checkRootViewIsValid;
- (void)refresh;

@end

