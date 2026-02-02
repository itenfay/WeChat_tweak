//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class EmotionActivity, MMUIActivityIndicatorView, MMWebImageView, PersonalDesigner, UILabel, UIView;

@interface EmotionStoreDetailDesignerContainerView
{
    UIView *m_contentView;
    MMWebImageView *m_designerHeaderView;
    UILabel *m_designerNameLabel;
    UILabel *m_designerPageLabel;
    MMUIActivityIndicatorView *m_loadingView;
    UIView *m_lineInTop;
    UIView *m_lineInBottom;
    PersonalDesigner *_personalDesigner;
    EmotionActivity *_emotionActivity;
}

+ (id)lineView;
- (void).cxx_destruct;
@property(retain, nonatomic) EmotionActivity *emotionActivity; // @synthesize emotionActivity=_emotionActivity;
@property(retain, nonatomic) PersonalDesigner *personalDesigner; // @synthesize personalDesigner=_personalDesigner;
- (void)stopLoading;
- (void)startLoading;
- (void)setContentInsets:(struct UIEdgeInsets)arg1;
- (void)setIsShowLineInTop:(_Bool)arg1 IsShowLineInBottom:(_Bool)arg2;
- (void)setDesignerHeaderSideLen:(double)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

