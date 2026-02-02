//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WCFinderMemberShipPlaybackTabViewModel;
@protocol WCFinderMemberShipPlaybackTabDetailViewModelDelegate;

@interface WCFinderMemberShipPlaybackTabDetailViewModel : NSObject
{
    id <WCFinderMemberShipPlaybackTabDetailViewModelDelegate> _delegate;
    WCFinderMemberShipPlaybackTabViewModel *_playbackTabVM;
    NSMutableDictionary *_contentVMDict;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *contentVMDict; // @synthesize contentVMDict=_contentVMDict;
@property(retain, nonatomic) WCFinderMemberShipPlaybackTabViewModel *playbackTabVM; // @synthesize playbackTabVM=_playbackTabVM;
@property(nonatomic) __weak id <WCFinderMemberShipPlaybackTabDetailViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finderMemberShipZonePlaybackTabViewDeleteDataItemVM;
- (void)finderMemberShipZonePlaybackTabViewFetchListFail;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewNoMoreData;
- (void)setupCreatorCenterEntranceInfo:(id)arg1 exportId:(id)arg2;
- (_Bool)isAuthor;
- (unsigned long long)feedViewerScene;
- (void)fetchNextPageData;
- (void)fetchFirstPageData;
- (void)deleteContentVM:(id)arg1;
- (id)getContentVMWithfeedTabContentVM:(id)arg1;
- (id)contentVMOfTid:(id)arg1;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (long long)indexOfTid:(id)arg1;
- (unsigned long long)allDataCount;
- (_Bool)hasMoreData;
- (_Bool)hasFetchFirstPageData;
- (id)initWithPlaybackTabViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

