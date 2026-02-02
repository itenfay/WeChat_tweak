//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class AttributeLabel, FTSMsgCellStyle, FTSMsgItem, MMHeadImageView, MMImageView, MMUILabel, NSArray, NSString, UIImage;

@interface FTSMsgCell
{
    FTSMsgItem *_msgItem;
    unsigned long long _mergeCount;
    NSString *_searchText;
    NSArray *_arrKeyword;
    NSString *_sessionUsername;
    MMHeadImageView *_headImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    MMUILabel *_timeLabel;
    MMUILabel *_prefixDetailLabel;
    MMImageView *_iconNamePostfix;
    MMUILabel *_labelNamePostfix;
    _Bool _hiddenMode;
    FTSMsgCellStyle *_cellStyleInfo;
    UIImage *m_defaultOpenimGroupIcon;
    _Bool _bGroupMemberMsg;
    unsigned long long _cellStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) _Bool bGroupMemberMsg; // @synthesize bGroupMemberMsg=_bGroupMemberMsg;
@property(nonatomic) _Bool hiddenMode; // @synthesize hiddenMode=_hiddenMode;
@property(retain, nonatomic) NSArray *arrKeyword; // @synthesize arrKeyword=_arrKeyword;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
- (void)layoutSubviews;
- (void)updateIconNamePostfixWithContact:(id)arg1;
- (void)updateMsgItem:(id)arg1 withSessionUserName:(id)arg2 searchText:(id)arg3 keywords:(id)arg4 mergeCount:(unsigned long long)arg5;
- (void)updateTimeLabel;
- (void)updateStatus:(_Bool)arg1;
- (void)updateDetailTextAsMsgContent:(id)arg1 sessionPrefix:(id)arg2 highlighted:(_Bool)arg3;
- (void)updateDetailTextAsMergeCount;
- (id)getDetailTextWithMsgWrap:(id)arg1;
- (_Bool)isTrailSurrogates:(unsigned short)arg1;
- (void)updateCellStyle;
- (void)initCellStyle;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 hiddenMode:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

