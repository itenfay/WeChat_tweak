//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WASubscriptionMessagePageSheetMessageItem
{
    _Bool _isAudioTemplate;
    _Bool _isAcceptWithAudio;
    _Bool _isForceNotifyTemplate;
    _Bool _isAcceptWithForceNotify;
    _Bool _selected;
    int _templateType;
    NSString *_audioTemplateUrl;
    NSString *_wording;
    NSString *_sceneDescription;
    NSString *_templateID;
    NSArray *_detailList;
    unsigned long long _infoButtonClickCount;
}

- (void).cxx_destruct;
@property(nonatomic) int templateType; // @synthesize templateType=_templateType;
@property(nonatomic) unsigned long long infoButtonClickCount; // @synthesize infoButtonClickCount=_infoButtonClickCount;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSArray *detailList; // @synthesize detailList=_detailList;
@property(nonatomic) _Bool isAcceptWithForceNotify; // @synthesize isAcceptWithForceNotify=_isAcceptWithForceNotify;
@property(readonly, nonatomic) _Bool isForceNotifyTemplate; // @synthesize isForceNotifyTemplate=_isForceNotifyTemplate;
@property(copy, nonatomic) NSString *templateID; // @synthesize templateID=_templateID;
@property(copy, nonatomic) NSString *sceneDescription; // @synthesize sceneDescription=_sceneDescription;
@property(copy, nonatomic) NSString *wording; // @synthesize wording=_wording;
@property(readonly, copy, nonatomic) NSString *audioTemplateUrl; // @synthesize audioTemplateUrl=_audioTemplateUrl;
@property(nonatomic) _Bool isAcceptWithAudio; // @synthesize isAcceptWithAudio=_isAcceptWithAudio;
@property(readonly, nonatomic) _Bool isAudioTemplate; // @synthesize isAudioTemplate=_isAudioTemplate;
- (id)toUIItem;
- (id)toReportDictionary;
- (void)fillWithMsgItem:(id)arg1;
- (id)initWith:(id)arg1;

@end

