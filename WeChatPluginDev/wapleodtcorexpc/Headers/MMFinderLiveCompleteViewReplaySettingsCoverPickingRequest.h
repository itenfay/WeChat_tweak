//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMUIViewController, NSString;

@interface MMFinderLiveCompleteViewReplaySettingsCoverPickingRequest : NSObject
{
    NSString *_correlationId;
    MMUIViewController *_pickerHostingVc;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) MMUIViewController *pickerHostingVc; // @synthesize pickerHostingVc=_pickerHostingVc;
@property(retain, nonatomic) NSString *correlationId; // @synthesize correlationId=_correlationId;
- (id)init;

@end

