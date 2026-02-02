//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderLifeFilterTag;
@protocol WCFinderExpandableTagSelectorAction, WCFinderFeedBaseViewControllerProtocol;

@interface WCFinderExpandableTagSelectorDelegate : NSObject
{
    id <WCFinderFeedBaseViewControllerProtocol> _baseViewProtocol;
    WCFinderLifeFilterTag *_tag;
    id <WCFinderExpandableTagSelectorAction> _action;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderExpandableTagSelectorAction> action; // @synthesize action=_action;
@property(retain, nonatomic) WCFinderLifeFilterTag *tag; // @synthesize tag=_tag;
@property(nonatomic) __weak id <WCFinderFeedBaseViewControllerProtocol> baseViewProtocol; // @synthesize baseViewProtocol=_baseViewProtocol;
- (_Bool)_updateDefaultSelect:(id)arg1 forTag:(id)arg2;
- (void)updateDefaultSelect:(id)arg1 forTag:(id)arg2;
- (id)defaultSelected:(id)arg1;
- (unsigned long long)tagIdFromIdentifier:(id)arg1;
- (id)identifierForTag:(id)arg1;
- (void)tagSelector:(id)arg1 selectedAdded:(id)arg2 removes:(id)arg3;
- (void)tagSelector:(id)arg1 willDisplayView:(id)arg2 withIdentifier:(id)arg3;
- (long long)tagSelector:(id)arg1 numberOfGroup:(id)arg2;
- (id)tagSelector:(id)arg1 displayTitleForIdentifier:(id)arg2;
- (id)tagSelector:(id)arg1 identifierAtIndex:(id)arg2 forParent:(id)arg3;
- (id)tagSelector:(id)arg1 groupTitleForIdentifier:(id)arg2 section:(long long)arg3;
- (long long)tagSelector:(id)arg1 subItemCountForIdentifier:(id)arg2 indexPath:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

