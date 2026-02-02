//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface KvReportItem30755
{
    _Bool _isRecommand_34;
    _Bool _isSubscribed_36;
    unsigned int _scene_21;
    unsigned int _sessionId_22;
    unsigned int _flowListItemType_23;
    unsigned int _itemPos_24;
    unsigned int _actionType_25;
    unsigned int _bizUin_29;
    unsigned int _itemIdx_31;
    unsigned int _itemShowType_32;
    unsigned long long _stayTimeInMs_26;
    NSString *_bizUserName_27;
    NSString *_articleUrl_28;
    unsigned long long _msgId_30;
    NSString *_finderFeedId_33;
    NSString *_recInfo_35;
    unsigned long long _actionTimeInMs_37;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long actionTimeInMs_37; // @synthesize actionTimeInMs_37=_actionTimeInMs_37;
@property(nonatomic) _Bool isSubscribed_36; // @synthesize isSubscribed_36=_isSubscribed_36;
@property(retain, nonatomic) NSString *recInfo_35; // @synthesize recInfo_35=_recInfo_35;
@property(nonatomic) _Bool isRecommand_34; // @synthesize isRecommand_34=_isRecommand_34;
@property(retain, nonatomic) NSString *finderFeedId_33; // @synthesize finderFeedId_33=_finderFeedId_33;
@property(nonatomic) unsigned int itemShowType_32; // @synthesize itemShowType_32=_itemShowType_32;
@property(nonatomic) unsigned int itemIdx_31; // @synthesize itemIdx_31=_itemIdx_31;
@property(nonatomic) unsigned long long msgId_30; // @synthesize msgId_30=_msgId_30;
@property(nonatomic) unsigned int bizUin_29; // @synthesize bizUin_29=_bizUin_29;
@property(retain, nonatomic) NSString *articleUrl_28; // @synthesize articleUrl_28=_articleUrl_28;
@property(retain, nonatomic) NSString *bizUserName_27; // @synthesize bizUserName_27=_bizUserName_27;
@property(nonatomic) unsigned long long stayTimeInMs_26; // @synthesize stayTimeInMs_26=_stayTimeInMs_26;
@property(nonatomic) unsigned int actionType_25; // @synthesize actionType_25=_actionType_25;
@property(nonatomic) unsigned int itemPos_24; // @synthesize itemPos_24=_itemPos_24;
@property(nonatomic) unsigned int flowListItemType_23; // @synthesize flowListItemType_23=_flowListItemType_23;
@property(nonatomic) unsigned int sessionId_22; // @synthesize sessionId_22=_sessionId_22;
@property(nonatomic) unsigned int scene_21; // @synthesize scene_21=_scene_21;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

