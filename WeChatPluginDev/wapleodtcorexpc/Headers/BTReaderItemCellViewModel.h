//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTReaderMsgSectionData, MPPageRelatedInfo, NSMutableArray, NSString, ReaderWrap, UIFont, UIImage;
@protocol BTReaderItemCellViewModelDelegate;

@interface BTReaderItemCellViewModel
{
    ReaderWrap *_readerWrap;
    unsigned int _itemIndex;
    struct CGSize _titleSize;
    NSMutableArray *_titleLabelStyles;
    struct CGSize _digestSize;
    NSMutableArray *_digestLabelStyles;
    unsigned long long _position;
    MPPageRelatedInfo *_relatedInfo;
    _Bool _isPaid;
    _Bool _isPaySubcribeOpen;
    UIFont *_digestFoldFont;
    id <BTReaderItemCellViewModelDelegate> _delegate;
}

+ (id)createModelWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5 relatedInfo:(id)arg6;
+ (_Bool)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) _Bool isPaySubcribeOpen; // @synthesize isPaySubcribeOpen=_isPaySubcribeOpen;
@property(nonatomic) __weak id <BTReaderItemCellViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPaid; // @synthesize isPaid=_isPaid;
@property(readonly, nonatomic) ReaderWrap *readerWrap; // @synthesize readerWrap=_readerWrap;
@property(readonly, nonatomic) unsigned int itemIndex; // @synthesize itemIndex=_itemIndex;
- (_Bool)canShowRedPacketcover;
- (_Bool)shouldShowFriendRelatedInfoStrInDigestLabel;
@property(readonly, nonatomic) _Bool isShowFriendRelatedInfo;
@property(readonly, nonatomic) unsigned int friendReadCount;
@property(readonly, nonatomic) NSString *friendRelatedInfoStr;
@property(readonly, nonatomic) NSString *pageIdentifier;
@property(readonly, nonatomic) MPPageRelatedInfo *relatedInfo;
@property(readonly, nonatomic) UIImage *paySubcribeTagImage;
@property(readonly, nonatomic) struct CGSize payTagSize;
@property(readonly, nonatomic) _Bool isPayContent;
@property(readonly, nonatomic) double normalCoverBottomMargin;
@property(readonly, nonatomic) double normalCoverTopMargin;
- (double)itemViewHeightForNormalItem;
@property(readonly, nonatomic) NSMutableArray *digestLabelStyles;
@property(readonly, nonatomic) UIFont *digestFoldFont; // @synthesize digestFoldFont=_digestFoldFont;
@property(readonly, nonatomic) double digestMaxWidth;
@property(readonly, nonatomic) UIFont *digestFont;
@property(readonly, nonatomic) struct CGSize digestSize;
@property(readonly, nonatomic) struct CGSize titleSize;
- (void)clearCache;
- (void)updateCellView;
- (struct CGSize)titleTagImageSize;
- (_Bool)hasTitleTag;
@property(readonly, nonatomic) NSMutableArray *titleLabelStyles;
@property(readonly, nonatomic) unsigned long long digestLineNumber;
@property(readonly, nonatomic) _Bool exposeDigest;
- (id)digest;
@property(readonly, nonatomic) unsigned long long titleLineNumber;
@property(readonly, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) double titleMaxWidth;
- (_Bool)isTopItemShowLargeCover;
@property(readonly, nonatomic) _Bool isShowLargeCover;
- (_Bool)isTitleSingleLine;
@property(readonly, nonatomic) _Bool hasLandingPage;
@property(readonly, nonatomic) unsigned long long position;
@property(readonly, nonatomic) NSString *titleStr;
@property(readonly, nonatomic) NSString *coverImgURL;
- (double)viewHeight;
- (void)initPayStateIfNeed;
- (void)updatePayStatus:(_Bool)arg1;
- (void)updateWithRelatedInfo:(id)arg1;
- (void)updateWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5 relatedInfo:(id)arg6;
- (id)initWithReaderWrap:(id)arg1 itemIndex:(unsigned int)arg2 msgWrap:(id)arg3 contact:(id)arg4 viewWidth:(double)arg5 relatedInfo:(id)arg6;
- (id)itemViewClassName;

// Remaining properties
@property(nonatomic) __weak BTReaderMsgSectionData *sectionData;

@end

