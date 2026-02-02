//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface WAFlutterTextInputPlatformView : NSObject
{
    NSString *_type;
    UIView *_view;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

