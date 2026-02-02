//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXMediaMessage;

@interface GetMessageFromWXResp
{
    _Bool bText;
    NSString *text;
    WXMediaMessage *message;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bText; // @synthesize bText;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (id)init;

@end

