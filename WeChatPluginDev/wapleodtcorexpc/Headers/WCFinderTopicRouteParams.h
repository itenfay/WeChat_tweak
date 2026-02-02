//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString, UINavigationController, UIViewController, WCFinderDataItem, WCFinderShareItemInfo;

@interface WCFinderTopicRouteParams
{
    _Bool _showHalfScreen;
    _Bool _showHighlightTopicStyle;
    int _feedActionType;
    int _commentScene;
    unsigned int _preSelectFilterType;
    int _musicPageType;
    int _getTopicInfoFlag;
    unsigned long long _cardType;
    WCFinderDataItem *_dataItem;
    unsigned long long _shareScene;
    unsigned long long _entryScene;
    NSString *_adExtInfo;
    WCFinderShareItemInfo *_shareItemInfo;
    unsigned long long _streamEntranceType;
    NSData *_byPassInfo;
    UINavigationController *_navVC;
    UIViewController *_fromVC;
    unsigned long long _sourcePosition;
    NSString *_feedIdToBePostToComment;
    NSString *_templateTopicId;
    NSData *_topicInfoPassbuff;
    NSString *_jumpInfoToPoiStreamBypass;
}

+ (id)poiTopicWithPoiParams:(id)arg1 commentScene:(int)arg2;
+ (id)eventMusicTopicWithPatTopic:(id)arg1 commentScene:(int)arg2 sourceType:(unsigned long long)arg3;
+ (id)eventMusicTopicWithMusicId:(unsigned long long)arg1 commentScene:(int)arg2 sourceType:(unsigned long long)arg3;
+ (id)eventTopicWithEventId:(unsigned long long)arg1 commentScene:(int)arg2;
+ (id)eventTopicWithEncryptedId:(id)arg1 eventDelegate:(id)arg2 commentScene:(int)arg3;
+ (id)eventTopicWithEncryptedId:(id)arg1 eventName:(id)arg2 commentScene:(int)arg3;
+ (id)musicTopicWithWithEventInfo:(id)arg1 commentScene:(int)arg2;
+ (id)eventTopicWithEventInfo:(id)arg1 commentScene:(int)arg2;
+ (id)musicTopicWithDataItem:(id)arg1 commentScene:(int)arg2;
+ (id)poiTopicWithDataItem:(id)arg1 commentScene:(int)arg2;
+ (id)tagTopicWithName:(id)arg1 commentScene:(int)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpInfoToPoiStreamBypass; // @synthesize jumpInfoToPoiStreamBypass=_jumpInfoToPoiStreamBypass;
@property(nonatomic) int getTopicInfoFlag; // @synthesize getTopicInfoFlag=_getTopicInfoFlag;
@property(retain, nonatomic) NSData *topicInfoPassbuff; // @synthesize topicInfoPassbuff=_topicInfoPassbuff;
@property(copy, nonatomic) NSString *templateTopicId; // @synthesize templateTopicId=_templateTopicId;
@property(copy, nonatomic) NSString *feedIdToBePostToComment; // @synthesize feedIdToBePostToComment=_feedIdToBePostToComment;
@property(nonatomic) unsigned long long sourcePosition; // @synthesize sourcePosition=_sourcePosition;
@property(nonatomic) int musicPageType; // @synthesize musicPageType=_musicPageType;
@property(nonatomic) unsigned int preSelectFilterType; // @synthesize preSelectFilterType=_preSelectFilterType;
@property(nonatomic) _Bool showHighlightTopicStyle; // @synthesize showHighlightTopicStyle=_showHighlightTopicStyle;
@property(nonatomic) _Bool showHalfScreen; // @synthesize showHalfScreen=_showHalfScreen;
@property(nonatomic) __weak UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) __weak UINavigationController *navVC; // @synthesize navVC=_navVC;
@property(retain, nonatomic) NSData *byPassInfo; // @synthesize byPassInfo=_byPassInfo;
@property(nonatomic) unsigned long long streamEntranceType; // @synthesize streamEntranceType=_streamEntranceType;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) WCFinderShareItemInfo *shareItemInfo; // @synthesize shareItemInfo=_shareItemInfo;
@property(copy, nonatomic) NSString *adExtInfo; // @synthesize adExtInfo=_adExtInfo;
@property(nonatomic) unsigned long long entryScene; // @synthesize entryScene=_entryScene;
@property(nonatomic) unsigned long long shareScene; // @synthesize shareScene=_shareScene;
@property(nonatomic) int feedActionType; // @synthesize feedActionType=_feedActionType;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
- (void)setLocation:(id)arg1;
- (id)init;

@end

