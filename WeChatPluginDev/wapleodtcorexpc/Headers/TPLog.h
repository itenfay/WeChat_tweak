//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TPLogDelegate;

@interface TPLog : NSObject
{
    id <TPLogDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TPLogDelegate> delegate; // @synthesize delegate=_delegate;

@end

