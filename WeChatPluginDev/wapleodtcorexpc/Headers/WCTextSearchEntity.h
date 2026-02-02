//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WCFingertipSearchReportModel;

@interface WCTextSearchEntity
{
    NSString *_queryText;
    WCFingertipSearchReportModel *_reporter;
    NSString *_exposedFingerWord;
    NSString *_matchedFingerWord;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *matchedFingerWord; // @synthesize matchedFingerWord=_matchedFingerWord;
@property(copy, nonatomic) NSString *exposedFingerWord; // @synthesize exposedFingerWord=_exposedFingerWord;
@property(retain, nonatomic) WCFingertipSearchReportModel *reporter; // @synthesize reporter=_reporter;
@property(copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
- (id)initWithText:(id)arg1;

@end

