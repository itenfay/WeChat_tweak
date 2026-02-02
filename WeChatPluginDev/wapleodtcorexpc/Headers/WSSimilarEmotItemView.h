//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMUIActivityIndicatorView, MMWebImageView, NSString, WSEmoticonModel;
@protocol WSSimilarEmotItemDelegate;

@interface WSSimilarEmotItemView : UIView
{
    MMWebImageView *_emoticonThumbView;
    MMWebImageView *_emoticonGifView;
    WSEmoticonModel *_model;
    id <WSSimilarEmotItemDelegate> _delegate;
    MMUIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <WSSimilarEmotItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WSEmoticonModel *model; // @synthesize model=_model;
@property(retain, nonatomic) MMWebImageView *emoticonGifView; // @synthesize emoticonGifView=_emoticonGifView;
@property(retain, nonatomic) MMWebImageView *emoticonThumbView; // @synthesize emoticonThumbView=_emoticonThumbView;
- (void)onLoadImageOK:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)layoutSubviews;
- (void)resizeThumbFrame;
- (void)resizeGifFrame;
- (void)updateImageData:(id)arg1;
- (void)longPressItem:(id)arg1;
- (void)clickItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

