//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class BTRecommendAccountData, BTRecommendFeedbackInfo, BTRecommendFinderDataWrapper, NSArray, NSString;

@interface BTRecommendMsgData : NSObject
{
    _Bool _hasWeight;
    _Bool _shouldCheckSubscription;
    int _weight;
    unsigned int _pos;
    unsigned int _createTime;
    int _style;
    unsigned int _topRightShowMode;
    NSString *_msgTitle;
    NSArray *_arrAccountData;
    BTRecommendFeedbackInfo *_feedBackInfo;
    NSString *_versonInfo;
    unsigned long long _recId;
    NSString *_recSummary;
    NSString *_recReason;
    NSString *_aggregationUrl;
    NSString *_aggregationTitle;
    NSString *_event;
    NSString *_cardId;
    NSString *_exptType;
    NSString *_extraData;
    BTRecommendFinderDataWrapper *_finderDataWrapper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BTRecommendFinderDataWrapper *finderDataWrapper; // @synthesize finderDataWrapper=_finderDataWrapper;
@property(retain, nonatomic) NSString *extraData; // @synthesize extraData=_extraData;
@property(retain, nonatomic) NSString *exptType; // @synthesize exptType=_exptType;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
@property(retain, nonatomic) NSString *event; // @synthesize event=_event;
@property(nonatomic) _Bool shouldCheckSubscription; // @synthesize shouldCheckSubscription=_shouldCheckSubscription;
@property(nonatomic) unsigned int topRightShowMode; // @synthesize topRightShowMode=_topRightShowMode;
@property(retain, nonatomic) NSString *aggregationTitle; // @synthesize aggregationTitle=_aggregationTitle;
@property(retain, nonatomic) NSString *aggregationUrl; // @synthesize aggregationUrl=_aggregationUrl;
@property(retain, nonatomic) NSString *recReason; // @synthesize recReason=_recReason;
@property(retain, nonatomic) NSString *recSummary; // @synthesize recSummary=_recSummary;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) unsigned long long recId; // @synthesize recId=_recId;
@property(nonatomic) unsigned int createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *versonInfo; // @synthesize versonInfo=_versonInfo;
@property(nonatomic) unsigned int pos; // @synthesize pos=_pos;
@property(nonatomic) _Bool hasWeight; // @synthesize hasWeight=_hasWeight;
@property(nonatomic) int weight; // @synthesize weight=_weight;
@property(retain, nonatomic) BTRecommendFeedbackInfo *feedBackInfo; // @synthesize feedBackInfo=_feedBackInfo;
@property(retain, nonatomic) NSArray *arrAccountData; // @synthesize arrAccountData=_arrAccountData;
@property(copy, nonatomic) NSString *msgTitle; // @synthesize msgTitle=_msgTitle;
@property(readonly, nonatomic) BTRecommendAccountData *firstAccountData;

@end

