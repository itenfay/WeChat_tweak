//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, WCFinderLiveBaseCgi;

@interface MMFinderLivePromoteLogic : NSObject
{
    _Bool _isFetching;
    MMFinderLiveTaskId *_taskId;
    CDUnknownBlockType _completion;
    WCFinderLiveBaseCgi *_addPromoteCGI;
    WCFinderLiveBaseCgi *_sendPromoteCGI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderLiveBaseCgi *sendPromoteCGI; // @synthesize sendPromoteCGI=_sendPromoteCGI;
@property(retain, nonatomic) WCFinderLiveBaseCgi *addPromoteCGI; // @synthesize addPromoteCGI=_addPromoteCGI;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (void)onPromoteManageDidClose;
- (void)cancelPromoteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendPromoteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePromoteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPromoteItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)fetchPromoteList:(CDUnknownBlockType)arg1;
- (id)initWithTaskId:(id)arg1;

@end

