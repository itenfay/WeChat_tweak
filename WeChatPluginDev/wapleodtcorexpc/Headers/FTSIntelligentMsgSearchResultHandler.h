//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSIntelligentMsgSearchMgr, NSArray, NSString;
@protocol FTSIntelligentMsgSearchMgrDelegate;

@interface FTSIntelligentMsgSearchResultHandler : NSObject
{
    _Bool _searchFinish;
    _Bool _isRuning;
    unsigned int _resultMsgCount;
    unsigned int _memResultCount;
    unsigned int _currentOffset;
    FTSIntelligentMsgSearchMgr *_searchMgr;
    NSString *_searchKey;
    NSString *_handleKey;
    NSArray *_arrSessionResultItem;
    id <FTSIntelligentMsgSearchMgrDelegate> _callbackTarget;
    NSString *_limitUsername;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRuning; // @synthesize isRuning=_isRuning;
@property(nonatomic) _Bool searchFinish; // @synthesize searchFinish=_searchFinish;
@property(nonatomic) unsigned int currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) NSString *limitUsername; // @synthesize limitUsername=_limitUsername;
@property(nonatomic) __weak id <FTSIntelligentMsgSearchMgrDelegate> callbackTarget; // @synthesize callbackTarget=_callbackTarget;
@property(retain, nonatomic) NSArray *arrSessionResultItem; // @synthesize arrSessionResultItem=_arrSessionResultItem;
@property(retain, nonatomic) NSString *handleKey; // @synthesize handleKey=_handleKey;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(nonatomic) __weak FTSIntelligentMsgSearchMgr *searchMgr; // @synthesize searchMgr=_searchMgr;
@property(nonatomic) unsigned int memResultCount; // @synthesize memResultCount=_memResultCount;
@property(nonatomic) unsigned int resultMsgCount; // @synthesize resultMsgCount=_resultMsgCount;
- (id)getAllResultWithSessionUserName:(id)arg1;
- (id)getAllResult;
- (id)copyHandlerIfSearchFinish;
- (id)getMsgResultLimit:(unsigned int)arg1;
- (id)getSessionResultLimit:(unsigned int)arg1;
- (void)dealloc;
- (void)cancelSearch;

@end

