//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface LiteAppTextInputPlatformView : NSObject
{
    NSString *_type;
    NSString *_data;
    UIView *_view;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)setupLiteAppKeyboardSafePassword:(id)arg1;
- (void)setupLiteAppKeyboardDefault:(id)arg1 json:(id)arg2;
- (void)setupLiteAppKeyboardPay:(id)arg1 type:(long long)arg2;
- (id)initWithType:(id)arg1 data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

