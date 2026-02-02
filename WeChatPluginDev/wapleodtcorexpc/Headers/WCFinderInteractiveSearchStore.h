//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderCustomCGI;

@interface WCFinderInteractiveSearchStore : NSObject
{
    NSString *_lastKeyword;
    NSMutableArray *_dataItems;
    NSData *_lastBuff;
    unsigned long long _loadState;
    WCFinderCustomCGI *_lastCGI;
    long long _tabType;
}

- (void).cxx_destruct;
@property(nonatomic) long long tabType; // @synthesize tabType=_tabType;
@property(retain, nonatomic) WCFinderCustomCGI *lastCGI; // @synthesize lastCGI=_lastCGI;
@property(nonatomic) unsigned long long loadState; // @synthesize loadState=_loadState;
@property(retain, nonatomic) NSData *lastBuff; // @synthesize lastBuff=_lastBuff;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(retain, nonatomic) NSString *lastKeyword; // @synthesize lastKeyword=_lastKeyword;
- (void)requestNextPage:(CDUnknownBlockType)arg1 commentScene:(int)arg2;
- (void)search:(id)arg1 firstPage:(_Bool)arg2 commentScene:(int)arg3 complete:(CDUnknownBlockType)arg4;
- (void)search:(id)arg1 commentScene:(int)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;
- (id)initWithTabType:(long long)arg1;

@end

