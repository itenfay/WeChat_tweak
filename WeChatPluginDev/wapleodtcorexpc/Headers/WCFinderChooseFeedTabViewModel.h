//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString, WCFinderFeedPickerParams;
@protocol WCFinderChooseFeedTabViewModelDelegate;

@interface WCFinderChooseFeedTabViewModel : NSObject
{
    _Bool _continueFlag;
    id <WCFinderChooseFeedTabViewModelDelegate> _delegate;
    unsigned long long _dataFilterType;
    WCFinderFeedPickerParams *_params;
    unsigned long long _state;
    NSMutableArray *_dataArray;
    NSMutableSet *_tidContainSet;
    NSData *_lastBuffer;
}

+ (_Bool)canShowFinderPicker;
+ (_Bool)canShowPublishTab;
- (void).cxx_destruct;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(retain, nonatomic) NSMutableSet *tidContainSet; // @synthesize tidContainSet=_tidContainSet;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) WCFinderFeedPickerParams *params; // @synthesize params=_params;
@property(nonatomic) unsigned long long dataFilterType; // @synthesize dataFilterType=_dataFilterType;
@property(nonatomic) __weak id <WCFinderChooseFeedTabViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (int)tabType;
- (void)notifyOnDataChanged:(_Bool)arg1;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(_Bool)arg2 hasError:(_Bool)arg3;
- (void)insertContentVM:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadNextPageData;
- (void)loadFirstPageData;
- (long long)indexOfTid:(id)arg1;
- (id)contentVMOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataCount;
- (_Bool)hasMoreData;
- (_Bool)isPublishTabModel;
- (void)loadData:(_Bool)arg1;
- (id)tabTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

