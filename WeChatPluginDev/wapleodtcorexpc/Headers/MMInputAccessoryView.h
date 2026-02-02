//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@protocol MMInputAccessoryViewDelegate;

@interface MMInputAccessoryView
{
    id <MMInputAccessoryViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMInputAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setFrame:(struct CGRect)arg1;

@end

