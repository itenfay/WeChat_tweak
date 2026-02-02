//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol WCFinderFriendsAlsoFollowViewModelDelegate;

@interface WCFinderFriendsAlsoFollowViewModel : NSObject
{
    _Bool _hasMoreData;
    int _scene;
    int _commentScene;
    id <WCFinderFriendsAlsoFollowViewModelDelegate> _delegate;
    long long _firstPageCount;
    NSString *_username;
    NSString *_fromUsername;
    NSMutableArray *_dataInfos;
    NSData *_lastBuf;
    NSMutableDictionary *_pendingFollowStateMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *pendingFollowStateMap; // @synthesize pendingFollowStateMap=_pendingFollowStateMap;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(retain, nonatomic) NSData *lastBuf; // @synthesize lastBuf=_lastBuf;
@property(retain, nonatomic) NSMutableArray *dataInfos; // @synthesize dataInfos=_dataInfos;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(retain, nonatomic) NSString *fromUsername; // @synthesize fromUsername=_fromUsername;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long firstPageCount; // @synthesize firstPageCount=_firstPageCount;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <WCFinderFriendsAlsoFollowViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (int)feedViewControllerScene;
- (void)changeContactState:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (unsigned long long)dataCount;
- (long long)indexOfContact:(id)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)cleanPendingFollowState:(unsigned long long)arg1 username:(id)arg2;
- (void)followContactAtIndex:(unsigned long long)arg1 followAction:(unsigned long long)arg2;
- (void)fetchDataWithCompletion:(CDUnknownBlockType)arg1 isFirstPage:(_Bool)arg2;
- (void)refretchDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithUsername:(id)arg1 scene:(int)arg2 fromUsername:(id)arg3 commentScene:(int)arg4;

@end

