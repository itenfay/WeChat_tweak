//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, UIScrollView;
@protocol FavTagEditViewDelegate;

@interface FavTagTableView
{
    NSMutableArray *m_arrTagListView;
    NSMutableArray *m_arrHeaders;
    id <FavTagEditViewDelegate> m_delegate;
    _Bool _embeddedInScrollView;
    double _contentHeight;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(nonatomic) _Bool embeddedInScrollView; // @synthesize embeddedInScrollView=_embeddedInScrollView;
@property(nonatomic) __weak id <FavTagEditViewDelegate> m_delegate; // @synthesize m_delegate;
- (_Bool)canBecomeFirstResponder;
- (void)unHighLightAllButtons;
- (void)highLightButtons:(id)arg1;
- (void)setButtonHighLight:(_Bool)arg1 named:(id)arg2;
- (void)addTags:(id)arg1 titled:(id)arg2;
- (void)layoutSubviews;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;

@end

