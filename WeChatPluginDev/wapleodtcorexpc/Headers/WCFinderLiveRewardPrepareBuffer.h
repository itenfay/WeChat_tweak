//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData;

@interface WCFinderLiveRewardPrepareBuffer : NSObject
{
    unsigned long long _sceneType;
    NSData *_prepareBuf;
    NSData *_ctxBuf;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *ctxBuf; // @synthesize ctxBuf=_ctxBuf;
@property(retain, nonatomic) NSData *prepareBuf; // @synthesize prepareBuf=_prepareBuf;
@property(nonatomic) unsigned long long sceneType; // @synthesize sceneType=_sceneType;

@end

