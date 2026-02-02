//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TPDLProxyLogDelegate;

@interface TPDLProxyLog : NSObject
{
    id <TPDLProxyLogDelegate> _logDelegate;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(nonatomic) __weak id <TPDLProxyLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void)logDebug:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logError:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logWarn:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (void)logInfo:(id)arg1 line:(int)arg2 tag:(id)arg3 msg:(id)arg4;
- (id)init;

@end

