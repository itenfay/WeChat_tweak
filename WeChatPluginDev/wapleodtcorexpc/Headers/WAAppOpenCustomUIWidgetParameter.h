//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIView;

@interface WAAppOpenCustomUIWidgetParameter
{
    _Bool _hasAlreadyAddToSuperview;
    unsigned long long _pageTarget;
    unsigned long long _componentTarget;
    UIView *_widgetView;
    CDUnknownBlockType _layoutBlock;
    unsigned long long _source;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasAlreadyAddToSuperview; // @synthesize hasAlreadyAddToSuperview=_hasAlreadyAddToSuperview;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(copy, nonatomic) CDUnknownBlockType layoutBlock; // @synthesize layoutBlock=_layoutBlock;
@property(retain, nonatomic) UIView *widgetView; // @synthesize widgetView=_widgetView;
@property(nonatomic) unsigned long long componentTarget; // @synthesize componentTarget=_componentTarget;
@property(nonatomic) unsigned long long pageTarget; // @synthesize pageTarget=_pageTarget;
- (id)widgetIdentifier;

@end

