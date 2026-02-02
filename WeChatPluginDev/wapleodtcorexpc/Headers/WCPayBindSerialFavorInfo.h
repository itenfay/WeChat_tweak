//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WCPayBindSerialFavorInfo : NSObject
{
    NSString *_bind_serial;
    NSArray *_bind_serial_favor_list;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *bind_serial_favor_list; // @synthesize bind_serial_favor_list=_bind_serial_favor_list;
@property(retain, nonatomic) NSString *bind_serial; // @synthesize bind_serial=_bind_serial;

@end

