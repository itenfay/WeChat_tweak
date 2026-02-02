//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTMissedSubsReaderItemViewModel, BTRichTextTagView, MMWebImageView;

@interface BTMissedSubsReaderItemCell
{
    MMWebImageView *_coverImgView;
    BTRichTextTagView *_titleTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BTRichTextTagView *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) MMWebImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (unsigned long long)contentViewRaddiCorners;
- (void)layoutSubviews;
- (void)configureLayout;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) BTMissedSubsReaderItemViewModel *viewModel; // @dynamic viewModel;

@end

