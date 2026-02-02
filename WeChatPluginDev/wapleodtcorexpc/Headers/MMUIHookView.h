//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMUIHookViewDelegate;

@interface MMUIHookView
{
    id <MMUIHookViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMUIHookViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)setHidden:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg1;

@end

