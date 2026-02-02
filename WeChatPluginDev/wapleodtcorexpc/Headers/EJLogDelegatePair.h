//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol EJNativeLogViewDelegate;

@interface EJLogDelegatePair : NSObject
{
    int _referCount;
    id <EJNativeLogViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) int referCount; // @synthesize referCount=_referCount;
@property(nonatomic) __weak id <EJNativeLogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;

@end

