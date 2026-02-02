//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSNumber, NSString;

@interface WCFinderExtStatsReportModel
{
    NSString *_searchData;
    NSArray *_resultList;
    NSNumber *_fromTab;
    NSNumber *_toTab;
    NSNumber *_value;
    NSString *_strValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *strValue; // @synthesize strValue=_strValue;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(retain, nonatomic) NSNumber *toTab; // @synthesize toTab=_toTab;
@property(retain, nonatomic) NSNumber *fromTab; // @synthesize fromTab=_fromTab;
@property(retain, nonatomic) NSArray *resultList; // @synthesize resultList=_resultList;
@property(retain, nonatomic) NSString *searchData; // @synthesize searchData=_searchData;
- (id)generateOtherKVsDictionary;

@end

