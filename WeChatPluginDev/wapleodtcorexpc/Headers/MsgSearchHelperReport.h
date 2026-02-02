//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MsgSearchHelperReport
{
    unsigned int _action;
    unsigned int _tab;
    unsigned int _msgType;
    unsigned int _searchCost;
    unsigned int _subTab;
    unsigned int _ifImageDone;
    unsigned int _ifAllImageDone;
    unsigned int _resultCnt;
    unsigned int _imageLoadingCost;
    unsigned int _imageCnt;
    unsigned int _imageIdentify;
    unsigned int _clickPosition;
    unsigned int _clickPositionSameType;
    unsigned int _finderCnt;
    unsigned int _verticalSearchEntrance;
    unsigned int _stayTime;
    NSString *_searchSessionId;
    NSString *_query;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int stayTime; // @synthesize stayTime=_stayTime;
@property(nonatomic) unsigned int verticalSearchEntrance; // @synthesize verticalSearchEntrance=_verticalSearchEntrance;
@property(nonatomic) unsigned int finderCnt; // @synthesize finderCnt=_finderCnt;
@property(nonatomic) unsigned int clickPositionSameType; // @synthesize clickPositionSameType=_clickPositionSameType;
@property(nonatomic) unsigned int clickPosition; // @synthesize clickPosition=_clickPosition;
@property(nonatomic) unsigned int imageIdentify; // @synthesize imageIdentify=_imageIdentify;
@property(nonatomic) unsigned int imageCnt; // @synthesize imageCnt=_imageCnt;
@property(nonatomic) unsigned int imageLoadingCost; // @synthesize imageLoadingCost=_imageLoadingCost;
@property(nonatomic) unsigned int resultCnt; // @synthesize resultCnt=_resultCnt;
@property(nonatomic) unsigned int ifAllImageDone; // @synthesize ifAllImageDone=_ifAllImageDone;
@property(nonatomic) unsigned int ifImageDone; // @synthesize ifImageDone=_ifImageDone;
@property(nonatomic) unsigned int subTab; // @synthesize subTab=_subTab;
@property(nonatomic) unsigned int searchCost; // @synthesize searchCost=_searchCost;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned int msgType; // @synthesize msgType=_msgType;
@property(nonatomic) unsigned int tab; // @synthesize tab=_tab;
@property(nonatomic) unsigned int action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
- (void)copyFromOtherObject:(id)arg1;

@end

