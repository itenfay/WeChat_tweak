//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMBottomBarButton;
@protocol ContactsAllSelectPanelViewDelegate;

@interface ContactsAllSelectPanelView
{
    _Bool _isSelectAll;
    id <ContactsAllSelectPanelViewDelegate> _m_delegate;
    MMBottomBarButton *_selectAllButton;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelectAll; // @synthesize isSelectAll=_isSelectAll;
@property(retain, nonatomic) MMBottomBarButton *selectAllButton; // @synthesize selectAllButton=_selectAllButton;
@property(nonatomic) __weak id <ContactsAllSelectPanelViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (id)getSelectAllButtonTitle:(_Bool)arg1;
- (void)updatePanelView:(_Bool)arg1;
- (void)initViewWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

