//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController;
@protocol MMTListTableViewContext;

@interface MMTListSectionController : NSObject
{
    _Bool _isFirstSection;
    _Bool _isLastSection;
    MMUIViewController *_viewController;
    id <MMTListTableViewContext> _tableViewContext;
    long long _section;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLastSection; // @synthesize isLastSection=_isLastSection;
@property(nonatomic) _Bool isFirstSection; // @synthesize isFirstSection=_isFirstSection;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <MMTListTableViewContext> tableViewContext; // @synthesize tableViewContext=_tableViewContext;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)onExposeItem:(id)arg1 indexPath:(id)arg2;
- (id)objectForIndexPath:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)didDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (void)willDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)viewForFooter;
- (id)viewForHeader;
- (double)heightForFooter;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;

@end

