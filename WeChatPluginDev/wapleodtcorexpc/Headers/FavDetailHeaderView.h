//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, FavoritesItem, UILabel, UIView, WCDataItem;

@interface FavDetailHeaderView
{
    UILabel *m_sourceTimeLabel;
    UILabel *m_sourceTitleLabel;
    UIView *m_contentView;
    UIView *m_separateLine;
    FavoritesItem *m_favItem;
    CMessageWrap *m_messageWrap;
    WCDataItem *m_wcDataItem;
}

+ (double)getFavDetailHeaderHeight;
- (void).cxx_destruct;
- (id)genMomentNoteTimeStringByUInt:(unsigned int)arg1;
- (id)getFavItem;
- (void)initView;
- (void)layoutSubviews;
- (id)initWithFavItem:(id)arg1 withMessageWrap:(id)arg2 withWCDataItem:(id)arg3;
- (id)initWithFavItem:(id)arg1;

@end

