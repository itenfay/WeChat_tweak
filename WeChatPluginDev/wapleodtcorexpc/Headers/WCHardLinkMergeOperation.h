//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <Foundation/NSOperation.h>
typedef void (^CDUnknownBlockType)(void);

@interface WCHardLinkMergeOperation : NSOperation
{
    CDUnknownBlockType _mergeCompletion;
}

@property(copy) CDUnknownBlockType mergeCompletion; // @synthesize mergeCompletion=_mergeCompletion;
- (void)hardlinkTheSameFile;
- (void)start;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

@end
