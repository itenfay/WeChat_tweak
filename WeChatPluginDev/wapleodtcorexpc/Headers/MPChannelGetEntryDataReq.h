//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MPChannelGetEntryDataReq
{
    unsigned int _scene;
    NSString *_syncBuffer;
    NSString *_bizUsername;
    NSString *_videoPageUrl;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
@property(copy, nonatomic) NSString *videoPageUrl; // @synthesize videoPageUrl=_videoPageUrl;
@property(copy, nonatomic) NSString *bizUsername; // @synthesize bizUsername=_bizUsername;
@property(copy, nonatomic) NSString *syncBuffer; // @synthesize syncBuffer=_syncBuffer;

@end

