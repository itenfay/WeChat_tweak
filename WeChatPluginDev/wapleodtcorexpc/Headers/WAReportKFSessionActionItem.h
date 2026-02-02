//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WAReportKFSessionActionItem
{
    int _unreadcount;
    int _unreadappcount;
    unsigned int _clicktime;
    NSString *_sceneID;
    NSString *_lastpushappid;
    NSString *_lastpushmsg;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int clicktime; // @synthesize clicktime=_clicktime;
@property(copy, nonatomic) NSString *lastpushmsg; // @synthesize lastpushmsg=_lastpushmsg;
@property(copy, nonatomic) NSString *lastpushappid; // @synthesize lastpushappid=_lastpushappid;
@property(nonatomic) int unreadappcount; // @synthesize unreadappcount=_unreadappcount;
@property(nonatomic) int unreadcount; // @synthesize unreadcount=_unreadcount;
@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (id)reportString;

@end

