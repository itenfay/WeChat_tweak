//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface SpeakTextAudioExtInfo : NSObject
{
    unsigned int _bytesLen;
    unsigned int _audioTime;
}

+ (void)initialize;
+ (void)PBArrayAdd_audioTime;
+ (void)PBArrayAdd_bytesLen;
@property(nonatomic) unsigned int audioTime; // @synthesize audioTime=_audioTime;
@property(nonatomic) unsigned int bytesLen; // @synthesize bytesLen=_bytesLen;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

