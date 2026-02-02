//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface WXMASViewAttribute : NSObject
{
    UIView *_view;
    id _item;
    long long _layoutAttribute;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long layoutAttribute; // @synthesize layoutAttribute=_layoutAttribute;
@property(readonly, nonatomic) __weak id item; // @synthesize item=_item;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSizeAttribute;
- (id)initWithView:(id)arg1 item:(id)arg2 layoutAttribute:(long long)arg3;
- (id)initWithView:(id)arg1 layoutAttribute:(long long)arg2;

@end

