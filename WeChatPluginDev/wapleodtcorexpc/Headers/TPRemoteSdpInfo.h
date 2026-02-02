//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface TPRemoteSdpInfo : NSObject
{
    _Bool _success;
    NSString *_remoteSdp;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *remoteSdp; // @synthesize remoteSdp=_remoteSdp;
@property(nonatomic) _Bool success; // @synthesize success=_success;

@end

