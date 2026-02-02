//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SendAuthReq : NSObject
{
    NSString *scope;
    NSString *state;
}

@property(retain, nonatomic) NSString *state; // @synthesize state;
@property(retain, nonatomic) NSString *scope; // @synthesize scope;
- (id)init;

@end

