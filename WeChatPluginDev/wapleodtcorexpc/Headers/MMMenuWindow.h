//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMMenuWindowDelegate;

@interface MMMenuWindow : NSObject
{
    id <MMMenuWindowDelegate> _delegate;
    struct CGRect _menuFrame;
}

@property(nonatomic) struct CGRect menuFrame; // @synthesize menuFrame=_menuFrame;
@property(nonatomic) __weak id <MMMenuWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

