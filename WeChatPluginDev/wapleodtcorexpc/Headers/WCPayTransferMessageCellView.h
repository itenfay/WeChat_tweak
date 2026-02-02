//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, UIImageView, WCPayTransferMessageViewModel;

@interface WCPayTransferMessageCellView
{
    NSString *_bgImageName;
    NSString *_bgHighlightImageName;
    NSString *_maskImageName;
    NSString *_maskHighlightImageName;
    UIImageView *_addressIconImgView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *addressIconImgView; // @synthesize addressIconImgView=_addressIconImgView;
@property(retain, nonatomic) NSString *maskHighlightImageName; // @synthesize maskHighlightImageName=_maskHighlightImageName;
@property(retain, nonatomic) NSString *maskImageName; // @synthesize maskImageName=_maskImageName;
@property(retain, nonatomic) NSString *bgHighlightImageName; // @synthesize bgHighlightImageName=_bgHighlightImageName;
@property(retain, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (void)initSourceViewInside;
- (id)operationMenuItems;
- (_Bool)canShowRevokeMsgMenuItem;
- (void)updateBgImageView;
- (void)updateAddressIconImgView;
- (void)updateDescLabel;
- (void)updateTitleLabel;
- (void)layoutGroupTransferContentView;
- (void)updateStatus;
- (void)initTitleLabel;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) WCPayTransferMessageViewModel *viewModel; // @dynamic viewModel;

@end

