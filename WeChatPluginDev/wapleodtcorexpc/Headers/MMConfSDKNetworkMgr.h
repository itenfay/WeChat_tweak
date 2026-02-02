//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface MMConfSDKNetworkMgr : NSObject
{
    CDUnknownBlockType networkCallStatusCallback;
}

- (void).cxx_destruct;
- (void)ReachabilityChange:(unsigned int)arg1;
- (unsigned int)getNetworkType;
- (int)getCurrentNetType;
- (void)stopListen;
- (void)startListen:(CDUnknownBlockType)arg1;

@end

