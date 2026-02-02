//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ActionBase, MMWebImageView, UIButton;
@protocol ProductMediaItemViewDelegate;

@interface ProductMediaItemView
{
    id <ProductMediaItemViewDelegate> _delegate;
    ActionBase *_actionBase;
    MMWebImageView *_imageView;
    UIButton *_playBtn;
    unsigned long long _actionListCount;
}

- (void).cxx_destruct;
- (void)onMediaPlayBtnClicked;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 actionBase:(id)arg2 actionListCount:(unsigned long long)arg3;

@end

