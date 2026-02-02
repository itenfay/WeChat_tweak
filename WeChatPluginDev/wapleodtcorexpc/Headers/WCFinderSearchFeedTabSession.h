//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSString;

@interface WCFinderSearchFeedTabSession : NSObject
{
    _Bool _active;
    _Bool _continueFlag;
    _Bool _isLoading;
    _Bool _isError;
    int _inlineSearchScene;
    NSString *_tabName;
    NSData *_lastBuff;
    long long _reportTabId;
    NSString *_reqId;
    NSMutableArray *_mutFeedItems;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mutFeedItems; // @synthesize mutFeedItems=_mutFeedItems;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) _Bool isError; // @synthesize isError=_isError;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) int inlineSearchScene; // @synthesize inlineSearchScene=_inlineSearchScene;
@property(nonatomic) long long reportTabId; // @synthesize reportTabId=_reportTabId;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
- (id)description;
- (struct _NSRange)appendDatas:(id)arg1;
- (void)setFeedItems:(id)arg1;
@property(readonly, nonatomic) NSArray *feedItems;

@end

