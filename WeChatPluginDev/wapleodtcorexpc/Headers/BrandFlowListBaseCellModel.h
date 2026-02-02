//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FlowListItemData, NSArray, NSString;

@interface BrandFlowListBaseCellModel : NSObject
{
    _Bool _needSupplyData;
    unsigned long long _type;
    unsigned long long _fromScene;
    NSString *_m_nsUserName;
    FlowListItemData *_flutterItemData;
    NSString *_recInfo;
    NSArray *_negativeFeedbackReason;
    NSString *_negativeFeedbackTitle;
    NSString *_recommendExtraData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recommendExtraData; // @synthesize recommendExtraData=_recommendExtraData;
@property(retain, nonatomic) NSString *negativeFeedbackTitle; // @synthesize negativeFeedbackTitle=_negativeFeedbackTitle;
@property(retain, nonatomic) NSArray *negativeFeedbackReason; // @synthesize negativeFeedbackReason=_negativeFeedbackReason;
@property(retain, nonatomic) NSString *recInfo; // @synthesize recInfo=_recInfo;
@property(retain, nonatomic) FlowListItemData *flutterItemData; // @synthesize flutterItemData=_flutterItemData;
@property(nonatomic) _Bool needSupplyData; // @synthesize needSupplyData=_needSupplyData;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName=_m_nsUserName;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)fillRecommendProperty:(id)arg1;
- (unsigned int)itemShowType;
- (unsigned int)flowListItemTypeForReport;
- (void)refreshWithFinderDataItem:(id)arg1;
- (id)finderExportId;
- (id)getFinderFeedContentVM;
- (id)getArticleUrl;

@end

