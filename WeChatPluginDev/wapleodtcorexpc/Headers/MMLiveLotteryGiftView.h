//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMFinderLiveGiftPacketViewModel, MMUILabel, NSString, UIImageView;

@interface MMLiveLotteryGiftView : UIView
{
    UIImageView *_thumbnailView;
    MMUILabel *_giftCountLabel;
    MMFinderLiveGiftPacketViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveGiftPacketViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MMUILabel *giftCountLabel; // @synthesize giftCountLabel=_giftCountLabel;
@property(retain, nonatomic) UIImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (void)layoutSubviews;
- (void)initUI;
- (id)getDefaultGiftThumbImage;
- (void)updateProductCount:(unsigned int)arg1;
- (void)updateWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

