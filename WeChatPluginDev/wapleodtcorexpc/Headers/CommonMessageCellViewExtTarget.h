//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol CommonMessageCellViewExtTargetDelegate;

@interface CommonMessageCellViewExtTarget : NSObject
{
    id <CommonMessageCellViewExtTargetDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CommonMessageCellViewExtTargetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)unregisterExtension;
- (void)registerExtension;

@end

