//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BrandProfileItemAudioViewModel, NSString, UIView, WCBrandAudioPlayView;

@interface BrandProfileItemAudioCell
{
    UIView *_audioBgView;
    WCBrandAudioPlayView *_audioPlayView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCBrandAudioPlayView *audioPlayView; // @synthesize audioPlayView=_audioPlayView;
@property(retain, nonatomic) UIView *audioBgView; // @synthesize audioBgView=_audioBgView;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)updatePlayItem;
- (void)onUpdateViewModel;
- (void)initPlayView;
- (void)initSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) BrandProfileItemAudioViewModel *viewModel; // @dynamic viewModel;

@end

