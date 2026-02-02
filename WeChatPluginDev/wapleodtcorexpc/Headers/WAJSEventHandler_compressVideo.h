//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SightAssetExportSession;

@interface WAJSEventHandler_compressVideo
{
    SightAssetExportSession *_session;
}

@property(retain, nonatomic) SightAssetExportSession *session; // @synthesize session=_session;
- (void)handleJSEvent:(id)arg1;

@end

