//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface MMAudioPlayerQueue : NSObject
{
    float _m_volume;
    NSMutableArray *_m_audioQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) float m_volume; // @synthesize m_volume=_m_volume;
@property(retain, nonatomic) NSMutableArray *m_audioQueue; // @synthesize m_audioQueue=_m_audioQueue;
- (void)checkQueue;
- (id)init;
- (void)playSoundWithPath:(id)arg1 format:(unsigned long long)arg2;
- (void)playSoundWithData:(id)arg1 format:(unsigned long long)arg2;
- (id)playerWithFormat:(unsigned long long)arg1;
- (void)setVolume:(float)arg1;
- (void)onCommonPlayerError:(id)arg1;
- (void)onCommonPlayerPlayEnd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

