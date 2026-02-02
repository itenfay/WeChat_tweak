//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol JumpToBizWebviewLogicHelperDelegate;

@interface JumpToBizWebviewLogicHelper
{
    id <JumpToBizWebviewLogicHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <JumpToBizWebviewLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleJumpToBizWebviewResponse:(id)arg1;
- (void)jumpToBizWebview:(id)arg1;
- (void)dealloc;

@end

