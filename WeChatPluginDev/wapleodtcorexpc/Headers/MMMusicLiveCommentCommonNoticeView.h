//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class MMMuiscLiveCommentCommonContentView, MMMusicLiveCommentBaseViewModel;

@interface MMMusicLiveCommentCommonNoticeView : UIView
{
    MMMusicLiveCommentBaseViewModel *_viewModel;
    UIView *_commentBgView;
    MMMuiscLiveCommentCommonContentView *_commentView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMuiscLiveCommentCommonContentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) UIView *commentBgView; // @synthesize commentBgView=_commentBgView;
@property(retain, nonatomic) MMMusicLiveCommentBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

