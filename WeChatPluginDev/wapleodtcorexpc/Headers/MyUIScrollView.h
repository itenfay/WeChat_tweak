//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MyUIScrollViewDelegate;

@interface MyUIScrollView
{
    id <MyUIScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MyUIScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

