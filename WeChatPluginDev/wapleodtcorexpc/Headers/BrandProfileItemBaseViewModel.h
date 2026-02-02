//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BizAppMsgDetailInfo, BizMessage, NSMutableArray, NSString;

@interface BrandProfileItemBaseViewModel
{
    _Bool _hasDesc;
    _Bool _hasLandingPage;
    _Bool _isPayContent;
    _Bool _isPaid;
    _Bool _isPaySubcribeOpen;
    BizMessage *_groupMsg;
    BizAppMsgDetailInfo *_itemMsg;
    NSString *_title;
    NSMutableArray *_titleLabelStyles;
    NSString *_desc;
    NSString *_pageIdentifier;
    double _height;
    struct CGSize _titleSize;
}

+ (id)createViewModelWithGroupMsg:(id)arg1;
+ (id)createViewModelWithItemMsg:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool isPaySubcribeOpen; // @synthesize isPaySubcribeOpen=_isPaySubcribeOpen;
@property(copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(nonatomic) _Bool isPayContent; // @synthesize isPayContent=_isPayContent;
@property(nonatomic) _Bool hasLandingPage; // @synthesize hasLandingPage=_hasLandingPage;
@property(nonatomic) _Bool hasDesc; // @synthesize hasDesc=_hasDesc;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSMutableArray *titleLabelStyles; // @synthesize titleLabelStyles=_titleLabelStyles;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) BizAppMsgDetailInfo *itemMsg; // @synthesize itemMsg=_itemMsg;
@property(retain, nonatomic) BizMessage *groupMsg; // @synthesize groupMsg=_groupMsg;
- (void)updatePayStatus:(_Bool)arg1;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (double)firstItemTopPadding;
- (unsigned long long)titleLineNumber;
- (id)titleFont;
- (double)titleMaxWidth;
- (double)calCellHeight;
- (id)coverImgURL;
@property(readonly, nonatomic) unsigned long long itemPosition;
@property(readonly, nonatomic) unsigned long long itemCount;
@property(readonly, nonatomic) unsigned long long itemIndex;
- (void)clearLayoutCache;
- (id)tableViewCellClassName;
- (id)initWithGroupMsg:(id)arg1;
- (id)initWithItemMsg:(id)arg1;

@end

