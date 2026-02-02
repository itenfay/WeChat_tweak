//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSMsgSearchMgr, NSArray, NSString;
@protocol FTSMsgSearchMgrDelegate;

@interface FTSMsgSearchResultHandler : NSObject
{
    _Bool _searchFinish;
    _Bool _isRuning;
    unsigned int _resultMsgCount;
    unsigned int _memResultCount;
    unsigned int _currentOffset;
    FTSMsgSearchMgr *_searchMgr;
    NSString *_searchKey;
    NSString *_handleKey;
    NSArray *_arrSessionResultItem;
    id <FTSMsgSearchMgrDelegate> _callbackTarget;
    NSString *_limitUsername;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isRuning; // @synthesize isRuning=_isRuning;
@property(nonatomic) _Bool searchFinish; // @synthesize searchFinish=_searchFinish;
@property(nonatomic) unsigned int currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) NSString *limitUsername; // @synthesize limitUsername=_limitUsername;
@property(nonatomic) __weak id <FTSMsgSearchMgrDelegate> callbackTarget; // @synthesize callbackTarget=_callbackTarget;
@property(retain, nonatomic) NSArray *arrSessionResultItem; // @synthesize arrSessionResultItem=_arrSessionResultItem;
@property(retain, nonatomic) NSString *handleKey; // @synthesize handleKey=_handleKey;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
@property(nonatomic) __weak FTSMsgSearchMgr *searchMgr; // @synthesize searchMgr=_searchMgr;
@property(nonatomic) unsigned int memResultCount; // @synthesize memResultCount=_memResultCount;
@property(nonatomic) unsigned int resultMsgCount; // @synthesize resultMsgCount=_resultMsgCount;
- (id)getAllResult;
- (id)getMsgResultLimit:(unsigned int)arg1;
- (id)getSessionResultLimit:(unsigned int)arg1;
- (void)dealloc;
- (void)cancelSearch;

@end

