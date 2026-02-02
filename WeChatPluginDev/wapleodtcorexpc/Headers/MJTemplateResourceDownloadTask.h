//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJVideoTemplate, WCDownloadArgsWrap;

@interface MJTemplateResourceDownloadTask : NSObject
{
    _Bool _isHighPriority;
    MJVideoTemplate *_templateInfo;
    WCDownloadArgsWrap *_downloadArgs;
    CDUnknownBlockType _completion;
}

+ (id)taskWithTemplateInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) WCDownloadArgsWrap *downloadArgs; // @synthesize downloadArgs=_downloadArgs;
@property(retain, nonatomic) MJVideoTemplate *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(nonatomic) _Bool isHighPriority; // @synthesize isHighPriority=_isHighPriority;
- (_Bool)isRunningOrWaiting;
- (void)cancel;
- (_Bool)isEqualToTask:(id)arg1;
- (void)resume;
- (id)initWithTemplateInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

