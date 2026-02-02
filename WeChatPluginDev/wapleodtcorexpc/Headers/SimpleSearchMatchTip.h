//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SimpleSearchMatchTip : NSObject
{
    NSString *_searchText;
    unsigned long long _matchType;
    NSString *_matchWord;
    NSString *_matchWordTip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *matchWordTip; // @synthesize matchWordTip=_matchWordTip;
@property(retain, nonatomic) NSString *matchWord; // @synthesize matchWord=_matchWord;
@property(nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;

@end

