//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSString, OrderedDictionary;

@interface WCFinderGroupLiveChatHistoryModel : NSObject
{
    NSData *_lastBuffer;
    OrderedDictionary *_cacheChatHistoryDict;
    NSMutableDictionary *_tempClientIdAndSeqDict;
    NSArray *_cacheChatHistoryItemList;
    NSArray *_cacheChatHistoryItemKeyList;
}

+ (void)initialize;
+ (void)PBArrayAdd_cacheChatHistoryItemKeyList;
+ (void)PBArrayAdd_cacheChatHistoryItemList;
+ (void)PBArrayAdd_tempClientIdAndSeqDict;
+ (void)PBArrayAdd_lastBuffer;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cacheChatHistoryItemKeyList; // @synthesize cacheChatHistoryItemKeyList=_cacheChatHistoryItemKeyList;
@property(retain, nonatomic) NSArray *cacheChatHistoryItemList; // @synthesize cacheChatHistoryItemList=_cacheChatHistoryItemList;
@property(retain, nonatomic) NSMutableDictionary *tempClientIdAndSeqDict; // @synthesize tempClientIdAndSeqDict=_tempClientIdAndSeqDict;
@property(retain, nonatomic) OrderedDictionary *cacheChatHistoryDict; // @synthesize cacheChatHistoryDict=_cacheChatHistoryDict;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

