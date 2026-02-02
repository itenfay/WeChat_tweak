//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString, WXMediaMessage, WXSceneDataObject;

@interface SendMessageToWXReq
{
    _Bool bText;
    int scene;
    NSString *text;
    WXMediaMessage *message;
    NSString *toUserOpenId;
    WXSceneDataObject *_sceneDataObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WXSceneDataObject *sceneDataObject; // @synthesize sceneDataObject=_sceneDataObject;
@property(retain, nonatomic) NSString *toUserOpenId; // @synthesize toUserOpenId;
@property(nonatomic) int scene; // @synthesize scene;
@property(nonatomic) _Bool bText; // @synthesize bText;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (id)init;

@end

