//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UILabel;

@interface MMFinderLiveMinimizeAudioMicUserNickAttachWidgetObj
{
    UILabel *_rootNickLabel;
    UILabel *_nickLabel;
    struct CGRect _normalizedFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect normalizedFrame; // @synthesize normalizedFrame=_normalizedFrame;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(nonatomic) __weak UILabel *rootNickLabel; // @synthesize rootNickLabel=_rootNickLabel;
- (id)contentView;
- (unsigned long long)currentViewType;
@property(readonly, nonatomic) unsigned long long currentUIType;
- (double)leftForNickLabelWithNormalizedContainerSize:(struct CGSize)arg1;
- (double)topForNickLabelWithNormalizedContainerSize:(struct CGSize)arg1;
- (double)maxWidthForNickLabelWithNormalizedContainerSize:(struct CGSize)arg1;
- (id)getFontForNickLabel;
- (void)layoutUI;
- (void)createNickLabel;
- (_Bool)checkRootViewIsValid;
- (void)refresh;

@end

