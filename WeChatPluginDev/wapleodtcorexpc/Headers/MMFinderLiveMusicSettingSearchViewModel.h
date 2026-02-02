//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveTaskId, NSData, NSString;
@protocol MMFinderLiveMusicSettingSearchDelegate;

@interface MMFinderLiveMusicSettingSearchViewModel : NSObject
{
    _Bool _beginSearching;
    id <MMFinderLiveMusicSettingSearchDelegate> _searchDelegate;
    MMFinderLiveTaskId *_taskId;
    NSString *_currentSearchText;
    NSData *_lastBuffer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *currentSearchText; // @synthesize currentSearchText=_currentSearchText;
@property(nonatomic) _Bool beginSearching; // @synthesize beginSearching=_beginSearching;
@property(retain, nonatomic) MMFinderLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(nonatomic) __weak id <MMFinderLiveMusicSettingSearchDelegate> searchDelegate; // @synthesize searchDelegate=_searchDelegate;
- (_Bool)continueSearch;
- (void)onSearchResultReturnWithSearchText:(id)arg1 resultCode:(int)arg2 resultArray:(id)arg3 conintueFlag:(unsigned int)arg4 preLastBuffer:(id)arg5 newLastBuffer:(id)arg6;
- (void)innerSearchWithText:(id)arg1 lastBuffer:(id)arg2;
- (void)doSearchWithText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

