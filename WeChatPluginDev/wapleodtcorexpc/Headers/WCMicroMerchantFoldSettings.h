//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class WCMicroMerchantFoldInfo;
@protocol OS_dispatch_queue;

@interface WCMicroMerchantFoldSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_dataQueue;
    _Bool _isGenerating;
    WCMicroMerchantFoldInfo *_foldInfo;
}

+ (id)foldInfoSavePath;
- (void).cxx_destruct;
@property(readonly, nonatomic) WCMicroMerchantFoldInfo *foldInfo; // @synthesize foldInfo=_foldInfo;
@property(readonly, nonatomic) _Bool isGenerating; // @synthesize isGenerating=_isGenerating;
- (void)asyncSaveFoldInfo;
- (void)asyncLoadFoldInfo;
- (id)unfoldedUsernames;
- (id)generatedTime;
- (void)didFinishGeneratingWithUnfoldedUsernames:(id)arg1;
- (void)willStartGenerating;
- (id)init;

@end

