//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface WCFinderSearchReportModel : NSObject
{
    _Bool _isClick;
    int _commentScene;
    unsigned long long _searchScene;
    NSString *_searchSessionId;
    NSString *_keyword;
    NSArray *_autoKeywords;
    NSDictionary *_selectedAutoKeywords;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isClick; // @synthesize isClick=_isClick;
@property(copy, nonatomic) NSDictionary *selectedAutoKeywords; // @synthesize selectedAutoKeywords=_selectedAutoKeywords;
@property(copy, nonatomic) NSArray *autoKeywords; // @synthesize autoKeywords=_autoKeywords;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) unsigned long long searchScene; // @synthesize searchScene=_searchScene;
- (id)objectToString:(id)arg1;
- (id)tagStringFromDictonary:(id)arg1;
- (void)log;

@end

