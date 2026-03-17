//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class RichTextView, UIImageView, WANativeAppViewModel;

@interface WANativeAppCellView : NSObject
{
    RichTextView *m_titleLabel;
    RichTextView *m_detailLabel;
    UIImageView *m_thumbImageView;
}

- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)onTouchUpInside;
- (id)defaultThumbImage;
- (void)addThumbImageView;
- (void)addDetailLabel;
- (void)addTitleLabel;
- (void)layoutContentView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) WANativeAppViewModel *viewModel; // @dynamic viewModel;

@end

