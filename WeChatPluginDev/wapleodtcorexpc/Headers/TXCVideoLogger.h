//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TXCVideoLoggerDelegate;

@interface TXCVideoLogger : NSObject
{
    id <TXCVideoLoggerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TXCVideoLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logAtLevel:(unsigned long long)arg1 message:(id)arg2;

@end

