//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMTableViewInfo, NSArray, NSString, WCTableViewNormalCellManager;

@interface NSStringSelectViewController
{
    MMTableViewInfo *m_tableViewInfo;
    id m_targetOnSelect;
    SEL m_selOnSelect;
    WCTableViewNormalCellManager *m_oTableViewCellInfo;
    NSArray *m_arrString;
    _Bool _bPresentModel;
    NSString *_selected;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool bPresentModel; // @synthesize bPresentModel=_bPresentModel;
- (void)OnSelectCell:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setFooterTip:(id)arg1 section:(unsigned int)arg2;
- (void)setOnSelectTarget:(id)arg1 sel:(SEL)arg2;
- (id)initWithArray:(id)arg1 selected:(id)arg2;
- (void)updateTableViewWithArray:(id)arg1 selected:(id)arg2;
- (void)OnDone;
- (void)OnCancel;
- (void)viewWillLayoutSubviews;
- (void)initView;

@end

