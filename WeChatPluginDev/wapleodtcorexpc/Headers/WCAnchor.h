//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface WCAnchor : NSObject
{
    UIView *_view;
    int _type;
    struct CGPoint _offset;
}

- (void).cxx_destruct;
- (struct CGPoint)point;
- (id)view;
- (CDUnknownBlockType)offsetBy;
- (id)initWithView:(id)arg1 type:(int)arg2;

@end

