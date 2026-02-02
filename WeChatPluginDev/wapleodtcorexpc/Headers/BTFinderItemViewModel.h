//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTRecommendFinderData, NSString, UIColor;

@interface BTFinderItemViewModel
{
    _Bool _isTitleUp;
    unsigned int _showRedPacketFlag;
    unsigned long long _type;
    NSString *_headImageUrl;
    NSString *_titleText;
    NSString *_userName;
    NSString *_nickName;
    NSString *_createTimeText;
    NSString *_coverImageUrl;
    NSString *_recommendReason;
    NSString *_timeText;
    double _viewWidth;
    UIColor *_coverBottomMainColor;
    BTRecommendFinderData *_recommendFinderData;
    NSString *_fromSessiongId;
    double _cacheViewHeight;
    double _cacheReaderStyleCoverContainerViewHeight;
}

+ (id)cellIdentifier;
- (void).cxx_destruct;
@property(nonatomic) double cacheReaderStyleCoverContainerViewHeight; // @synthesize cacheReaderStyleCoverContainerViewHeight=_cacheReaderStyleCoverContainerViewHeight;
@property(nonatomic) double cacheViewHeight; // @synthesize cacheViewHeight=_cacheViewHeight;
@property(nonatomic) _Bool isTitleUp; // @synthesize isTitleUp=_isTitleUp;
@property(nonatomic) unsigned int showRedPacketFlag; // @synthesize showRedPacketFlag=_showRedPacketFlag;
@property(retain, nonatomic) NSString *fromSessiongId; // @synthesize fromSessiongId=_fromSessiongId;
@property(retain, nonatomic) BTRecommendFinderData *recommendFinderData; // @synthesize recommendFinderData=_recommendFinderData;
@property(retain, nonatomic) UIColor *coverBottomMainColor; // @synthesize coverBottomMainColor=_coverBottomMainColor;
@property(nonatomic) double viewWidth; // @synthesize viewWidth=_viewWidth;
@property(copy, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
@property(copy, nonatomic) NSString *recommendReason; // @synthesize recommendReason=_recommendReason;
@property(copy, nonatomic) NSString *coverImageUrl; // @synthesize coverImageUrl=_coverImageUrl;
@property(copy, nonatomic) NSString *createTimeText; // @synthesize createTimeText=_createTimeText;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)isTitleUpNewStyle;
- (id)finderFeedbackWordings;
- (id)finderNegativeFeedbackInfo;
- (id)finderExportId;
- (id)cellIdentifier;
- (id)logStr:(_Bool)arg1;
- (_Bool)shouldShowCoverBackgroundEffect;
- (double)timeLabelBottomMargin;
- (double)digestTopMargin;
- (id)digestLabelColor;
- (double)titleLabelLineSpacing;
- (id)titleLabelColor;
- (double)titleLabelLineNumber;
- (id)titleLabelFont;
- (double)titleMaxWidth;
- (double)digestLabelHeight;
- (double)readerStyleCoverContainerViewHeight;
- (double)titleLabelBottomMargin;
- (double)titleLabelTopMargin;
- (double)titleLabelLeftMargin;
- (double)coverImageViewHeight;
- (double)coverContainerViewHeight;
- (double)headImageViewTopMargin;
- (double)headImageViewHeight;
- (double)headerContainerViewHeight;
- (_Bool)isMembershipItem;
- (_Bool)canShowTagView;
- (double)viewHeight;
- (_Bool)isViewHidden;
- (id)initWithBTRecommendFinderData:(id)arg1;

@end

