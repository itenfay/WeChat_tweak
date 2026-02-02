//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WCVideoProducerFetcherNotifier : NSObject
{
    CDUnknownBlockType _creationCompletionBlock;
    CDUnknownBlockType _preprocCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType preprocCompletionBlock; // @synthesize preprocCompletionBlock=_preprocCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType creationCompletionBlock; // @synthesize creationCompletionBlock=_creationCompletionBlock;
- (void)notifyPreprocCompleteWithResult:(_Bool)arg1 templateSession:(id)arg2;
- (void)notifyCreationCompleteWithResult:(_Bool)arg1;
- (void)dealloc;
- (id)_init;

@end

