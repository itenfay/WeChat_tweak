//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol WCFinderRefuseLikeListModelDelegate;

@interface WCFinderRefuseLikeListModel : NSObject
{
    id <WCFinderRefuseLikeListModelDelegate> _delegate;
    NSMutableArray *_contactArray;
    NSMutableArray *_currentModTypeInfoList;
    NSMutableArray *_failModTypeInfoList;
    NSMutableDictionary *_retryModTypeInfoDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *retryModTypeInfoDic; // @synthesize retryModTypeInfoDic=_retryModTypeInfoDic;
@property(retain, nonatomic) NSMutableArray *failModTypeInfoList; // @synthesize failModTypeInfoList=_failModTypeInfoList;
@property(retain, nonatomic) NSMutableArray *currentModTypeInfoList; // @synthesize currentModTypeInfoList=_currentModTypeInfoList;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(nonatomic) __weak id <WCFinderRefuseLikeListModelDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)getMaxBatchOnceNumber;
- (unsigned long long)getSelectedOnceNumber;
- (id)convertWCFinderContactToCContact:(id)arg1;
- (void)handleModContactResponse:(id)arg1 objectID:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)checkQueueWithObjectID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)editBlockFriendLikeWithObjectID:(id)arg1 addContacts:(id)arg2 removeContacts:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)friendsLikeOptionWithObjectID:(id)arg1 addContacts:(id)arg2 deleteContacts:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)friendsLikeOptionWithContact:(id)arg1 objectID:(id)arg2 optionType:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)fetchMoreData;
- (void)fetchLocalData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

