//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, OrderedDictionary;
@protocol IntelligentMsgImgResultListViewDelegate;

@interface IntelligentMsgImgResultListView
{
    OrderedDictionary *m_dicLabelButtonInfo;
    unsigned int _m_style;
    NSArray *m_LabelList;
    id <IntelligentMsgImgResultListViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IntelligentMsgImgResultListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int m_style; // @synthesize m_style=_m_style;
@property(retain, nonatomic) NSArray *m_LabelList; // @synthesize m_LabelList;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onClickMsgImgLabelButton:(id)arg1;
- (void)updateMsgImgLabelButtonWithSearchType:(unsigned int)arg1;
- (id)genImageWithButtonSize:(struct CGSize)arg1;
- (void)setButtonBackground:(id)arg1;
- (struct CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (id)createButton:(id)arg1;
- (id)addButton:(id)arg1;
- (void)reloadButtonCacheWithResults:(id)arg1 selectedResultType:(unsigned int)arg2;
- (void)initView;
- (void)initData;
- (id)init;

@end

