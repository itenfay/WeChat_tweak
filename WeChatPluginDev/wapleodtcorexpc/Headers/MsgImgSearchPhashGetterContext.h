//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class CMessageWrap, MsgImgSearchPhashMemCache;

@interface MsgImgSearchPhashGetterContext : NSObject
{
    _Bool _isForbidSearch;
    CMessageWrap *_messageWrap;
    unsigned long long _sessionID;
    MsgImgSearchPhashMemCache *_phashMemCache;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isForbidSearch; // @synthesize isForbidSearch=_isForbidSearch;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MsgImgSearchPhashMemCache *phashMemCache; // @synthesize phashMemCache=_phashMemCache;
@property(nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_messageWrap;

@end

