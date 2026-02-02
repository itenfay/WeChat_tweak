//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface MPPageFastLoadEventMgr : NSObject
{
    NSSet *_setEventWithTmplType;
    NSMutableDictionary *_dictTmplDownloadState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dictTmplDownloadState; // @synthesize dictTmplDownloadState=_dictTmplDownloadState;
@property(retain, nonatomic) NSSet *setEventWithTmplType; // @synthesize setEventWithTmplType=_setEventWithTmplType;
- (unsigned int)downloadStateWithTemplateType:(unsigned int)arg1;
- (void)notifyPageFastLoadTemplateDownloadEvent:(unsigned int)arg1 templateType:(unsigned int)arg2 downloadState:(unsigned int)arg3 checkTmplInfo:(id)arg4 templateInfo:(id)arg5 detailDesc:(id)arg6;
- (void)notifyPageFastLoadTemplateDownloadEvent:(unsigned int)arg1 templateType:(unsigned int)arg2 downloadState:(unsigned int)arg3 checkTmplInfo:(id)arg4 templateInfo:(id)arg5;
- (id)init;

@end

