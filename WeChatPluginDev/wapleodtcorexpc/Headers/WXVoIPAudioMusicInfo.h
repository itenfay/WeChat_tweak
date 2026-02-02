//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXVoIPAudioMusicInfo : NSObject
{
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completeBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;

@end

