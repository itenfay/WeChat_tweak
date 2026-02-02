//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class SWTranscoding;

@interface MMVideoSWEncodeTask
{
    SWTranscoding *_softExportSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SWTranscoding *softExportSession; // @synthesize softExportSession=_softExportSession;
- (void)stopExport;
- (void)cleanExportSession;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

