//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMFinderLiveConnectMicUser;

@interface MMFinderLiveConnectMicAnchorDisplayItem : NSObject
{
    unsigned long long _type;
    MMFinderLiveConnectMicUser *_micUser;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMFinderLiveConnectMicUser *micUser; // @synthesize micUser=_micUser;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;

@end

