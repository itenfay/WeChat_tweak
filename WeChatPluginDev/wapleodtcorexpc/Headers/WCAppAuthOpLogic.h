//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol WCAppAuthOpLogicDelegate;

@interface WCAppAuthOpLogic
{
    id <WCAppAuthOpLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAppAuthOpLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleDelResp:(id)arg1;
- (void)handleModResp:(id)arg1;
- (_Bool)deleteApp:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)modifyApp:(id)arg1 scope:(id)arg2 Scene:(unsigned int)arg3;
- (_Bool)modifyAppAllScope:(id)arg1 Scene:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

