//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol SearchContactDataProviderDelegate;

@interface SearchContactDataProvider : NSObject
{
    _Bool _isFromAddFriendScene;
    _Bool _isShowDetailButton;
    id <SearchContactDataProviderDelegate> _delegate;
    NSString *_keyword;
    NSArray *_contactGroupArray;
    NSString *_svrErrorMsg;
    NSString *_jumpDesc;
    NSString *_jumpLink;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *jumpLink; // @synthesize jumpLink=_jumpLink;
@property(retain, nonatomic) NSString *jumpDesc; // @synthesize jumpDesc=_jumpDesc;
@property(nonatomic) _Bool isShowDetailButton; // @synthesize isShowDetailButton=_isShowDetailButton;
@property(retain, nonatomic) NSString *svrErrorMsg; // @synthesize svrErrorMsg=_svrErrorMsg;
@property(retain, nonatomic) NSArray *contactGroupArray; // @synthesize contactGroupArray=_contactGroupArray;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) __weak id <SearchContactDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isFromAddFriendScene; // @synthesize isFromAddFriendScene=_isFromAddFriendScene;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)startCommonWebSearch;
- (void)showContactInfoView:(id)arg1 resultRow:(unsigned int)arg2;
- (_Bool)hasFoundContact;
- (void)handleDidCancelSearch;
- (void)handleSearchResultDataSelectWithIndexPath:(id)arg1;
- (id)makeSearchResultCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (double)heightForRowInSearchResultAtIndexPath:(id)arg1;
- (long long)numberOfRowInSearchResultSection:(long long)arg1;
- (long long)numberOfSectionInSearchResult;
- (void)detailButtonClicked:(id)arg1;
- (void)makeNoUserTipsCell:(id)arg1;
- (double)getNoUserTipsCellHeight;
- (void)setJumpDesc:(id)arg1 andJumpLink:(id)arg2;
- (id)makeContactGroups:(id)arg1;
- (id)initWithFoundContacts:(id)arg1 andSearchKeyword:(id)arg2 andSvrErrMsg:(id)arg3 andDelegate:(id)arg4;
- (id)initWithFoundContact:(id)arg1 andSearchKeyword:(id)arg2 andSvrErrMsg:(id)arg3 andDelegate:(id)arg4;
- (id)initWithBSContent:(id)arg1 andFoundContact:(id)arg2 andSearchKeyword:(id)arg3 andLocation:(id)arg4 andDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

