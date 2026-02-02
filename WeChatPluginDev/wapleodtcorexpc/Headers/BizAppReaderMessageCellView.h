//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizAppReaderMessageBigPicView, BizAppReaderMessageViewModel;

@interface BizAppReaderMessageCellView
{
    BizAppReaderMessageBigPicView *_bigPicView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BizAppReaderMessageBigPicView *bigPicView; // @synthesize bigPicView=_bigPicView;
- (unsigned long long)accessibilityTraits;
- (void)updateSourceView:(id)arg1 nickname:(id)arg2 detailStr:(id)arg3;
- (void)layoutBigPicContentViewWithViewModel:(id)arg1;
- (void)addDigestLabel;
- (void)addTitleLabel;
- (void)addCoverImageView;
- (void)layoutStandardContentView;
- (void)layoutContentView;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, nonatomic) BizAppReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

