//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCCgiBlockHelper;

@interface XMailSearchMailAddrLogic : NSObject
{
    CDUnknownBlockType _searchResultBlock;
    NSString *_curSearchingInput;
    NSString *_nextSearchInput;
    unsigned long long _lastSearchStartTime;
    WCCgiBlockHelper *_curSearchingCgiHelper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCCgiBlockHelper *curSearchingCgiHelper; // @synthesize curSearchingCgiHelper=_curSearchingCgiHelper;
@property(nonatomic) unsigned long long lastSearchStartTime; // @synthesize lastSearchStartTime=_lastSearchStartTime;
@property(retain, nonatomic) NSString *nextSearchInput; // @synthesize nextSearchInput=_nextSearchInput;
@property(retain, nonatomic) NSString *curSearchingInput; // @synthesize curSearchingInput=_curSearchingInput;
@property(copy, nonatomic) CDUnknownBlockType searchResultBlock; // @synthesize searchResultBlock=_searchResultBlock;
- (void)onGetSearchResult:(id)arg1 input:(id)arg2;
- (void)startSearchWithInput:(id)arg1 startTime:(unsigned long long)arg2;
- (void)searchWithInput:(id)arg1;

@end

