//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface WSContactSearchResult : NSObject
{
    unsigned int _sugType;
    NSString *_keyword;
    NSMutableArray *_arrResult;
    NSDictionary *_dicSearchMatchTip;
    NSString *_sugTitle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int sugType; // @synthesize sugType=_sugType;
@property(retain, nonatomic) NSString *sugTitle; // @synthesize sugTitle=_sugTitle;
@property(retain, nonatomic) NSDictionary *dicSearchMatchTip; // @synthesize dicSearchMatchTip=_dicSearchMatchTip;
@property(retain, nonatomic) NSMutableArray *arrResult; // @synthesize arrResult=_arrResult;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)markHighlightString:(id)arg1 arrKeywords:(id)arg2;
- (id)toJSON;

@end

