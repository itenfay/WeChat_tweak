//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface IntelligentMessageReport
{
    _Bool _isPopUp;
    unsigned int _action;
    unsigned int _scene;
    unsigned int _searchScene;
    unsigned int _imageCnt;
    unsigned int _peopleCnt;
    unsigned int _imageSendTime;
    unsigned int _tab;
    unsigned int _searchCost;
    unsigned int _ifImageDone;
    unsigned int _matchType;
    unsigned int _mediaResultType;
    unsigned int _finderCnt;
    unsigned int _categoryDisplayType;
    unsigned int _stayTime;
    NSString *_sessionId;
    NSString *_searchSessionId;
    NSString *_printQuery;
    NSString *_searchQuery;
    NSString *_expoQuery;
    NSString *_keyWord;
    NSString *_userName;
    unsigned long long _imageAllCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int categoryDisplayType; // @synthesize categoryDisplayType=_categoryDisplayType;
@property(nonatomic) unsigned int finderCnt; // @synthesize finderCnt=_finderCnt;
@property(nonatomic) unsigned int mediaResultType; // @synthesize mediaResultType=_mediaResultType;
@property(nonatomic) _Bool isPopUp; // @synthesize isPopUp=_isPopUp;
@property(nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned long long imageAllCount; // @synthesize imageAllCount=_imageAllCount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) unsigned int ifImageDone; // @synthesize ifImageDone=_ifImageDone;
@property(nonatomic) unsigned int searchCost; // @synthesize searchCost=_searchCost;
@property(nonatomic) unsigned int tab; // @synthesize tab=_tab;
@property(nonatomic) unsigned int imageSendTime; // @synthesize imageSendTime=_imageSendTime;
@property(nonatomic) unsigned int peopleCnt; // @synthesize peopleCnt=_peopleCnt;
@property(nonatomic) unsigned int imageCnt; // @synthesize imageCnt=_imageCnt;
@property(nonatomic) unsigned int searchScene; // @synthesize searchScene=_searchScene;
@property(retain, nonatomic) NSString *keyWord; // @synthesize keyWord=_keyWord;
@property(retain, nonatomic) NSString *expoQuery; // @synthesize expoQuery=_expoQuery;
@property(retain, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) NSString *printQuery; // @synthesize printQuery=_printQuery;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

