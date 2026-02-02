//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EcsGiftMessageViewModel, UILabel;

@interface EcsGiftMessageCellView
{
    UILabel *_m_tagLabel;
    UILabel *_m_wishLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *m_wishLabel; // @synthesize m_wishLabel=_m_wishLabel;
@property(retain, nonatomic) UILabel *m_tagLabel; // @synthesize m_tagLabel=_m_tagLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)layoutInternal;
- (void)updateBgImageView:(_Bool)arg1;
- (void)updateStatus;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) EcsGiftMessageViewModel *viewModel;

@end

