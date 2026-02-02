//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCAdPagView, WCDataItem;

@interface WCAdInteractionTagLogic
{
    _Bool _isInteractionActive;
    WCAdPagView *_activeIconPagViewCache;
    WCDataItem *_dataItem;
    unsigned long long _contentItemScene;
}

+ (id)getLogicWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentItemScene; // @synthesize contentItemScene=_contentItemScene;
@property(retain, nonatomic) WCDataItem *dataItem; // @synthesize dataItem=_dataItem;
@property(nonatomic) _Bool isInteractionActive; // @synthesize isInteractionActive=_isInteractionActive;
@property(retain, nonatomic) WCAdPagView *activeIconPagViewCache; // @synthesize activeIconPagViewCache=_activeIconPagViewCache;
- (void)notifyInteractionActiveStateChanged;
- (void)realSetInteractionNotActivated;
- (void)dealloc;
- (id)initWithDataItem:(id)arg1 contentItemScene:(unsigned long long)arg2;

@end

