//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol TXCVideoResultHandlerDelegate;

@interface TXCVideoResultHandler : NSObject
{
    id <TXCVideoResultHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TXCVideoResultHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)processVideoFrame:(id)arg1;
- (id)bindTo:(id)arg1;
- (void)processVideoFrameResult:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

