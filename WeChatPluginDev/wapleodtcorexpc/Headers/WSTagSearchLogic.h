//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMTagTextField, MMUISearchBar, NSMutableArray, NSString;
@protocol WSTagSearchDelegate;

@interface WSTagSearchLogic : NSObject
{
    _Bool _bForbidTagDeletion;
    id <WSTagSearchDelegate> _deletage;
    NSString *_tipsWhenEmptyNormalText;
    MMUISearchBar *_searchBar;
    MMTagTextField *_textField;
    NSMutableArray *_tagList;
    NSString *_tagText;
    NSString *_normalText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *normalText; // @synthesize normalText=_normalText;
@property(retain, nonatomic) NSString *tagText; // @synthesize tagText=_tagText;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) __weak MMTagTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak MMUISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSString *tipsWhenEmptyNormalText; // @synthesize tipsWhenEmptyNormalText=_tipsWhenEmptyNormalText;
@property(nonatomic) _Bool bForbidTagDeletion; // @synthesize bForbidTagDeletion=_bForbidTagDeletion;
@property(nonatomic) __weak id <WSTagSearchDelegate> deletage; // @synthesize deletage=_deletage;
- (id)getTagSearchText;
- (id)getCurrentTips;
- (void)hiddenSearchBarCustomTips;
- (void)updateSearchBarCustomTips;
- (void)updateTagSearchContent;
- (id)getSearchInputViewColor;
- (void)updateTagText;
- (void)resetTypingAttributes;
- (void)setTagAttributeText:(id)arg1;
- (id)getFont;
- (void)resetTagSearchStatus;
- (id)getTagText;
- (id)getTagList;
- (id)userQuery:(id)arg1;
- (id)getTagQueryInfo:(id)arg1;
- (void)handleSearchInputChanged:(id)arg1;
- (void)handleNormalTextChanged:(id)arg1;
- (void)tagSearchBarTextDidChanged:(id)arg1;
- (_Bool)tagSearchObj:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setTagHolders:(id)arg1 withNormalText:(id)arg2;
- (void)dealloc;
- (id)initWithTagTextField:(id)arg1;
- (id)initWithTagSearchBar:(id)arg1;

@end

