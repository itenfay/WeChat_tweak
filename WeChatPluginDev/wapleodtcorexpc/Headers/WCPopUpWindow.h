//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@interface WCPopUpWindow
{
    CDUnknownBlockType _nonViewAreaTouchHandler;
    struct CGRect _viewFrame;
}

@property(copy, nonatomic) CDUnknownBlockType nonViewAreaTouchHandler; // @synthesize nonViewAreaTouchHandler=_nonViewAreaTouchHandler;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
