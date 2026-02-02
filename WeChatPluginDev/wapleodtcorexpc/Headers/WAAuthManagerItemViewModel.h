//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WxaUseUserInfoItem_ScopeItem;

@interface WAAuthManagerItemViewModel : NSObject
{
    _Bool _isEdit;
    WxaUseUserInfoItem_ScopeItem *_scopeItem;
    CDUnknownBlockType _deleteAction;
    CDUnknownBlockType _reloadUIAction;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType reloadUIAction; // @synthesize reloadUIAction=_reloadUIAction;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(nonatomic) _Bool isEdit; // @synthesize isEdit=_isEdit;
@property(retain, nonatomic) WxaUseUserInfoItem_ScopeItem *scopeItem; // @synthesize scopeItem=_scopeItem;
- (id)initWithScopeItem:(id)arg1 isEdit:(_Bool)arg2;

@end

