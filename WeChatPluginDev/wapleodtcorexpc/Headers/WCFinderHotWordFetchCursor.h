//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class AnyPromise, NSData, NSMutableArray, WCFinderSearchHotWord;

@interface WCFinderHotWordFetchCursor : NSObject
{
    _Bool _continueFlag;
    NSMutableArray *_hotWordList;
    WCFinderSearchHotWord *_firstHotword;
    AnyPromise *_currentFetchPromise;
    NSData *_lastBuffer;
    NSData *_objHotwordInfoBuffer;
    WCFinderSearchHotWord *_currentHotword;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchHotWord *currentHotword; // @synthesize currentHotword=_currentHotword;
@property(retain, nonatomic) NSData *objHotwordInfoBuffer; // @synthesize objHotwordInfoBuffer=_objHotwordInfoBuffer;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) AnyPromise *currentFetchPromise; // @synthesize currentFetchPromise=_currentFetchPromise;
@property(retain, nonatomic) WCFinderSearchHotWord *firstHotword; // @synthesize firstHotword=_firstHotword;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSMutableArray *hotWordList; // @synthesize hotWordList=_hotWordList;
- (_Bool)loading;
- (void)requestNextPage;
- (id)takeOneHotwordFromStack;
- (id)nextHotWord;
- (id)initWithHotWordList:(id)arg1 objHotwordInfoBuffer:(id)arg2 lastBuffer:(id)arg3;

@end

