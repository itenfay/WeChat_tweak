//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

typedef void (^CDUnknownBlockType)(void);

@class NSData, NSString;

@interface WWKFContentSendMsgInfo : NSObject
{
    NSString *_imageUrl;
    NSData *_imageData;
    NSString *_hintTitle;
    CDUnknownBlockType _sendMsgHandler;
}

@property(copy, nonatomic) CDUnknownBlockType sendMsgHandler; // @synthesize sendMsgHandler=_sendMsgHandler;
@property(copy, nonatomic) NSString *hintTitle; // @synthesize hintTitle=_hintTitle;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;

@end
