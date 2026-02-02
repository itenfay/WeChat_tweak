//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface TXLiveOrientationMonitor : NSObject
{
    struct Lock _lock;
    int _display_orientation;
    struct Client *_client;
}

+ (long long)currentInterfaceOrientation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)convertToInnerDisplayOrientation:(long long)arg1;
- (void)onOrientationChange;
- (int)getOrientation;
- (void)terminal;
- (void)dealloc;
- (id)initWithClient:(struct Client *)arg1;

@end

