//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSMutableArray;

@interface MMFinderLivePromoteDataModel : NSObject
{
    MMFinderLiveTaskId *_taskId;
    long long _errorCode;
    NSMutableArray *_promoteInfoList;
    NSMutableArray *_promoteAvailableItemList;
    NSMutableArray *_functionPanelDataArray;
}

+ (id)initWithTaskId:(id)arg1 promoteInfoList:(id)arg2 promoteAvailableItemList:(id)arg3 errorCode:(long long)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *functionPanelDataArray; // @synthesize functionPanelDataArray=_functionPanelDataArray;
@property(retain, nonatomic) NSMutableArray *promoteAvailableItemList; // @synthesize promoteAvailableItemList=_promoteAvailableItemList;
@property(retain, nonatomic) NSMutableArray *promoteInfoList; // @synthesize promoteInfoList=_promoteInfoList;
@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
- (id)finderLiveTask;
- (_Bool)isLiveNotice:(id)arg1;
- (long long)getLiveNoticeItemsCont;
- (_Bool)shouldShowAnchorTaskGuide:(id)arg1;
- (void)setSubPath:(id)arg1;
- (void)setupPaidCollectionItemStyle:(long long)arg1 functionItem:(id)arg2;
- (void)setupPaidCollectionItemWithSize:(long long)arg1 functionItem:(id)arg2;
- (id)changeModelWithItem:(id)arg1;
- (id)getChangeStringWithString:(id)arg1 size:(long long)arg2;
- (id)addChooseFunctionItem:(id)arg1 functionList:(id)arg2 disableList:(id)arg3;
- (id)getFunctionPanelDataArray;
- (id)getCurrentShowPromoteInfo;
- (_Bool)isContainPromoteItemWithType:(unsigned int)arg1;
- (id)promoteInfoItemsOfPromoteId:(unsigned long long)arg1;
- (id)availableItemOfItemType:(unsigned int)arg1;
- (id)promoteInfoItemsOfType:(unsigned int)arg1;
- (void)deletePromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updatePromoteInfoList:(id)arg1;
- (void)updateNoticePrmoteItem:(id)arg1;
- (void)insertPrmoteItem:(id)arg1;
- (_Bool)isContainPromoteItem:(id)arg1;

@end

