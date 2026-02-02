//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface WCFingertipSearchReportModel
{
    _Bool _hasReddot;
    long long _action;
    NSString *_hitWordList;
    NSString *_hitWordVersion;
    unsigned long long _subScene;
    NSString *_exposedWord;
    NSString *_matchTypeList;
    unsigned long long _msgContentLength;
    unsigned long long _matchResult;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long matchResult; // @synthesize matchResult=_matchResult;
@property(nonatomic) unsigned long long msgContentLength; // @synthesize msgContentLength=_msgContentLength;
@property(copy, nonatomic) NSString *matchTypeList; // @synthesize matchTypeList=_matchTypeList;
@property(copy, nonatomic) NSString *exposedWord; // @synthesize exposedWord=_exposedWord;
@property(nonatomic) unsigned long long subScene; // @synthesize subScene=_subScene;
@property(copy, nonatomic) NSString *hitWordVersion; // @synthesize hitWordVersion=_hitWordVersion;
@property(copy, nonatomic) NSString *hitWordList; // @synthesize hitWordList=_hitWordList;
@property(nonatomic) _Bool hasReddot; // @synthesize hasReddot=_hasReddot;
@property(nonatomic) long long action; // @synthesize action=_action;
- (void)doReport:(long long)arg1;
- (void)doReport;
- (id)initWithSNSItem:(id)arg1 subScene:(unsigned long long)arg2;

@end

