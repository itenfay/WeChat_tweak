//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizMessage, BrandProfileMsgFooterViewModel, NSArray, NSMutableArray, NSString;

@interface BrandProfileMessageSectionData
{
    _Bool _didUnfoldItemList;
    _Bool _isTextMsg;
    _Bool _hasPublishTimeHeader;
    _Bool _isFeatureMsg;
    _Bool _isFeatureMsgFold;
    unsigned int _groupMsgID;
    unsigned int _groupMsgIndex;
    unsigned int _publishTime;
    unsigned long long _tabType;
    NSArray *_arrItemMsg;
    NSString *_groupUniqueIDStr;
    NSString *_publishTimeStr;
    NSMutableArray *_viewModelList;
    NSMutableArray *_itemViewModelList;
    BizMessage *_groupMsg;
    BrandProfileMsgFooterViewModel *_footerVM;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileMsgFooterViewModel *footerVM; // @synthesize footerVM=_footerVM;
@property(nonatomic) _Bool isFeatureMsgFold; // @synthesize isFeatureMsgFold=_isFeatureMsgFold;
@property(nonatomic) _Bool isFeatureMsg; // @synthesize isFeatureMsg=_isFeatureMsg;
@property(retain, nonatomic) BizMessage *groupMsg; // @synthesize groupMsg=_groupMsg;
@property(retain, nonatomic) NSMutableArray *itemViewModelList; // @synthesize itemViewModelList=_itemViewModelList;
@property(readonly, nonatomic) NSMutableArray *viewModelList; // @synthesize viewModelList=_viewModelList;
@property(readonly, nonatomic) NSString *publishTimeStr; // @synthesize publishTimeStr=_publishTimeStr;
@property(nonatomic) _Bool hasPublishTimeHeader; // @synthesize hasPublishTimeHeader=_hasPublishTimeHeader;
@property(nonatomic) _Bool isTextMsg; // @synthesize isTextMsg=_isTextMsg;
@property(nonatomic) unsigned int publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) unsigned int groupMsgIndex; // @synthesize groupMsgIndex=_groupMsgIndex;
@property(retain, nonatomic) NSString *groupUniqueIDStr; // @synthesize groupUniqueIDStr=_groupUniqueIDStr;
@property(nonatomic) unsigned int groupMsgID; // @synthesize groupMsgID=_groupMsgID;
@property(retain, nonatomic) NSArray *arrItemMsg; // @synthesize arrItemMsg=_arrItemMsg;
@property(readonly, nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (id)genDateTimeStringByUInt:(unsigned int)arg1;
- (unsigned long long)sectionType;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (double)heightForHeaderInSection;
- (long long)numberOfRowsInSection;
- (void)onUnfoldItemListFooter;
- (void)onUnfoldFeatureHeader;
@property(readonly, nonatomic) unsigned int itemFoldLeftCount;
@property(readonly, nonatomic) _Bool isItemListFold;
@property(readonly, nonatomic) double topItemPadding;
@property(readonly, nonatomic) _Bool isTopItemReader;
@property(readonly, nonatomic) _Bool isTopItemShowLargeCover;
- (void)clearLayoutCache;
- (unsigned long long)indexForItemModel:(id)arg1;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) unsigned long long headerType;
- (void)__appendMsgItem:(id)arg1;
- (void)addReaderViewModelList;
- (void)addFooterViewModel;
- (void)addHeaderViewModel;
- (id)initWithGroupMsg:(id)arg1 sectionWidth:(double)arg2 tabType:(unsigned long long)arg3 isFeatureMsg:(_Bool)arg4;

@end

