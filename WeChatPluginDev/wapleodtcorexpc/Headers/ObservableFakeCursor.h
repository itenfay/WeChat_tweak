//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class NSString;

@interface ObservableFakeCursor : UIView
{
    id _observeTarget;
    id _observeObject;
    NSString *_keyPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id observeObject; // @synthesize observeObject=_observeObject;
@property(readonly, nonatomic) __weak id observeTarget; // @synthesize observeTarget=_observeTarget;
- (void)registerObserverTarget:(id)arg1 object:(id)arg2 keyPath:(id)arg3;
- (void)dealloc;

@end

