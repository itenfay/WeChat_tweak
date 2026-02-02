//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol MMPopupJsApiHandlerDelegate;

@interface MMPopupJsApiHandler : NSObject
{
    id <MMPopupJsApiHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMPopupJsApiHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)addApi_close:(id)arg1;
- (void)addApi_popup:(id)arg1;
- (void)setupApiWithJSContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end

