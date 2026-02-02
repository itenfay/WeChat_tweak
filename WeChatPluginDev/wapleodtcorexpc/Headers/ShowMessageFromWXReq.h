//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXMediaMessage;

@interface ShowMessageFromWXReq
{
    WXMediaMessage *message;
    NSString *country;
    NSString *lang;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lang; // @synthesize lang;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
- (id)init;

@end

