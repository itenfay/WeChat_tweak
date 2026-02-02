//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class ShareTimelineBaseImpl;

@interface WebviewJSEventHandler_shareTimeline
{
    ShareTimelineBaseImpl *_shareTimelineImpl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ShareTimelineBaseImpl *shareTimelineImpl; // @synthesize shareTimelineImpl=_shareTimelineImpl;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;

@end

