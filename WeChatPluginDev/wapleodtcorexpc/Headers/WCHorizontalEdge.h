//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class UIView;

@interface WCHorizontalEdge : NSObject
{
    UIView *_view;
    int _type;
    double _offset;
}

- (void).cxx_destruct;
- (double)x;
- (id)view;
- (CDUnknownBlockType)offsetBy;
- (id)initWithView:(id)arg1 type:(int)arg2;

@end

