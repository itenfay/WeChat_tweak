//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMBindCardContext : NSObject
{
    NSString *_bindCardUuid;
    NSString *_deviceName;
    NSString *_deviceType;
}

+ (id)BindCardContextWithBindCardUuid:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSString *bindCardUuid; // @synthesize bindCardUuid=_bindCardUuid;
- (id)description;
- (id)initWithBindCardUuid:(id)arg1 deviceName:(id)arg2 deviceType:(id)arg3;

@end

