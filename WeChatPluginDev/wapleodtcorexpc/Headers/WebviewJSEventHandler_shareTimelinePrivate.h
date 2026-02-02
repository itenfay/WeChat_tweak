//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, ShareTimelineBaseImpl;

@interface WebviewJSEventHandler_shareTimelinePrivate
{
    ShareTimelineBaseImpl *_shareTimelineImpl;
    NSData *_coverImageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *coverImageData; // @synthesize coverImageData=_coverImageData;
@property(retain, nonatomic) ShareTimelineBaseImpl *shareTimelineImpl; // @synthesize shareTimelineImpl=_shareTimelineImpl;
- (void)setupUploadTask:(id)arg1 forEvent:(id)arg2;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

