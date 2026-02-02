//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveSEIFreeMicUserInfo : NSObject
{
    unsigned int _us;
    NSString *_uId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int us; // @synthesize us=_us;
@property(retain, nonatomic) NSString *uId; // @synthesize uId=_uId;
- (_Bool)isTalking;
- (void)updateWithMicUserInfo:(id)arg1;

@end

