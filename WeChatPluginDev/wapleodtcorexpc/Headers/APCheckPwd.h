//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class UIViewController;
@protocol APCheckPwdDelegate;

@interface APCheckPwd : NSObject
{
    id <APCheckPwdDelegate> _delegate;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <APCheckPwdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)didSuccess;
- (void)start;
- (void)dealloc;

@end

