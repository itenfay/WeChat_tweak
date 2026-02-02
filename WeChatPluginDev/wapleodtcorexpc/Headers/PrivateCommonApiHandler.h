//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol PrivateCommonApiHandlerDelegate;

@interface PrivateCommonApiHandler : NSObject
{
    id <PrivateCommonApiHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PrivateCommonApiHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleCommonApiWithParams:(id)arg1;

@end

