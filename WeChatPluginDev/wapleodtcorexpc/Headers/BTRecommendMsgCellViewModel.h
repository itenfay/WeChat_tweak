//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSMutableArray, NSString, UIFont;

@interface BTRecommendMsgCellViewModel
{
    NSMutableArray *_signatureLabelStyles;
    NSMutableArray *_appMsgTitleLabelStyles;
    struct CGSize _signatureLabelSize;
    struct CGSize _appMsgTitleLabelSize;
}

+ (_Bool)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (void).cxx_destruct;
- (void)clearCache;
- (id)feedbackInfo;
@property(readonly, nonatomic) NSMutableArray *appMsgTitleLabelStyles; // @synthesize appMsgTitleLabelStyles=_appMsgTitleLabelStyles;
@property(readonly, nonatomic) struct CGSize appMsgTitleLabelSize; // @synthesize appMsgTitleLabelSize=_appMsgTitleLabelSize;
@property(readonly, nonatomic) NSMutableArray *signatureLabelStyles; // @synthesize signatureLabelStyles=_signatureLabelStyles;
@property(readonly, nonatomic) struct CGSize signatureLabelSize; // @synthesize signatureLabelSize=_signatureLabelSize;
- (id)accountData;
@property(readonly, nonatomic) _Bool isExposed;
@property(readonly, copy, nonatomic) NSString *recommendReason;
@property(readonly, copy, nonatomic) NSString *signature;
@property(readonly, copy, nonatomic) NSString *headerUrl;
@property(readonly, copy, nonatomic) NSString *bizUserName;
@property(readonly, copy, nonatomic) NSString *bizNickName;
@property(readonly, nonatomic) _Bool appMsgDeleted;
@property(readonly, copy, nonatomic) NSString *appMsgDigest;
@property(readonly, copy, nonatomic) NSString *appMsgTitle;
@property(readonly, copy, nonatomic) NSString *appMsgRecommendReason;
@property(readonly, nonatomic) double headIconSize;
@property(readonly, nonatomic) UIFont *msgTitleFont;
@property(readonly, copy, nonatomic) NSString *msgTitle;
- (id)itemViewClassName;
- (double)viewHeight;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;

@end

