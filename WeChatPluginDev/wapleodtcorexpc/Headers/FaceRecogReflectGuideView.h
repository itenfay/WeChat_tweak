//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, MVideoPlayerView, UIButton;
@protocol FaceRecogGuideViewDelegate;

@interface FaceRecogReflectGuideView
{
    MVideoPlayerView *m_view;
    MMUILabel *m_bigTitle;
    MMUILabel *m_detail;
    UIButton *m_btn;
    id <FaceRecogGuideViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FaceRecogGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onPlayEnd;
- (void)playGuide;
- (void)onFaceRecogGuideFinished;
- (void)initView;
- (id)initWithDelegate:(id)arg1;

@end

