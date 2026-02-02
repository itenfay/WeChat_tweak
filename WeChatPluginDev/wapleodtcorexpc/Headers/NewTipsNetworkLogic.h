//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol NewTipsNetworkLogicDelegate;

@interface NewTipsNetworkLogic : NSObject
{
    id <NewTipsNetworkLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NewTipsNetworkLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handlePushNewTipsResponse:(id)arg1;
- (void)requestPushNewTipsWithConfig:(id)arg1;

@end

