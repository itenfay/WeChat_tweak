//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateCompositeTask, OMJMusicInfo, OMJTemplateInfo, SightDraft;

@interface WCVideoProducerExportInfo : NSObject
{
    OMJTemplateInfo *_templateInfo;
    OMJMusicInfo *_musicInfo;
    SightDraft *_exportSightDraft;
    MJTemplateCompositeTask *_templateCompositeTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MJTemplateCompositeTask *templateCompositeTask; // @synthesize templateCompositeTask=_templateCompositeTask;
@property(retain, nonatomic) SightDraft *exportSightDraft; // @synthesize exportSightDraft=_exportSightDraft;
@property(retain, nonatomic) OMJMusicInfo *musicInfo; // @synthesize musicInfo=_musicInfo;
@property(retain, nonatomic) OMJTemplateInfo *templateInfo; // @synthesize templateInfo=_templateInfo;

@end

