//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol ITPPlayerStateWrapperDelegate;

@interface TPPlayerStateWrapper : NSObject
{
    id <ITPPlayerStateWrapperDelegate> _delegate;
    unsigned long long _currentState;
    unsigned long long _preState;
    unsigned long long _currentInnerState;
    unsigned long long _preInnerState;
}

+ (id)stringForInnerState:(unsigned long long)arg1;
+ (id)stringForPlayerState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property unsigned long long preInnerState; // @synthesize preInnerState=_preInnerState;
@property unsigned long long currentInnerState; // @synthesize currentInnerState=_currentInnerState;
@property unsigned long long preState; // @synthesize preState=_preState;
@property unsigned long long currentState; // @synthesize currentState=_currentState;
@property __weak id <ITPPlayerStateWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isNormalInnerState;
- (void)changeInnerToState:(unsigned long long)arg1;
- (void)changeToState:(unsigned long long)arg1;

@end

