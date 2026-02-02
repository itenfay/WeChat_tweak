//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUIScrollView, NSArray, OrderedDictionary;
@protocol IntelligentMsgImgLabelListViewDelegate;

@interface IntelligentMsgImgLabelListView
{
    MMUIScrollView *m_scrollView;
    OrderedDictionary *m_dicLabelButtonInfo;
    NSArray *m_LabelList;
    id <IntelligentMsgImgLabelListViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgImgLabelListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *m_LabelList; // @synthesize m_LabelList;
- (void)onClickMsgImgLabelButton:(id)arg1;
- (void)updateMsgImgLabelButtonWithLabelName:(id)arg1;
- (id)genImageWithisHighLight:(_Bool)arg1 buttonSize:(struct CGSize)arg2;
- (void)setButtonBackground:(id)arg1;
- (struct CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (id)createButton:(id)arg1;
- (id)addButton:(id)arg1;
- (void)reloadButtonCacheWithLabels:(id)arg1;
- (void)initView;
- (void)initData;
- (id)init;

@end

