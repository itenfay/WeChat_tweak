//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WCBizSchemeUrlBaseHandlerDelegate;

@interface WCBizSchemeUrlBaseHandler : NSObject
{
    id <WCBizSchemeUrlBaseHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCBizSchemeUrlBaseHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)targetLoginStatusIsLogin;
- (_Bool)needCustomizeWhenToDismissBlocingViewController;
- (void)startHandleWithActionBuffer:(id)arg1 transBuffer:(id)arg2 andTransBufferSign:(id)arg3;

@end

