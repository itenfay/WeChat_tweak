//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXMediaMessage;

@interface LaunchFromWXReq
{
    NSString *lang;
    NSString *country;
    WXMediaMessage *message;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
- (id)init;

@end

