//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel, NSMutableArray;
@protocol FavRelatedTagDelegate;

@interface FavRelatedTagView
{
    MMUILabel *m_title;
    NSMutableArray *m_tagList;
    NSMutableArray *m_tagBtnsArray;
    NSMutableArray *m_tagBtnTitles;
    id <FavRelatedTagDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FavRelatedTagDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)indexOfTag:(id)arg1;
- (id)getAllTagList;
- (void)onClickBtn:(id)arg1;
- (void)sethighLightKeyWords:(id)arg1;
- (void)setTagList:(id)arg1 highlightKeyWords:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)initTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

