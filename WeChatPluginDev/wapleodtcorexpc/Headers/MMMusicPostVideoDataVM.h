//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMMusicInfo, MMMusicLiveCGIMgr, MMMusicMVModel, NSMutableArray, NSString;
@protocol MMMusicPostVideoDataVMDelegate;

@interface MMMusicPostVideoDataVM : NSObject
{
    NSMutableArray *_arrData;
    MMMusicLiveCGIMgr *_cgiMgr;
    MMMusicMVModel *_mvModel;
    id <MMMusicPostVideoDataVMDelegate> _delegate;
    MMMusicInfo *_musicInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(nonatomic) __weak id <MMMusicPostVideoDataVMDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dataArray;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(_Bool)arg2 requestId:(id)arg3;
- (void)notifyOnDataChanged:(_Bool)arg1;
- (id)getDataById:(id)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)dataOfIndex:(long long)arg1;
- (long long)numberOfItemsInSection;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(_Bool)arg2;
- (void)loadNextPageData;
- (id)initWithMVModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

