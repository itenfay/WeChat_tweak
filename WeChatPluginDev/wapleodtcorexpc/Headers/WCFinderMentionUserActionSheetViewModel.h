//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class FTSContactSearchUtilLogic, NSArray, WCFinderMentionUserSearchViewModel, WCFinderMentionUserSection;
@protocol WCFinderMentionUserActionSheetViewModelDelegate;

@interface WCFinderMentionUserActionSheetViewModel : NSObject
{
    _Bool _isLoading;
    _Bool _isError;
    id <WCFinderMentionUserActionSheetViewModelDelegate> _delegate;
    NSArray *_sections;
    WCFinderMentionUserSection *_recentSection;
    WCFinderMentionUserSection *_followSection;
    NSArray *_normalSections;
    WCFinderMentionUserSearchViewModel *_search;
    FTSContactSearchUtilLogic *_contactSearchLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isError; // @synthesize isError=_isError;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) FTSContactSearchUtilLogic *contactSearchLogic; // @synthesize contactSearchLogic=_contactSearchLogic;
@property(retain, nonatomic) WCFinderMentionUserSearchViewModel *search; // @synthesize search=_search;
@property(retain, nonatomic) NSArray *normalSections; // @synthesize normalSections=_normalSections;
@property(retain, nonatomic) WCFinderMentionUserSection *followSection; // @synthesize followSection=_followSection;
@property(retain, nonatomic) WCFinderMentionUserSection *recentSection; // @synthesize recentSection=_recentSection;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak id <WCFinderMentionUserActionSheetViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)error;
- (_Bool)loading;
- (_Bool)empty;
- (_Bool)preSecitonIsFetchableForSection:(long long)arg1;
- (void)expandSection:(long long)arg1;
- (void)search:(id)arg1;
- (void)fetchMoreFollow:(_Bool)arg1 complete:(CDUnknownBlockType)arg2;
- (void)requestNextPage:(CDUnknownBlockType)arg1;
- (id)contactAtIndexPath:(id)arg1;
- (id)findMoreSec;
- (_Bool)hasMorePage;
- (void)fetchLocalContactList;
- (void)realUpdateViewModelData;
- (id)init;

@end

