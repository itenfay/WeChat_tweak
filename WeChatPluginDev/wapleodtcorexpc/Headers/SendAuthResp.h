//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface SendAuthResp
{
    NSString *code;
    NSString *state;
    NSString *lang;
    NSString *country;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *country; // @synthesize country;
@property(copy, nonatomic) NSString *lang; // @synthesize lang;
@property(copy, nonatomic) NSString *state; // @synthesize state;
@property(copy, nonatomic) NSString *code; // @synthesize code;
- (void)dealloc;
- (id)init;

@end

